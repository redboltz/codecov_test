LIST (APPEND check_PROGRAMS
    add.cpp
    mul.cpp
)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DBOOST_TEST_DYN_LINK")

FOREACH (source_file ${check_PROGRAMS})
    GET_FILENAME_COMPONENT (source_file_we ${source_file} NAME_WE)
    ADD_EXECUTABLE (
        ${source_file_we}
        ${source_file}
    )
    ADD_TEST (${source_file_we} ${source_file_we})
    SET_PROPERTY (TARGET ${source_file_we}
                  APPEND_STRING PROPERTY COMPILE_FLAGS " -std=c++14 -O0 -g --coverage -ftest-coverage -fno-inline")
    SET_PROPERTY (TARGET ${source_file_we}
                  APPEND_STRING PROPERTY LINK_FLAGS " --coverage")
    TARGET_LINK_LIBRARIES (${source_file_we}
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
    )
ENDFOREACH ()
