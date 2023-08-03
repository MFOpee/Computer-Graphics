#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{
    // clear all pixels
    glClear(GL_COLOR_BUFFER_BIT);

    // draw green triangle 
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex3f(300.0, 550.0, 0.0);
    glVertex3f(450.0, 450.0, 0.0);
    glVertex3f(150.0, 450.0, 0.0);
    glEnd();

    // draw white polygon(rectangle) 
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(150.0, 450.0, 0.0);
    glVertex3f(450.0, 450.0, 0.0);
    glVertex3f(450.0, 150.0, 0.0);
    glVertex3f(150.0, 150.0, 0.0);
    glEnd();

    // draw blue door
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(250.0, 150.0, 0.0);
    glVertex3f(250.0, 375.0, 0.0);
    glVertex3f(350.0, 375.0, 0.0);
    glVertex3f(350.0, 150.0, 0.0);
    glEnd();

    // draw red window
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(160.0, 270.0, 0.0);
    glVertex3f(160.0, 350.0, 0.0);
    glVertex3f(240.0, 350.0, 0.0);
    glVertex3f(240.0, 270.0, 0.0);
    glEnd();

    // draw red window
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(360.0, 270.0, 0.0);
    glVertex3f(360.0, 350.0, 0.0);
    glVertex3f(440.0, 350.0, 0.0);
    glVertex3f(440.0, 270.0, 0.0);
    glEnd();

    glFlush();
}
void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 600.0, 0.0, 600.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(1000, 100);
    glutCreateWindow("201-15-13903");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}