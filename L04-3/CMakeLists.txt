
get_filename_component(PROJECT_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS *.cpp)

add_executable(${PROJECT_NAME} ${SRC_FILES})



#set(LIBPNG_ROOT "/opt/homebrew/opt/libpng")  # brew --prefix 결과에 맞춰 수정
#include_directories(${LIBPNG_ROOT}/include)
#link_directories(${LIBPNG_ROOT}/lib)
#target_link_libraries(${PROJECT_NAME} png)

find_package(PNG REQUIRED)
target_link_libraries(L04-3 PRIVATE PNG::PNG)