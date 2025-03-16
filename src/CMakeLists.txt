# Install elements library
#
#   library: libelements_debug.o
#   library: libelements_release.o
#
# Define the following symbols
#
#   ELEMENTS_INCLUDE_DIR
#   elements::elements
#
# Normal usage would be:
#
#   include_directories(${ELEMENTS_INCLUDE_DIR})
#   target_link_libraries(elements::elements)

include_directories(
  "${CMAKE_CURRENT_SOURCE_DIR}/.."
  ${CMAKE_BINARY_DIR}
  )

string(TOLOWER ${CMAKE_BUILD_TYPE} buildl)
string(TOUPPER ${CMAKE_BUILD_TYPE} buildu)

set(namel elements)
string(TOUPPER ${namel} nameu)

file(GLOB src_files
  *.cpp
  )

add_library(${namel}_${buildl}
  STATIC
  ${src_files}
  )

set_target_properties(${namel}_${buildl}
  PROPERTIES
  COMPILE_FLAGS "${CMAKE_CXX_FLAGS_${buildu}}"
  )

add_library(elements::elements ALIAS ${namel}_${buildl})

set(ELEMENTS_INCLUDE_DIR
  "${CMAKE_CURRENT_SOURCE_DIR}/.."
  CACHE INTERNAL "elements include directory")
