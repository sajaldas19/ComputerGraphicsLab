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
glColor3f (0, 0.6, 0.4);
glBegin(GL_POLYGON);
glVertex2d(-400,-200);
glVertex2d(400, -200);
glVertex2d(400, 200);
glVertex2d(-400, 200);
glEnd();

glColor3f (0.8, 0.3, 0);
glBegin(GL_POLYGON);
glVertex2d(-425,-500);
glVertex2d(-400,-500);
glVertex2d(-400, 250);
glVertex2d(-425, 250);
glEnd();

r=125;

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


glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-500,500,-500,500);
}

int main(int argc, char** argv)
{
    cx=0;
    cy=0;
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("191-15-12381 :: Sajal Das");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}
