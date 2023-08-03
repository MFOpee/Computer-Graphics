#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{
    // clear all pixels
    glClear(GL_COLOR_BUFFER_BIT);

    // draw white polygon(rectangle) 
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(250.0, 460.0, 0.0);
    glVertex3f(250.0, 550.0, 0.0);
    glVertex3f(350.0, 550.0, 0.0);
    glVertex3f(350.0, 460.0, 0.0);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(270.0, 510.0, 0.0);
    glVertex3f(270.0, 530.0, 0.0);
    glVertex3f(290.0, 530.0, 0.0);
    glVertex3f(290.0, 510.0, 0.0);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(310.0, 510.0, 0.0);
    glVertex3f(310.0, 530.0, 0.0);
    glVertex3f(330.0, 530.0, 0.0);
    glVertex3f(330.0, 510.0, 0.0);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex3f(300.0, 500.0, 0.0);
    glVertex3f(285.0, 475.0, 0.0);
    glVertex3f(315.0, 475.0, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(200.0, 250.0, 0.0);
    glVertex3f(200.0, 450.0, 0.0);
    glVertex3f(400.0, 450.0, 0.0);
    glVertex3f(400.0, 250.0, 0.0);
    glEnd();

    // left leg
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(225.0, 100.0, 0.0);
    glVertex3f(225.0, 250.0, 0.0);
    glVertex3f(275.0, 250.0, 0.0);
    glVertex3f(275.0, 100.0, 0.0);
    glEnd();

    // right leg
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(325.0, 100.0, 0.0);
    glVertex3f(325.0, 250.0, 0.0);
    glVertex3f(375.0, 250.0, 0.0);
    glVertex3f(375.0, 100.0, 0.0);
    glEnd();

    // left hand
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(140.0, 270.0, 0.0);
    glVertex3f(140.0, 430.0, 0.0);
    glVertex3f(190.0, 430.0, 0.0);
    glVertex3f(190.0, 270.0, 0.0);
    glEnd();

    // right hand
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(410.0, 270.0, 0.0);
    glVertex3f(410.0, 430.0, 0.0);
    glVertex3f(460.0, 430.0, 0.0);
    glVertex3f(460.0, 270.0, 0.0);
    glEnd();

    /* don't wait!
    * start processing buffered OpenGL routines
    */
    glFlush();
}
void init(void)
{
    /* select clearing (background) color */
    glClearColor(0.0, 0.0, 0.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 600.0, 0.0, 600.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("201-15-13903");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}