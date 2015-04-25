cmake_minimum_required(VERSION 2.8)

project(CodilityLessons)

enable_testing()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra")

macro(add_lesson LESSON_NAME)
  add_executable("${LESSON_NAME}" "${LESSON_NAME}.h" "${LESSON_NAME}.cc" "${LESSON_NAME}.txt")
  add_test("${LESSON_NAME}_test" "${LESSON_NAME}")
endmacro()

add_subdirectory(01-time-complexity)
add_subdirectory(02-counting-elements)
add_subdirectory(03-prefix-sums)

