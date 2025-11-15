// Copyright 2025 Kaden Slater

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include <cmath>

#include "data_types.h"

#define INTERVAL_SIZE 100
const float PI = 3.14159265358979323846;

void displayFunc();

float interval[INTERVAL_SIZE];

cppgl::Point2f a;

float x(float t) {
    return std::sin(3.0f*t);
}

float y(float t) {
    return std::cos(2.0f*t);
}


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

    float fIntervalSize = (float) INTERVAL_SIZE;
    for (int i = 0; i < INTERVAL_SIZE; i++) {
        interval[i] = ((float) i) / fIntervalSize * 2.0f * PI;
    }
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

    float scale = 100.0f;
    glBegin(GL_LINES);
        for (int i = 1; i < INTERVAL_SIZE; i++) {
            glVertex2f(
                320.0f + scale*x(interval[i - 1]),
                240.0f + scale*y(interval[i - 1]));

            glVertex2f(
                320.0f + scale*x(interval[i]),
                240.0f + scale*y(interval[i]));
        }
    glEnd();

    glFlush();
}
