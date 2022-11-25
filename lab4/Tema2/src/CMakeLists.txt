cmake_minimum_required(VERSION 3.0)

add_subdirectory(Bautura)
add_subdirectory(Cafea)
add_subdirectory(Mancare)
add_subdirectory(Meniu)

add_library(${PROJECT}-main OBJECT 
    main.cpp
)

target_include_directories(${PROJECT}-main
    PRIVATE
    ${CMAKE_SOURCE_DIR}/include/
)

set(TARGET_OBJECT
    Bautura/Bautura.cpp
    Cafea/Cafea.cpp
    Mancare/Mancare.cpp
    Meniu/Meniu.cpp
    Apa/Apa.cpp
)

add_library(lib STATIC ${TARGET_OBJECT})

add_executable(${PROJECT} 
    main.cpp
)

target_link_libraries(${PROJECT} PUBLIC lib)

target_include_directories(${PROJECT}
    PRIVATE src INTERFACE
    $<BUILD_INTERFACE:${CAMKE_CURRENT_SOURCE_DIR}/inc>
    $<INSTALL_INTERFACE:inc>    
)

