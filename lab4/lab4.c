#include <GL/gl.h>
#include <GL/glut.h>

int x,y;
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/

double color = 0.0;
x = 0;
y = 0;

for(int i=0; i<6; i++){
    x = 0;

    for (int j = 0; j<6; j++){
        if (j==0){
            color = color;
        }
        else if (color == 0){
            color = 0.80;
        }
        else if (color == 0.80){
            color = 0.0;
        }
        glColor3f (color, color, color);
        glBegin(GL_POLYGON);
        glVertex2d(x,y);
        glVertex2d(x + 100,y);
        glVertex2d(x + 100,y + 100);
        glVertex2d(x,y + 100);
        glEnd();
        x = x+100;
    }
    y = y+100;

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
gluOrtho2D(0,600,0,600);
}

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


