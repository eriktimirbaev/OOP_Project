# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Timirbaev_Erik_AS-22-04_Lab_4_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Timirbaev_Erik_AS-22-04_Lab_4_autogen.dir\\ParseCache.txt"
  "Timirbaev_Erik_AS-22-04_Lab_4_autogen"
  )
endif()
