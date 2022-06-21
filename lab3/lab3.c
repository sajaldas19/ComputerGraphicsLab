#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>

int x, y, x1, y1, x2, y2, p, i;

void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3f (1.0, 0.25, 1.0);

glBegin(GL_POINTS);
glVertex2d(x1,y1);
glEnd();

x = x1;
y = y1;
int dx = x2-x1;
int dy = y2-y1;

p = 2*dy - dx;

for(i=0; i<dx; i++){
    if (p<0){
        x=x + 1;
        p = p + 2*dy;
    }
    else{
        x = x+1;
        y = y+1;
        p = p + 2*dy - 2*dx;
    }
    glBegin(GL_POINTS);
    glVertex2d(x,y);
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
gluOrtho2D(0,500,0,500);
}

int main(int argc, char** argv)
{
    scanf("%d %d",&x1, &y1);
    scanf("%d %d",&x2, &y2);
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

