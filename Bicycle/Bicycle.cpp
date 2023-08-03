#include <GL/gl.h> 
#include <GL/glut.h> 

int i, p, r, x, y;

void Circle() {
    glColor3f(1.0, 0.0, 0.0);
    glPointSize(4);

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
        glVertex2d(x + 200, y);
        glVertex2d(-x + 200, y);
        glVertex2d(x + 200, -y);
        glVertex2d(-x + 200, -y);
        glVertex2d(y + 200, x);
        glVertex2d(-y + 200, x);
        glVertex2d(y + 200, -x);
        glVertex2d(-y + 200, -x);

        glVertex2d(x - 200, y);
        glVertex2d(-x - 200, y);
        glVertex2d(x - 200, -y);
        glVertex2d(-x - 200, -y);
        glVertex2d(y - 200, x);
        glVertex2d(-y - 200, x);
        glVertex2d(y - 200, -x);
        glVertex2d(-y - 200, -x);
    }
    glEnd();
    glFlush();
}


void display(void)
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    Circle();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.0f, 5.0f);
    glVertex2f(0.0f, -5.0f);
    glVertex2f(200.0f, -5.0f);
    glVertex2f(200.0f, 5.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-80.0f, 240.0f);
    glVertex2f(-70.0f, 240.0f);
    glVertex2f(-195.0f, 0.0f);
    glVertex2f(-205.0f, 0.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-100.0f, 200.0f);
    glVertex2f(-90.0f, 200.0f);
    glVertex2f(10.0f, -5.0f);
    glVertex2f(0.0f, -5.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(100.0f, 200.0f);
    glVertex2f(90.0f, 200.0f);
    glVertex2f(0.0f, -5.0f);
    glVertex2f(10.0f, -5.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(100.0f, 200.0f);
    glVertex2f(90.0f, 200.0f);
    glVertex2f(195.0f, -5.0f);
    glVertex2f(205.0f, -5.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-100.0f, 200.0f);
    glVertex2f(-100.0f, 190.0f);
    glVertex2f(100.0f, 190.0f);
    glVertex2f(100.0f, 200.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-80.0f, 240.0f);
    glVertex2f(-80.0f, 230.0f);
    glVertex2f(-150.0f, 230.0f);
    glVertex2f(-150.0f, 240.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(90.0f, 180.0f);
    glVertex2f(60.0f, 240.0f);
    glVertex2f(120.0f, 240.0f);
    glEnd();
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
    glutCreateWindow("201-15-13903");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}