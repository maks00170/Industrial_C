project(main)

set(MAIN_SRC_FILES
    src/main.cpp
)

add_executable(main ${MAIN_SRC_FILES})
target_link_libraries(main PRIVATE raii_lib)

set_target_properties(main PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
)