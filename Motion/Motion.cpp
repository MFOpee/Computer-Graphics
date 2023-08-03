#include <GL/gl.h> 
#include <GL/glut.h> 

float x = 0.0;

void display(void)
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor3d(1.0, 1.0, 1.0);
    glVertex2d(x, 180.0);
    glVertex2d(x + 15, 180.0);
    glVertex2d(x + 15, 220.0);
    glVertex2d(x, 220.0);

    if (x < 400.0)
    {
        x = x + 0.1;
    }
    else {
        x = 0.0;
    }

    glutPostRedisplay();
    glEnd();
    glFlush();
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 400, 0, 400);
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