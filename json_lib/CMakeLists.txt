file(GLOB LIB_SOURCES "*.c")

add_library(json_lib STATIC ${LIB_SOURCES})

target_include_directories(json_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


