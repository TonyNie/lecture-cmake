#set command
MESSAGE(STATUS "In src")
SET(TARGET helloword)

SET(SRC main.cpp)

ADD_EXECUTABLE(${TARGET} ${SRC})

MESSAGE(STATUS "CMAKE_SOURCE_DIR:" ${CMAKE_SOURCE_DIR})
MESSAGE(STATUS "PROJECT_SOURCE_DIR:" ${PROJECT_SOURCE_DIR})
MESSAGE(STATUS "PROJECT_BINARY_DIR:" ${PROJECT_BINARY_DIR})

