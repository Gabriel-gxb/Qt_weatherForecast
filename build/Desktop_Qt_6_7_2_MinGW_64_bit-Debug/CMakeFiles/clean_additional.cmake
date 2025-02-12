# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\WeatherForecast_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\WeatherForecast_autogen.dir\\ParseCache.txt"
  "WeatherForecast_autogen"
  )
endif()
