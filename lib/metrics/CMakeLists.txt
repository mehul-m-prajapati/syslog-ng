set(METRICS_HEADERS
    metrics/metrics.h
    metrics/dyn-metrics-store.h
    metrics/dyn-metrics-cache.h
    metrics/dyn-metrics-template.h
    metrics/label-template.h
    PARENT_SCOPE)

set(METRICS_SOURCES
    metrics/metrics.c
    metrics/dyn-metrics-store.c
    metrics/dyn-metrics-cache.c
    metrics/dyn-metrics-template.c
    metrics/label-template.c
    PARENT_SCOPE)

#add_test_subdirectory(tests)
