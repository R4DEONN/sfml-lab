add_executable(06 main.cpp)

include_directories(headers ../SFML/include)

set(CMAKE_BUILD_TYPE Release)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
set(SFML_STATIC_LIBRARIES TRUE)
find_package(Freetype)
find_package(JPEG)
find_package(SFML 2 COMPONENTS window graphics system REQUIRED)
include_directories(${SFML_INCLUDE_DIR})
target_link_libraries(06 ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})

target_compile_features(06 PUBLIC cxx_std_17)
target_compile_definitions(06 PRIVATE SFML_STATIC)