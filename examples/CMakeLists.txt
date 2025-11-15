
add_executable(curves_1
  curves_1.cpp
)

if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(curves_1 PRIVATE -Wall)
endif()

find_package(OpenGL REQUIRED COMPONENTS OpenGL)
find_package(GLUT REQUIRED)

target_link_libraries(curves_1
  PRIVATE
    OpenGL::GL
    OpenGL::GLU
    GLUT::GLUT
)
