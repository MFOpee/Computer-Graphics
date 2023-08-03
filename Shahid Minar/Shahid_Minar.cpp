#include <GL/gl.h> 
#include <GL/glut.h> 

int i, p, r, x, y;

void drawCircle()
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

    drawCircle();

    //Middle(Left)
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-150.0f, -300.0f);
    glVertex2f(-100.0f, -300.0f);
    glVertex2f(-100.0f, 200.0f);
    glVertex2f(-150.0f, 200.0f);
    glEnd();

    //Middle(Middle)
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-25.0f, -300.0f);
    glVertex2f(25.0f, -300.0f);
    glVertex2f(25.0f, 400.0f);
    glVertex2f(-25.0f, 400.0f);
    glEnd();

    //Middle(Right)
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(100.0f, -300.0f);
    glVertex2f(150.0f, -300.0f);
    glVertex2f(150.0f, 200.0f);
    glVertex2f(100.0f, 200.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-150.0f, 200.0f);
    glVertex2f(150.0f, 200.0f);
    glVertex2f(150.0f, 250.0f);
    glVertex2f(-150.0f, 250.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-150.0f, 200.0f);
    glVertex2f(-200.0f, 400.0f);
    glVertex2f(-150.0f, 400.0f);
    glVertex2f(-100.0f, 200.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(150.0f, 200.0f);
    glVertex2f(200.0f, 400.0f);
    glVertex2f(150.0f, 400.0f);
    glVertex2f(100.0f, 200.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-200.0f, 400.0f);
    glVertex2f(-200.0f, 450.0f);
    glVertex2f(200.0f, 450.0f);
    glVertex2f(200.0f, 400.0f);
    glEnd();

    //Right(Left)
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(250.0f, -300.0f);
    glVertex2f(300.0f, -300.0f);
    glVertex2f(300.0f, 150.0f);
    glVertex2f(250.0f, 150.0f);
    glEnd();

    //Right(Middle)
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(350.0f, -300.0f);
    glVertex2f(400.0f, -300.0f);
    glVertex2f(400.0f, 150.0f);
    glVertex2f(350.0f, 150.0f);
    glEnd();

    //Right(Right)
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(450.0f, -300.0f);
    glVertex2f(500.0f, -300.0f);
    glVertex2f(500.0f, 150.0f);
    glVertex2f(450.0f, 150.0f);
    glEnd();

    //Right(Top)
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(250.0f, 150.0f);
    glVertex2f(500.0f, 150.0f);
    glVertex2f(500.0f, 200.0f);
    glVertex2f(250.0f, 200.0f);
    glEnd();

    //Left(Right)
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-250.0f, -300.0f);
    glVertex2f(-300.0f, -300.0f);
    glVertex2f(-300.0f, 150.0f);
    glVertex2f(-250.0f, 150.0f);
    glEnd();

    //Left(Middle)
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-350.0f, -300.0f);
    glVertex2f(-400.0f, -300.0f);
    glVertex2f(-400.0f, 150.0f);
    glVertex2f(-350.0f, 150.0f);
    glEnd();

    //Left(Left)
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-450.0f, -300.0f);
    glVertex2f(-500.0f, -300.0f);
    glVertex2f(-500.0f, 150.0f);
    glVertex2f(-450.0f, 150.0f);
    glEnd();

    //Left(Top)
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-250.0f, 150.0f);
    glVertex2f(-500.0f, 150.0f);
    glVertex2f(-500.0f, 200.0f);
    glVertex2f(-250.0f, 200.0f);
    glEnd();

    //Down
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-550.0f, -350.0f);
    glVertex2f(550.0f, -350.0f);
    glVertex2f(550.0f, -300.0f);
    glVertex2f(-550.0f, -300.0f);
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