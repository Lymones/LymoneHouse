# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QtTest2_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QtTest2_autogen.dir\\ParseCache.txt"
  "QtTest2_autogen"
  )
endif()
