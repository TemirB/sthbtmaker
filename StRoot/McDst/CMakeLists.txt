# # CMakeLists.txt for StFemtoEvent package. It creates a library with dictionary
# cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
# project(McDst)

# # You need to tell CMake where to find the ROOT installation. This can be done in a number of ways:
# #   - ROOT built with classic configure/make use the provided $ROOTSYS/etc/cmake/FindROOT.cmake
# #   - ROOT built with CMake. Add in CMAKE_PREFIX_PATH the installation prefix for ROOT
# list(APPEND CMAKE_PREFIX_PATH $ENV{ROOTSYS})

# #---Locate the ROOT package and defines a number of variables (e.g. ROOT_INCLUDE_DIRS)
# find_package(ROOT REQUIRED COMPONENTS MathCore RIO Hist Tree Net)

# #---Define useful ROOT functions and macros (e.g. ROOT_GENERATE_DICTIONARY)
# if(ROOT_CMAKE)
#   include(${ROOT_USE_FILE})
# endif(ROOT_CMAKE)

#---Define _VANILLA_ROOT_ variable needed for the project
# add_definitions(-D_VANILLA_ROOT_)

set(INCLUDE_DIRECTORIES
  ${CMAKE_SOURCE_DIR}
  ${ROOT_INCLUDE_DIRS}
)

include_directories(${INCLUDE_DIRECTORIES})
add_definitions(${ROOT_CXX_FLAGS})

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_C_FLAGS "-O2")

set(HEADER_FILES
"${CMAKE_CURRENT_SOURCE_DIR}/McArrays.h"
"${CMAKE_CURRENT_SOURCE_DIR}/McDst.h"
"${CMAKE_CURRENT_SOURCE_DIR}/McDstCut.h"
"${CMAKE_CURRENT_SOURCE_DIR}/McDstQA.h"
"${CMAKE_CURRENT_SOURCE_DIR}/McDstReader.h"
"${CMAKE_CURRENT_SOURCE_DIR}/McEvent.h"
"${CMAKE_CURRENT_SOURCE_DIR}/McPIDConverter.h"
"${CMAKE_CURRENT_SOURCE_DIR}/McParticle.h"
"${CMAKE_CURRENT_SOURCE_DIR}/McRun.h"
)

set(CXX_FILES
"${CMAKE_CURRENT_SOURCE_DIR}/McArrays.cxx"
"${CMAKE_CURRENT_SOURCE_DIR}/McDst.cxx"
"${CMAKE_CURRENT_SOURCE_DIR}/McDstCut.cxx"
"${CMAKE_CURRENT_SOURCE_DIR}/McDstQA.cxx"
"${CMAKE_CURRENT_SOURCE_DIR}/McDstReader.cxx"
"${CMAKE_CURRENT_SOURCE_DIR}/McEvent.cxx"
"${CMAKE_CURRENT_SOURCE_DIR}/McPIDConverter.cxx"
"${CMAKE_CURRENT_SOURCE_DIR}/McParticle.cxx"
"${CMAKE_CURRENT_SOURCE_DIR}/McRun.cxx"
)

#---Generate dictionary for the project
ROOT_GENERATE_DICTIONARY(G__McDst
	${HEADER_FILES}
	LINKDEF McDstLinkDef.h)

#---Create a shared library with generated dictionary
add_library(McDst SHARED
	${CXX_FILES}
	G__McDst.cxx)

target_link_libraries(McDst ${ROOT_LIBRARIES})
