# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Timirbaev_Erik_Lab_3_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Timirbaev_Erik_Lab_3_autogen.dir\\ParseCache.txt"
  "Timirbaev_Erik_Lab_3_autogen"
  )
endif()
