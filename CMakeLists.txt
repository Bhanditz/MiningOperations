cmake_minimum_required(VERSION 2.4)
project(mining_OP)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")

find_package(OpenGL  )
find_package(Irrlicht)

include_directories(${IRRLICHT_INCLUDE_DIR}
                    ${OPENGL_INCLUDE_DIR}
                    ${PROJECT_SOURCE_DIR}/include
                    ${PROJECT_SOURCE_DIR}/headers)

if(APPLE)
    find_library(CARBON_LIBRARY Carbon)
    find_library(COCOA_LIBRARY  Cocoa )
    find_library(IOKIT_LIBRARY  IOKit )
    set(OSX_LIBRARIES ${CARBON_LIBRARY} ${COCOA_LIBRARY} ${IOKIT_LIBRARY})
endif(APPLE)

set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -std=c++11 -o2"         )
set(CMAKE_CXX_FLAGS_DEBUG   "${CMAKE_CXX_FLAGS} -std=c++11 -o2 -Wall"   )

set(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS}  -std=c++11 -o2" )

set(MINING_OPERATIONS_SOURCE_FILES
        src/inih/ini.c
        src/inih/INIReader.cpp

        src/main.cpp

        src/objects/IObject.cpp
        src/objects/items/IItem.cpp

        #Armor
        src/objects/items/armor/IArmor.cpp
        src/objects/items/armor/HeadArmor.cpp
        src/objects/items/armor/ChestArmor.cpp
        src/objects/items/armor/LegArmor.cpp
        src/objects/items/armor/FootArmor.cpp

        #Tools
        src/objects/items/tools/ITool.cpp
        src/objects/items/tools/Pickaxe.cpp
        src/objects/items/tools/Sword.cpp)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(mining_OP WIN32 MACOSX_BUNDLE ${MINING_OPERATIONS_SOURCE_FILES})

target_link_libraries(mining_OP
        ${IRRLICHT_LIBRARY}
        ${OPENGL_LIBRARIES}
        ${OSX_LIBRARIES})
