
add_executable(curves_1
  curves_1.cpp
)

find_package(OpenGL REQUIRED COMPONENTS OpenGL)
find_package(GLU REQUIRED)
find_package(GLUT REQUIRED)

target_link_libraries(curves_1
  PRIVATE
    OpenGL::GL
    OpenGL::GLU
    GLUT::GLUT
)
