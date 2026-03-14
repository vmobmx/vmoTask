set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(task_cli)

target_sources(task_cli
  PRIVATE
    main.cpp
  PUBLIC
    FILE_SET CXX_MODULES
      BASE_DIRS ${CMAKE_CURRENT_SOURCE_DIR} 
      FILES
        piska.cppm
)

target_link_libraries(task_cli PRIVATE json_lib)
