
find_path(Hello_INCLUDE_DIR NAMES hello.hpp PATHS ~/hello-lib/include)
find_library(Hello_LIB NAMES say-hello PATHS ~/hello-lib/lib)

set(Hello_LIBRARY Hello::Hello)
add_library(Hello::Hello SHARED IMPORTED)
set_target_properties(Hello::Hello PROPERTIES
    INTERFACE_INCLUDE_DIRECTORIES "${Hello_INCLUDE_DIR}"
    IMPORTED_LOCATION "${Hello_LIB}")

if (Hello_INCLUDE_DIR AND Hello_LIBRARY)
    set(Hello_FOUND TRUE)
endif()