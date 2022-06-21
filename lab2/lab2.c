#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/

glColor3f (0, 0.2, 1.0);
glBegin(GL_LINES);
glVertex2d (0, 500);
glVertex2d (1000, 500);

glEnd();

glColor3f (1.0, 1, 1.0);
glBegin(GL_POLYGON);
glVertex2d (580, 480);
glVertex2d (620, 500);
glVertex2d (580, 520);
glVertex2d (560, 560);
glVertex2d (540, 520);
glVertex2d (500, 500);
glVertex2d (540, 480);
glVertex2d (560, 440);
glEnd();

glColor3f (1.0, 0.25, 0);
glBegin(GL_POLYGON);
glVertex2d (460, 480);
glVertex2d (500, 500);
glVertex2d (460, 520);
glVertex2d (440, 560);
glVertex2d (420, 520);
glVertex2d (380, 500);
glVertex2d (420, 480);
glVertex2d (440, 440);
glEnd();

glColor3f (0, 1, 0.25);
glBegin(GL_POLYGON);
glVertex2d (520, 540);
glVertex2d (560, 560);
glVertex2d (520, 580);
glVertex2d (500, 620);
glVertex2d (480, 580);
glVertex2d (440, 560);
glVertex2d (480, 540);
glVertex2d (500, 500);
glEnd();

glColor3f (0, 0.5, 1);
glBegin(GL_POLYGON);
glVertex2d (520, 420);
glVertex2d (560, 440);
glVertex2d (520, 460);
glVertex2d (500, 500);
glVertex2d (480, 460);
glVertex2d (440, 440);
glVertex2d (480, 420);
glVertex2d (500, 380);
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
gluOrtho2D(0, 1000, 0, 1000);
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
