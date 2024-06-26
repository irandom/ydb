LLVM_BC(
    postgresql/src/backend/catalog/pg_publication.c
    postgresql/src/backend/utils/adt/arrayfuncs.c
    postgresql/src/backend/utils/adt/rangetypes_gist.c
    postgresql/src/backend/utils/adt/rangetypes_typanalyze.c
    postgresql/src/backend/utils/adt/tsquery_gist.c
    postgresql/src/backend/utils/adt/tsvector_op.c
    pg_kernels.5.cpp

    NAME PgFuncs5

    SYMBOLS
    arrow_array_cardinality
    arrow_array_dims
    arrow_array_eq
    arrow_array_fill
    arrow_array_fill_with_lower_bounds
    arrow_array_ge
    arrow_array_gt
    arrow_array_in
    arrow_array_larger
    arrow_array_le
    arrow_array_length
    arrow_array_lower
    arrow_array_lt
    arrow_array_ndims
    arrow_array_ne
    arrow_array_out
    arrow_array_recv
    arrow_array_remove
    arrow_array_replace
    arrow_array_send
    arrow_array_smaller
    arrow_array_to_tsvector
    arrow_array_unnest_support
    arrow_array_upper
    arrow_arraycontained
    arrow_arraycontains
    arrow_arrayoverlap
    arrow_btarraycmp
    arrow_gtsquery_compress
    arrow_gtsquery_consistent
    arrow_gtsquery_consistent_oldsig
    arrow_gtsquery_penalty
    arrow_gtsquery_picksplit
    arrow_gtsquery_same
    arrow_gtsquery_union
    arrow_hash_array
    arrow_hash_array_extended
    arrow_multirange_gist_compress
    arrow_multirange_gist_consistent
    arrow_multirange_typanalyze
    arrow_pg_relation_is_publishable
    arrow_range_gist_consistent
    arrow_range_gist_penalty
    arrow_range_gist_picksplit
    arrow_range_gist_same
    arrow_range_gist_union
    arrow_range_typanalyze
    arrow_trim_array
    arrow_ts_match_qv
    arrow_ts_match_tq
    arrow_ts_match_tt
    arrow_ts_match_vq
    arrow_tsvector_cmp
    arrow_tsvector_concat
    arrow_tsvector_delete_arr
    arrow_tsvector_delete_str
    arrow_tsvector_eq
    arrow_tsvector_filter
    arrow_tsvector_ge
    arrow_tsvector_gt
    arrow_tsvector_le
    arrow_tsvector_length
    arrow_tsvector_lt
    arrow_tsvector_ne
    arrow_tsvector_setweight
    arrow_tsvector_setweight_by_filter
    arrow_tsvector_strip
    arrow_tsvector_to_array
    arrow_tsvector_update_trigger_bycolumn
    arrow_tsvector_update_trigger_byid
    arrow_width_bucket_array
)
