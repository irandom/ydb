PY2_LIBRARY()

VERSION(0.22.0)

LICENSE(MIT)

PEERDIR(
    contrib/python/certifi
    contrib/python/pyparsing
)

NO_LINT()

PY_SRCS(
    TOP_LEVEL
    httplib2/__init__.py
    httplib2/auth.py
    httplib2/certs.py
    httplib2/error.py
    httplib2/iri2uri.py
    httplib2/socks.py
)

RESOURCE_FILES(
    PREFIX contrib/python/httplib2/py2/
    .dist-info/METADATA
    .dist-info/top_level.txt
)

END()
