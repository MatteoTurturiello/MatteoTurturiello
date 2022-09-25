cmake_minimum_required(VERSION 3.21)
project(MatteoTurturiello)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(test)

set(SOURCE_FILES Object.cpp Object.h ShoppingList.cpp ShoppingList.h AllListsObs.cpp AllListsObs.h Subject.h Observer.h ListObs.cpp ListObs.h)
add_executable(MatteoTurturiello main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(MatteoTurturiello core)
