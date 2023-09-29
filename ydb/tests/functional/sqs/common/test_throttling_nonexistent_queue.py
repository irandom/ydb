#!/usr/bin/env python
# -*- coding: utf-8 -*-
from hamcrest import assert_that, raises

from ydb.tests.library.sqs.test_base import KikimrSqsTestBase


class TestSqsThrottlingOnNonexistentQueue(KikimrSqsTestBase):

    def test_throttling_on_nonexistent_queue(self):
        queue_url = self._create_queue_and_assert(self.queue_name, False, True)
        nonexistent_queue_url = queue_url + "_nonex"

        def get_attributes_of_nonexistent_queue():
            self._sqs_api.get_queue_attributes(nonexistent_queue_url)

        # Draining budget
        for _ in range(16):
            try:
                get_attributes_of_nonexistent_queue()
            except Exception:
                pass

        throttling_exception_pattern = ".*</Message><Code>ThrottlingException</Code>.*"

        assert_that(
            get_attributes_of_nonexistent_queue,
            raises(
                RuntimeError,
                pattern=throttling_exception_pattern
            )
        )

        assert_that(
            lambda: self._sqs_api.send_message(nonexistent_queue_url, "foobar"),
            raises(
                RuntimeError,
                pattern=throttling_exception_pattern
            )
        )