#include <GL/gl.h> 
#include <GL/glut.h> 

int i, p, r, x, y;

void Circle()
{
    r = 225;
    x = 0, y = r;
    p = 1 - r;

    while (x < y)
    {
        glColor3f(1.0, 0.0, 0.0);
        glBegin(GL_POLYGON);
        glVertex2d(x, y);
        glVertex2d(x, -y);
        glVertex2d(-x, -y);
        glVertex2d(-x, y);
        glVertex2d(y, x);
        glVertex2d(y, -x);
        glVertex2d(-y, -x);
        glVertex2d(-y, x);

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
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    Circle();

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