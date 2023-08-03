#include <GL/gl.h> 
#include <GL/glut.h>

int i, p, r, x, y;

void Circle()
{
    r = 100;
    x = 0, y = r;
    p = 1 - r;

    while (x < y)
    {
        glColor3f(1.0, 0.0, 0.0);
        glBegin(GL_POLYGON);
        glVertex2d(x - 150, y + 450);
        glVertex2d(x - 150, -y + 450);
        glVertex2d(-x - 150, -y + 450);
        glVertex2d(-x - 150, y + 450);
        glVertex2d(y - 150, x + 450);
        glVertex2d(y - 150, -x + 450);
        glVertex2d(-y - 150, -x + 450);
        glVertex2d(-y - 150, x + 450);

        if (p < 0)
        {
            x = x + 1;
            p = p + 2 * x + 1;
        }
        else
        {
            x = x + 1;
            y = y - 1;
            p = p + 2 * x + 1 - 2 * y;
        }
    }
    glEnd();
}

void Circle2()
{
    r = 80;
    x = 0, y = r;
    p = 1 - r;

    while (x < y)
    {
        glColor3f(1.0, 0.0, 0.0);
        glBegin(GL_POLYGON);
        glVertex2d(x + 300, y - 150);
        glVertex2d(x + 300, -y - 150);
        glVertex2d(-x + 300, -y - 150);
        glVertex2d(-x + 300, y - 150);
        glVertex2d(y + 300, x - 150);
        glVertex2d(y + 300, -x - 150);
        glVertex2d(-y + 300, -x - 150);
        glVertex2d(-y + 300, x - 150);

        if (p < 0)
        {
            x = x + 1;
            p = p + 2 * x + 1;
        }
        else
        {
            x = x + 1;
            y = y - 1;
            p = p + 2 * x + 1 - 2 * y;
        }
    }
    glEnd();
}
void Circle3()
{
    r = 80;
    x = 0, y = r;
    p = 1 - r;

    while (x < y)
    {
        glColor3f(0.0, 0.0, 1.0);
        glBegin(GL_POLYGON);
        glVertex2d(x + 200, y - 100);
        glVertex2d(x + 200, -y - 100);
        glVertex2d(-x + 200, -y - 100);
        glVertex2d(-x + 200, y - 100);
        glVertex2d(y + 200, x - 100);
        glVertex2d(y + 200, -x - 100);
        glVertex2d(-y + 200, -x - 100);
        glVertex2d(-y + 200, x - 100);


        glColor3f(0.0, 0.0, 1.0);
        glBegin(GL_POLYGON);
        glVertex2d(x + 400, y - 100);
        glVertex2d(x + 400, -y - 100);
        glVertex2d(-x + 400, -y - 100);
        glVertex2d(-x + 400, y - 100);
        glVertex2d(y + 400, x - 100);
        glVertex2d(y + 400, -x - 100);
        glVertex2d(-y + 400, -x - 100);
        glVertex2d(-y + 400, x - 100);

        if (p < 0)
        {
            x = x + 1;
            p = p + 2 * x + 1;
        }
        else
        {
            x = x + 1;
            y = y - 1;
            p = p + 2 * x + 1 - 2 * y;
        }
    }
    glEnd();
}

void display(void)
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //Sky
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.9f);
    glVertex2f(-600.0f, 100.0f);
    glVertex2f(-600.0f, 600.0f);
    glVertex2f(600.0f, 600.0f);
    glVertex2f(600.0f, 100.0f);
    glEnd();

    Circle();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-600.0f, 100.0f);
    glVertex2f(-500.0f, 300.0f);
    glVertex2f(-400.0f, 100.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-400.0f, 100.0f);
    glVertex2f(-300.0f, 400.0f);
    glVertex2f(-200.0f, 100.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-200.0f, 100.0f);
    glVertex2f(0.0f, 300.0f);
    glVertex2f(200.0f, 100.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(400.0f, 100.0f);
    glVertex2f(300.0f, 400.0f);
    glVertex2f(200.0f, 100.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(600.0f, 100.0f);
    glVertex2f(500.0f, 300.0f);
    glVertex2f(400.0f, 100.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(290.0f, -150.0f);
    glVertex2f(310.0f, -150.0f);
    glVertex2f(310.0f, -600.0f);
    glVertex2f(290.0f, -600.0f);
    glEnd();

    Circle3();
    Circle2();

    glFlush();
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-600, 600, -600, 600);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("183-15-12010");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}