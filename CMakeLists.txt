cmake_minimum_required(VERSION 2.8)

project(CodilityLessons)

enable_testing()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra")

macro(add_lesson LESSON_NAME)
  add_executable("${LESSON_NAME}" "${LESSON_NAME}.h" "${LESSON_NAME}.cc" "${LESSON_NAME}.txt" ${CMAKE_SOURCE_DIR}/check.h)
  add_test("${LESSON_NAME}_test" "${LESSON_NAME}")
endmacro()

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(01-time-complexity)
add_subdirectory(02-counting-elements)
add_subdirectory(03-prefix-sums)
add_subdirectory(04-sorting)
add_subdirectory(05-stacks-and-queues)
add_subdirectory(06-leader)
add_subdirectory(07-maximum-slice-problem)
add_subdirectory(08-prime-and-composite-numbers)
add_subdirectory(09-sieve-of-eratosthenes)
add_subdirectory(10-euclidean-algorithm)
