#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>

int x, y, i, cx, cy, r;
double p;

void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/

r=300;

x = 0;
y = r;


printf("%d %d\n", x, y);
glColor3f (0.9, 0.2, 0.3);
glBegin(GL_POLYGON);

glVertex2d(x  + cx, -y + cy);
glVertex2d(-x + cx, y  + cy);
glVertex2d(-x + cx, -y + cy);
glVertex2d(y  + cx, x  + cy);
glVertex2d(y  + cx, -x + cy);
glVertex2d(-y + cx, x  + cy);
glVertex2d(-y + cx, -x + cy);
glVertex2d(x  + cx, y  + cy);
glEnd();

p = 1 - r;

for(i=0; x<y; i++){
    if (p<0){
        x=x + 1;
        p = p + 2*x + 1;
    }
    else{
        x = x+1;
        y = y-1;
        p = p + 2*x + 1 - 2*y;
    }

    glColor3f (0.9, 0.2, 0.3);
    glBegin(GL_POLYGON);

    glVertex2d(x  + cx, -y + cy);
    glVertex2d(-x + cx, y  + cy);
    glVertex2d(-x + cx, -y + cy);
    glVertex2d(y  + cx, x  + cy);
    glVertex2d(y  + cx, -x + cy);
    glVertex2d(-y + cx, x  + cy);
    glVertex2d(-y + cx, -x + cy);
    glVertex2d(x  + cx, y  + cy);
    glEnd();
}

    /// Left 1 Standing
    glColor3f (1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2d(-810, -1000);
    glVertex2d(-770, -1000);
    glVertex2d(-770, -140);
    glVertex2d(-810, -140);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(-690, -1000);
    glVertex2d(-650, -1000);
    glVertex2d(-650, -140);
    glVertex2d(-690, -140);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(-810, -140);
    glVertex2d(-650, -140);
    glVertex2d(-650, -100);
    glVertex2d(-810, -100);
    glEnd();

    /// Left 2 Standing
    glColor3f (1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2d(-610, -1000);
    glVertex2d(-570, -1000);
    glVertex2d(-570, -40);
    glVertex2d(-610, -40);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(-490, -1000);
    glVertex2d(-450, -1000);
    glVertex2d(-450, -40);
    glVertex2d(-490, -40);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(-610, -40);
    glVertex2d(-450, -40);
    glVertex2d(-450, 0);
    glVertex2d(-610, 0);
    glEnd();


    ///middle

    glBegin(GL_POLYGON);
    glVertex2d(-20, -1000);
    glVertex2d(20, -1000);
    glVertex2d(20, 380);
    glVertex2d(-20, 380);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(-220, -1000);
    glVertex2d(-180, -1000);
    glVertex2d(-180, 140);
    glVertex2d(-220, 140);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(-220, 140);
    glVertex2d(-180, 140);
    glVertex2d(-240, 380);
    glVertex2d(-280, 380);
    glEnd();



    glBegin(GL_POLYGON);
    glVertex2d(220, -1000);
    glVertex2d(180, -1000);
    glVertex2d(180, 140);
    glVertex2d(220, 140);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(220, 140);
    glVertex2d(180, 140);
    glVertex2d(240, 380);
    glVertex2d(280, 380);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2d(-280, 380);
    glVertex2d(280, 380);
    glVertex2d(280, 420);
    glVertex2d(-280, 420);
    glEnd();













    /// Right 1 Standing
    glColor3f (1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2d(810, -1000);
    glVertex2d(770, -1000);
    glVertex2d(770, -140);
    glVertex2d(810, -140);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(690, -1000);
    glVertex2d(650, -1000);
    glVertex2d(650, -140);
    glVertex2d(690, -140);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(810, -140);
    glVertex2d(650, -140);
    glVertex2d(650, -100);
    glVertex2d(810, -100);
    glEnd();

    /// Right 2 Standing
    glColor3f (1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2d(610, -1000);
    glVertex2d(570, -1000);
    glVertex2d(570, -40);
    glVertex2d(610, -40);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(490, -1000);
    glVertex2d(450, -1000);
    glVertex2d(450, -40);
    glVertex2d(490, -40);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(610, -40);
    glVertex2d(450, -40);
    glVertex2d(450, 0);
    glVertex2d(610, 0);
    glEnd();














glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-1000,1000,-500,500);
}

int main(int argc, char** argv)
{
    cx=0;
    cy=0;
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1000, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("191-15-12381 :: Sajal Das");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}
