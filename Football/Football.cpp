#include <GL/gl.h> 
#include <GL/glut.h> 

int i, p, r, x, y;

void Circle() {
    glColor3f(0.0, 0.0, 0.0);
    glPointSize(7);

    float r = 100;
    float x = 0, y = 100;
    float p = 1 - r;

    glBegin(GL_POINTS);
    while (x != y)
    {
        x++;
        if (p < 0) {
            p += 2 * (x + 1) + 1;
        }
        else {
            y--;
            p += 2 * (x + 1) + 1 - 2 * (y - 1);
        }
        glVertex2d(x, y);
        glVertex2d(-x, y);
        glVertex2d(x, -y);
        glVertex2d(-x, -y);
        glVertex2d(y, x);
        glVertex2d(-y, x);
        glVertex2d(y, -x);
        glVertex2d(-y, -x);
    }
    glEnd();
    glFlush();
}


void display(void)
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    Circle();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 50.0f);
    glVertex2f(-40.0f, 10.0f);
    glVertex2f(-25.0f, -25.0f);
    glVertex2f(25.0f, -25.0f);
    glVertex2f(40.0f, 10.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-40.0f, 95.0f);
    glVertex2f(0.0f, 70.0f);
    glVertex2f(40.0f, 95.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(100.0f, -5.0f);
    glVertex2f(60.0f, 10.0f);
    glVertex2f(85.0f, 50.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-100.0f, -5.0f);
    glVertex2f(-60.0f, 10.0f);
    glVertex2f(-85.0f, 50.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-80.0f, -60.0f);
    glVertex2f(-35.0f, -45.0f);
    glVertex2f(-40.0f, -95.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(80.0f, -60.0f);
    glVertex2f(35.0f, -45.0f);
    glVertex2f(40.0f, -95.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-5.0f, 0.0f);
    glVertex2f(5.0f, 0.0f);
    glVertex2f(5.0f, 100.0f);
    glVertex2f(-5.0f, 100.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(5.0f, 0.0f);
    glVertex2f(5.0f, 10.0f);
    glVertex2f(100.0f, 30.0f);
    glVertex2f(100.0f, 20.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-5.0f, 0.0f);
    glVertex2f(-5.0f, 10.0f);
    glVertex2f(-100.0f, 30.0f);
    glVertex2f(-100.0f, 20.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-10.0f, 0.0f);
    glVertex2f(0.0f, -5.0f);
    glVertex2f(-45.0f, -50.0f);
    glVertex2f(-40.0f, -60.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(10.0f, 0.0f);
    glVertex2f(0.0f, -5.0f);
    glVertex2f(45.0f, -50.0f);
    glVertex2f(40.0f, -60.0f);
    glEnd();
    glFlush();


}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-300, 300, -300, 300);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Football");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}