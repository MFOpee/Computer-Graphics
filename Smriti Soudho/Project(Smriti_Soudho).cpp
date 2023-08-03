#include <GL/gl.h> 
#include <GL/glut.h> 

int i, p, r, x, y;
void Circle()
{
    r = 20;
    x = 0, y = r;
    p = 1 - r;

    while (x < y)
    {
        glColor3f(1.0, 0.0, 0.0);
        glBegin(GL_POLYGON);
        glVertex2i(x + 220, y + 260);
        glVertex2i(-x + 220, y + 260);
        glVertex2i(x + 220, -y + 260);
        glVertex2i(-x + 220, -y + 260);
        glVertex2i(y + 220, x + 260);
        glVertex2i(-y + 220, x + 260);
        glVertex2i(y + 220, -x + 260);
        glVertex2i(-y + 220, -x + 260);

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

void Sun()
{
    r = 100;
    x = 0, y = r;
    p = 1 - r;

    while (x < y)
    {
        glColor3f(1.0, 0.0, 0.0);
        glBegin(GL_POLYGON);
        glVertex2i(x - 200, y + 350);
        glVertex2i(-x - 200, y + 350);
        glVertex2i(x - 200, -y + 350);
        glVertex2i(-x - 200, -y + 350);
        glVertex2i(y - 200, x + 350);
        glVertex2i(-y - 200, x + 350);
        glVertex2i(y - 200, -x + 350);
        glVertex2i(-y - 200, -x + 350);

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

void Cloud1()
{
    r = 40;
    x = 0, y = r;
    p = 1 - r;

    while (x < y)
    {
        glColor3f(1.0, 1.0, 1.0);
        glBegin(GL_POLYGON);
        glVertex2i(x + 400, y + 500);
        glVertex2i(-x + 400, y + 500);
        glVertex2i(x + 400, -y + 500);
        glVertex2i(-x + 400, -y + 500);
        glVertex2i(y + 400, x + 500);
        glVertex2i(-y + 400, x + 500);
        glVertex2i(y + 400, -x + 500);
        glVertex2i(-y + 400, -x + 500);

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

void Cloud2()
{
    r = 50;
    x = 0, y = r;
    p = 1 - r;

    while (x < y)
    {
        glColor3f(1.0, 1.0, 1.0);
        glBegin(GL_POLYGON);
        glVertex2i(x + 350, y + 500);
        glVertex2i(-x + 350, y + 500);
        glVertex2i(x + 350, -y + 500);
        glVertex2i(-x + 350, -y + 500);
        glVertex2i(y + 350, x + 500);
        glVertex2i(-y + 350, x + 500);
        glVertex2i(y + 350, -x + 500);
        glVertex2i(-y + 350, -x + 500);

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

void Cloud3()
{
    r = 40;
    x = 0, y = r;
    p = 1 - r;

    while (x < y)
    {
        glColor3f(1.0, 1.0, 1.0);
        glBegin(GL_POLYGON);
        glVertex2i(x + 300, y + 500);
        glVertex2i(-x + 300, y + 500);
        glVertex2i(x + 300, -y + 500);
        glVertex2i(-x + 300, -y + 500);
        glVertex2i(y + 300, x + 500);
        glVertex2i(-y + 300, x + 500);
        glVertex2i(y + 300, -x + 500);
        glVertex2i(-y + 300, -x + 500);

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

    //Background Sky
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.7f, 1.0f);
    glVertex2f(-500.0f, 300.0f);
    glVertex2f(-500.0f, 600.0f);
    glVertex2f(500.0f, 600.0f);
    glVertex2f(500.0f, 300.0f);
    glEnd();
    glFlush();

    //Cloud
    Cloud1();
    Cloud2();
    Cloud3();

    //Sun
    Sun();

    //Background Tree
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.7f, 0.0f);
    glVertex2f(-500.0f, 300.0f);
    glVertex2f(-420.0f, 380.0f);
    glVertex2f(-360.0f, 320.0f);
    glVertex2f(-360.0f, 300.0f);
    glEnd();
    glFlush();
    glBegin(GL_POLYGON);
    glVertex2f(-360.0f, 300.0f);
    glVertex2f(-360.0f, 320.0f);
    glVertex2f(-310.0f, 370.0f);
    glVertex2f(-250.0f, 310.0f);
    glVertex2f(-250.0f, 300.0f);
    glEnd();
    glFlush();
    glBegin(GL_POLYGON);
    glVertex2f(-250.0f, 300.0f);
    glVertex2f(-250.0f, 310.0f);
    glVertex2f(-210.0f, 350.0f);
    glVertex2f(-170.0f, 310.0f);
    glVertex2f(-170.0f, 300.0f);
    glEnd();
    glFlush();
    glBegin(GL_POLYGON);
    glVertex2f(-170.0f, 300.0f);
    glVertex2f(-170.0f, 310.0f);
    glVertex2f(-100.0f, 380.0f);
    glVertex2f(-20.0f, 300.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.7f, 0.0f);
    glVertex2f(500.0f, 300.0f);
    glVertex2f(420.0f, 380.0f);
    glVertex2f(360.0f, 320.0f);
    glVertex2f(360.0f, 300.0f);
    glEnd();
    glFlush();
    glBegin(GL_POLYGON);
    glVertex2f(360.0f, 300.0f);
    glVertex2f(360.0f, 320.0f);
    glVertex2f(310.0f, 370.0f);
    glVertex2f(250.0f, 310.0f);
    glVertex2f(250.0f, 300.0f);
    glEnd();
    glFlush();
    glBegin(GL_POLYGON);
    glVertex2f(250.0f, 300.0f);
    glVertex2f(250.0f, 310.0f);
    glVertex2f(210.0f, 350.0f);
    glVertex2f(170.0f, 310.0f);
    glVertex2f(170.0f, 300.0f);
    glEnd();
    glFlush();
    glBegin(GL_POLYGON);
    glVertex2f(170.0f, 300.0f);
    glVertex2f(170.0f, 310.0f);
    glVertex2f(100.0f, 380.0f);
    glVertex2f(20.0f, 300.0f);
    glEnd();
    glFlush();

    //Background Field
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 1.0f, 0.5f);
    glVertex2f(-500.0f, 300.0f);
    glVertex2f(-500.0f, -200.0f);
    glVertex2f(500.0f, -200.0f);
    glVertex2f(500.0f, 300.0f);
    glEnd();
    glFlush();

    //Tree(Left_Down)
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.2f, 0.1f);
    glVertex2f(-445.0f, 0.0f);
    glVertex2f(-455.0f, 0.0f);
    glVertex2f(-455.0f, 100.0f);
    glVertex2f(-445.0f, 100.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.6f, 0.1f);
    glVertex2f(-490.0f, 50.0f);
    glVertex2f(-410.0f, 50.0f);
    glVertex2f(-450.0f, 100.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.6f, 0.1f);
    glVertex2f(-490.0f, 80.0f);
    glVertex2f(-410.0f, 80.0f);
    glVertex2f(-450.0f, 130.0f);
    glEnd();
    glFlush();

    //Tree(Left_Top)
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.2f, 0.1f);
    glVertex2f(-345.0f, 100.0f);
    glVertex2f(-355.0f, 100.0f);
    glVertex2f(-355.0f, 200.0f);
    glVertex2f(-345.0f, 200.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.6f, 0.1f);
    glVertex2f(-390.0f, 150.0f);
    glVertex2f(-310.0f, 150.0f);
    glVertex2f(-350.0f, 200.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.6f, 0.1f);
    glVertex2f(-390.0f, 180.0f);
    glVertex2f(-310.0f, 180.0f);
    glVertex2f(-350.0f, 230.0f);
    glEnd();
    glFlush();

    //Tree(Right_Down)
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.2f, 0.1f);
    glVertex2f(445.0f, 0.0f);
    glVertex2f(455.0f, 0.0f);
    glVertex2f(455.0f, 100.0f);
    glVertex2f(445.0f, 100.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.6f, 0.1f);
    glVertex2f(490.0f, 50.0f);
    glVertex2f(410.0f, 50.0f);
    glVertex2f(450.0f, 100.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.6f, 0.1f);
    glVertex2f(490.0f, 80.0f);
    glVertex2f(410.0f, 80.0f);
    glVertex2f(450.0f, 130.0f);
    glEnd();
    glFlush();

    //Tree(Right_Top)
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.2f, 0.1f);
    glVertex2f(345.0f, 100.0f);
    glVertex2f(355.0f, 100.0f);
    glVertex2f(355.0f, 200.0f);
    glVertex2f(345.0f, 200.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.6f, 0.1f);
    glVertex2f(390.0f, 150.0f);
    glVertex2f(310.0f, 150.0f);
    glVertex2f(350.0f, 200.0f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.6f, 0.1f);
    glVertex2f(390.0f, 180.0f);
    glVertex2f(310.0f, 180.0f);
    glVertex2f(350.0f, 230.0f);
    glEnd();
    glFlush();

    //Down
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.3f, 0.1f);
    glVertex2f(-300.0f, 100.0f);
    glVertex2f(-400.0f, 0.0f);
    glVertex2f(400.0f, 0.0f);
    glVertex2f(300.0f, 100.0f);
    glEnd();
    glFlush();

    //Down
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.2f, 0.1f);
    glVertex2f(-400.0f, 0.0f);
    glVertex2f(-400.0f, -20.0f);
    glVertex2f(400.0f, -20.0f);
    glVertex2f(400.0f, 0.0f);
    glEnd();
    glFlush();

    //Down
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.3f, 0.1f);;
    glVertex2f(-400.0f, -20.0f);
    glVertex2f(-500.0f, -120.0f);
    glVertex2f(-500.0f, -200.0f);
    glVertex2f(500.0f, -200.0f);
    glVertex2f(500.0f, -120.0f);
    glVertex2f(400.0f, -20.0f);
    glEnd();
    glFlush();


    //Down
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.2f, 0.1f);
    glVertex2f(-150.0f, -50.0f);
    glVertex2f(-150.0f, -100.0f);
    glVertex2f(150.0f, -100.0f);
    glVertex2f(150.0f, -50.0f);
    glEnd();
    glFlush();

    //Pond(Left)
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.2f, 0.1f);
    glVertex2f(-150.0f, -50.0f);
    glVertex2f(-150.0f, -100.0f);
    glVertex2f(-210.0f, -200.0f);
    glVertex2f(-250.0f, -200.0f);
    glEnd();
    glFlush();

    //Pond(Right)
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.2f, 0.1f);
    glVertex2f(150.0f, -50.0f);
    glVertex2f(150.0f, -100.0f);
    glVertex2f(210.0f, -200.0f);
    glVertex2f(250.0f, -200.0f);
    glEnd();
    glFlush();

    //Pond(Water)
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.6f, 0.9f);
    glVertex2f(-150.0f, -100.0f);
    glVertex2f(-210.0f, -200.0f);
    glVertex2f(210.0f, -200.0f);
    glVertex2f(150.0f, -100.0f);
    glEnd();
    glFlush();


    //L7
    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(-355.0f, 0.0f);
    glVertex2f(-345.0f, 0.0f);
    glVertex2f(0.0f, 120.0f);
    glEnd();
    glFlush();

    //R7
    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(355.0f, 0.0f);
    glVertex2f(345.0f, 0.0f);
    glVertex2f(0.0f, 120.0f);
    glEnd();
    glFlush();

    // Color
    //L7
    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2f(-345.0f, 0.0f);
    glVertex2f(0.0f, 120.0f);
    glVertex2f(0.0f, 60.0f);
    glEnd();
    glFlush();

    //Color
    //R7
    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2f(345.0f, 0.0f);
    glVertex2f(0.0f, 120.0f);
    glVertex2f(0.0f, 60.0f);
    glEnd();
    glFlush();

    //L6
    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(-305.0f, 0.0f);
    glVertex2f(-295.0f, 0.0f);
    glVertex2f(0.0f, 180.0f);
    glEnd();
    glFlush();

    //R6
    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(305.0f, 0.0f);
    glVertex2f(295.0f, 0.0f);
    glVertex2f(0.0f, 180.0f);
    glEnd();
    glFlush();

    //Color
    //L6
    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2f(-295.0f, 0.0f);
    glVertex2f(0.0f, 180.0f);
    glVertex2f(0.0f, 60.0f);
    glEnd();
    glFlush();

    //Color
    //R6
    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2f(295.0f, 0.0f);
    glVertex2f(0.0f, 180.0f);
    glVertex2f(0.0f, 60.0f);
    glEnd();
    glFlush();

    //L5
    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(-255.0f, 0.0f);
    glVertex2f(-245.0f, 0.0f);
    glVertex2f(0.0f, 240.0f);
    glEnd();
    glFlush();

    //R5
    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(255.0f, 0.0f);
    glVertex2f(245.0f, 0.0f);
    glVertex2f(0.0f, 240.0f);
    glEnd();
    glFlush();

    //Color
    //L5
    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2f(-245.0f, 0.0f);
    glVertex2f(0.0f, 60.0f);
    glVertex2f(0.0f, 240.0f);
    glEnd();
    glFlush();

    //Color
    //R5
    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2f(245.0f, 0.0f);
    glVertex2f(0.0f, 60.0f);
    glVertex2f(0.0f, 240.0f);
    glEnd();
    glFlush();

    //L4
    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(-205.0f, 0.0f);
    glVertex2f(-195.0f, 0.0f);
    glVertex2f(0.0f, 300.0f);
    glEnd();
    glFlush();

    //R4
    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.6f, 0.6f);;
    glVertex2f(205.0f, 0.0f);
    glVertex2f(195.0f, 0.0f);
    glVertex2f(0.0f, 300.0f);
    glEnd();
    glFlush();

    //Color
    //L4
    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2f(-195.0f, 0.0f);
    glVertex2f(0.0f, 60.0f);
    glVertex2f(0.0f, 300.0f);
    glEnd();
    glFlush();

    //Color
    //R4
    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2f(195.0f, 0.0f);
    glVertex2f(0.0f, 60.0f);
    glVertex2f(0.0f, 300.0f);
    glEnd();
    glFlush();

    //L3
    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(-155.0f, 0.0f);
    glVertex2f(-145.0f, 0.0f);
    glVertex2f(0.0f, 360.0f);
    glEnd();
    glFlush();

    //R3
    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(155.0f, 0.0f);
    glVertex2f(145.0f, 0.0f);
    glVertex2f(0.0f, 360.0f);
    glEnd();
    glFlush();

    //Color
    //L3
    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2f(-145.0f, 0.0f);
    glVertex2f(0.0f, 60.0f);
    glVertex2f(0.0f, 360.0f);
    glEnd();
    glFlush();

    //Color
    //R3
    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2f(145.0f, 0.0f);
    glVertex2f(0.0f, 60.0f);
    glVertex2f(0.0f, 360.0f);
    glEnd();
    glFlush();

    //L2
    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(-105.0f, 0.0f);
    glVertex2f(-95.0f, 0.0f);
    glVertex2f(0.0f, 420.0f);
    glEnd();
    glFlush();

    //R2
    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(105.0f, 0.0f);
    glVertex2f(95.0f, 0.0f);
    glVertex2f(0.0f, 420.0f);
    glEnd();
    glFlush();

    //Color
    //L2
    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2f(-95.0f, 0.0f);
    glVertex2f(0.0f, 60.0f);
    glVertex2f(0.0f, 420.0f);
    glEnd();
    glFlush();

    //Color
    //R2
    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2f(95.0f, 0.0f);
    glVertex2f(0.0f, 60.0f);
    glVertex2f(0.0f, 420.0f);
    glEnd();
    glFlush();

    //L1
    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(-55.0f, 0.0f);
    glVertex2f(-45.0f, 0.0f);
    glVertex2f(0.0f, 480.0f);
    glEnd();
    glFlush();

    //R1
    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(55.0f, 0.0f);
    glVertex2f(45.0f, 0.0f);
    glVertex2f(0.0f, 480.0f);
    glEnd();
    glFlush();

    //Color
    //L1
    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2f(-45.0f, 0.0f);
    glVertex2f(0.0f, 60.0f);
    glVertex2f(0.0f, 480.0f);
    glEnd();
    glFlush();

    //Color
    //R1
    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2f(45.0f, 0.0f);
    glVertex2f(0.0f, 60.0f);
    glVertex2f(0.0f, 480.0f);
    glEnd();
    glFlush();

    //Middle Horizontal
    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(-30.0f, 190.0f);
    glVertex2f(-30.0f, 170.0f);
    glVertex2f(30.0f, 170.0f);
    glVertex2f(30.0f, 190.0f);
    glEnd();
    glFlush();

    //Middle Down
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.5f, 0.5f);
    glVertex2f(-30.0f, 170.0f);
    glVertex2f(30.0f, 170.0f);
    glVertex2f(0.0f, 60.0f);
    glEnd();
    glFlush();

    //Middle Top
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.5f, 0.5f);
    glVertex2f(-30.0f, 190.0f);
    glVertex2f(30.0f, 190.0f);
    glVertex2f(0.0f, 300.0f);
    glEnd();
    glFlush();

    //Flag Stand
    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(170.0f, -40.0f);
    glVertex2f(175.0f, -40.0f);
    glVertex2f(175.0f, 300.0f);
    glVertex2f(170.0f, 300.0f);
    glEnd();
    glFlush();

    //Flag 
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.7f, 0.0f);
    glVertex2f(175.0f, 290.0f);
    glVertex2f(275.0f, 290.0f);
    glVertex2f(275.0f, 230.0f);
    glVertex2f(175.0f, 230.0f);
    glEnd();
    glFlush();

    Circle();
    glFlush();
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-500, 500, -200, 600);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 800);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Smriti_Soudho");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}