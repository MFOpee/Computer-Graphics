#include <GL/glut.h>
#include <iostream>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    int x1 = 120, y1 = 150, x2 = 390, y2 = 420;
    int dx = abs(x2 - x1), dy = abs(y2 - y1);
    int x = x1, y = y1;
    int sx = (x1 < x2) ? 1 : -1;
    int sy = (y1 < y2) ? 1 : -1;

    if (dx >= dy)
    {
        int p = 2 * dy - dx;
        int const1 = 2 * dy, const2 = 2 * (dy - dx);

        glBegin(GL_POINTS);

        while (x != x2)
        {
            glVertex2i(x, y);
            x += sx;

            if (p < 0) {
                p += const1;
            }
            else {
                y += sy;
                p += const2;
            }
        }
        glEnd();
    }
    glFlush();
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(1000, 100);
    glutCreateWindow("201-15-13903");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    gluOrtho2D(0, 500, 0, 500);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}