project(raiiaction)

set(RAII_SRC_FILES
    src/raiiaction.cpp
)

add_library(raii_lib STATIC ${RAII_SRC_FILES})
