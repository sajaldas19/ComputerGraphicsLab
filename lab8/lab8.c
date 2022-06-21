#include <GL/gl.h>
#include <GL/glut.h>


void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);

glColor3f (0, 0.75, 1.0);
glBegin(GL_POLYGON);
glVertex2d(0, 0);
glVertex2d(300, 0);
glVertex2d(300, 300);
glVertex2d(0, 300);
glEnd();

glColor3f (0.5, 0.75, 1.0);
glBegin(GL_POLYGON);
glVertex2d(100, 100);
glVertex2d(200, 100);
glVertex2d(200, 200);
glVertex2d(100, 200);
glEnd();

glColor3f (0.25, 1, 0.5);
glBegin(GL_POLYGON);
glVertex2d(0, 0);
glVertex2d(-300, 0);
glVertex2d(-300, 300);
glVertex2d(0, 300);
glEnd();

glColor3f (0.25, 1, 0.75);
glBegin(GL_POLYGON);
glVertex2d(-100, 100);
glVertex2d(-200, 100);
glVertex2d(-200, 200);
glVertex2d(-100, 200);
glEnd();

glColor3f (0.25, 1, 0.75);
glBegin(GL_POLYGON);
glVertex2d(0, 0);
glVertex2d(-300, 0);
glVertex2d(-300, -300);
glVertex2d(0, -300);
glEnd();

glColor3f (0.25, 1, 0.5);
glBegin(GL_POLYGON);
glVertex2d(-100, -100);
glVertex2d(-200, -100);
glVertex2d(-200, -200);
glVertex2d(-100, -200);
glEnd();

glColor3f (0.5, 0.75, 1.0);
glBegin(GL_POLYGON);
glVertex2d(0, 0);
glVertex2d(300, 0);
glVertex2d(300, -300);
glVertex2d(0, -300);
glEnd();

glColor3f (0, 0.75, 1.0);
glBegin(GL_POLYGON);
glVertex2d(100, -100);
glVertex2d(200, -100);
glVertex2d(200, -200);
glVertex2d(100, -200);
glEnd();


///All Lines
glColor3f (1, 1, 1);
glBegin(GL_LINES);
glVertex2d(0, 0);
glVertex2d(300, 0);
glVertex2d(300, 0);
glVertex2d(300, 300);
glVertex2d(300, 300);
glVertex2d(0, 300);
glVertex2d(0, 300);
glVertex2d(0, 0);
glVertex2d(0, 0);
glVertex2d(100, 100);
glVertex2d(300, 0);
glVertex2d(200, 100);
glVertex2d(300, 300);
glVertex2d(200, 200);
glVertex2d(0, 300);
glVertex2d(100, 200);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_LINES);
glVertex2d(100, 100);
glVertex2d(200, 100);
glVertex2d(200, 100);
glVertex2d(200, 200);
glVertex2d(200, 200);
glVertex2d(100, 200);
glVertex2d(100, 200);
glVertex2d(100, 100);
glEnd();


glColor3f (1, 1, 1);
glBegin(GL_LINES);
glVertex2d(0, 0);
glVertex2d(-300, 0);
glVertex2d(-300, 0);
glVertex2d(-300, 300);
glVertex2d(-300, 300);
glVertex2d(0, 300);
glVertex2d(0, 300);
glVertex2d(0, 0);
glVertex2d(0, 0);
glVertex2d(-100, 100);
glVertex2d(-300, 0);
glVertex2d(-200, 100);
glVertex2d(-300, 300);
glVertex2d(-200, 200);
glVertex2d(0, 300);
glVertex2d(-100, 200);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_LINES);
glVertex2d(-100, 100);
glVertex2d(-200, 100);
glVertex2d(-200, 100);
glVertex2d(-200, 200);
glVertex2d(-200, 200);
glVertex2d(-100, 200);
glVertex2d(-100, 200);
glVertex2d(-100, 100);
glEnd();


glColor3f (1, 1, 1);
glBegin(GL_LINES);
glVertex2d(0, 0);
glVertex2d(-300, 0);
glVertex2d(-300, 0);
glVertex2d(-300, -300);
glVertex2d(-300, -300);
glVertex2d(0, -300);
glVertex2d(0, -300);
glVertex2d(0, 0);
glVertex2d(0, 0);
glVertex2d(-100, -100);
glVertex2d(-300, 0);
glVertex2d(-200, -100);
glVertex2d(-300, -300);
glVertex2d(-200, -200);
glVertex2d(0, -300);
glVertex2d(-100, -200);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_LINES);
glVertex2d(-100, -100);
glVertex2d(-200, -100);
glVertex2d(-200, -100);
glVertex2d(-200, -200);
glVertex2d(-200, -200);
glVertex2d(-100, -200);
glVertex2d(-100, -200);
glVertex2d(-100, -100);
glEnd();



glColor3f (1, 1, 1);
glBegin(GL_LINES);
glVertex2d(0, 0);
glVertex2d(300, 0);
glVertex2d(300, 0);
glVertex2d(300, -300);
glVertex2d(300, -300);
glVertex2d(0, -300);
glVertex2d(0, -300);
glVertex2d(0, 0);
glVertex2d(0, 0);
glVertex2d(100, -100);
glVertex2d(300, 0);
glVertex2d(200, -100);
glVertex2d(300, -300);
glVertex2d(200, -200);
glVertex2d(0, -300);
glVertex2d(100, -200);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_LINES);
glVertex2d(100, -100);
glVertex2d(200, -100);
glVertex2d(200, -100);
glVertex2d(200, -200);
glVertex2d(200, -200);
glVertex2d(100, -200);
glVertex2d(100, -200);
glVertex2d(100, -100);
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
gluOrtho2D(-400,400,-400,400);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (600, 600);
glutInitWindowPosition (100, 100);
glutCreateWindow ("191-15-12381::Sajal Das");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
