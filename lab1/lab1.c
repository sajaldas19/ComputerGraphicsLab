#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3f (1, 1, 1.0);
glBegin(GL_POLYGON);
glVertex2d (375, 250);
glVertex2d (625, 250);
glVertex2d (625, 625);
glVertex2d (375, 625);
glEnd();

glColor3f (0, 0.5, 1.0);
glBegin(GL_POLYGON);
glVertex2d (450, 250);
glVertex2d (550, 250);
glVertex2d (550, 500);
glVertex2d (450, 500);
glEnd();

glColor3f (1, 0.5, 0.25);
glBegin(GL_POLYGON);
glVertex2d (388, 420);
glVertex2d (437, 420);
glVertex2d (437, 480);
glVertex2d (388, 480);
glEnd();

glColor3f (1, 0.5, 0.25);
glBegin(GL_POLYGON);
glVertex2d (563, 420);
glVertex2d (612, 420);
glVertex2d (612, 480);
glVertex2d (563, 480);
glEnd();

glColor3f (0, 1, 0.25);
glBegin(GL_TRIANGLES);

glVertex2d (625, 625);
glVertex2d (375, 625);
glVertex2d (500, 750);
glEnd();
/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
//glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
gluOrtho2D(0,1000,0,1000);
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
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("191-15-12381 :: Sajal Das");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
