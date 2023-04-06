project(raiiaction_test)

set(RAII_TEST_SRC_FILES
    src/UnitTest.cpp
)

add_executable(raiiaction_test ${RAII_TEST_SRC_FILES} ${CMAKE_SOURCE_DIR}/third-party/Catch2/extras/catch_amalgamated.cpp)
target_link_libraries(raiiaction_test PRIVATE raii_lib)
target_include_directories(raiiaction_test PRIVATE ${CMAKE_SOURCE_DIR}/third-party/Catch2/src)

set_target_properties(raiiaction_test PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
)