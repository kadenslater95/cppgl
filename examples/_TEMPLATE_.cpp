// Copyright 2025 Kaden Slater

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>


void displayFunc();


void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);

    glColor3f(1.0f, 1.0f, 1.0f);

    // Classic OpenGL antialiasing setup for line primitives
    glEnable(GL_LINE_SMOOTH);
    glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glLineWidth(1.5f);
#ifdef GL_MULTISAMPLE
    glEnable(GL_MULTISAMPLE);
#endif

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_MULTISAMPLE);

    glutInitWindowSize(640, 480);
    glutInitWindowPosition(100, 150);
    glutCreateWindow("OpenGL UT Template");

    glutDisplayFunc(displayFunc);

    init();

    glutMainLoop();

    return 0;
}


void displayFunc() {
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);
        glVertex2i(100, 100);
        glVertex2i(200, 200);
    glEnd();

    glFlush();
}
