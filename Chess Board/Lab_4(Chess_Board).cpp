#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{
    // clear all pixels
    glClear(GL_COLOR_BUFFER_BIT);

    bool block = true;

    for (int x = 0; x < 800; x += 100)
    {
        for (int y = 0; y <= 800; y += 100)
        {
            if (block)
            {
                glColor3f(1, 1, 1);
                block = !block;
            }
            else
            {
                glColor3f(0, 0, 0);
                block = !block;
            }
            glBegin(GL_POLYGON);
            glVertex2f(x, y);
            glVertex2f(x + 100, y);
            glVertex2f(x + 100, y + 100);
            glVertex2f(x, y + 100);
            glEnd();
            glFlush();
        }

    }
}
void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 800, 0, 800);
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