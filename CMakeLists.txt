cmake_minimum_required(VERSION 3.14) # Lower version for wider compatibility

project(IdleFarming)

# Set C++ standard and make it a requirement
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF) # Use -std=c++20 instead of -std=gnu++20

# Add platform-specific settings
if(WIN32)
    # Windows-specific settings
    add_compile_definitions(WINDOWS=1)
elseif(APPLE)
    # macOS-specific settings
    add_compile_definitions(APPLE=1)
    # Add macOS minimum version if needed
    # set(CMAKE_OSX_DEPLOYMENT_TARGET "10.15")
elseif(UNIX)
    # Linux/Unix-specific settings
    add_compile_definitions(LINUX=1)
endif()

# Output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Add build type options
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "Choose the type of build" FORCE)
endif()
set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "RelWithDebInfo" "MinSizeRel")

# Include directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# Source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Add the executable
add_executable(IdleFarming ${SOURCES} main.cpp
        Game.cpp
        Game.h)

# Set properties for the target
set_target_properties(IdleFarming PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

# Install targets
install(TARGETS IdleFarming
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
)

# Enable testing
enable_testing()