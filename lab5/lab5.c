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
glColor3f (0, 0.85, 1.0);


x = 0;
y = r;


printf("%d %d\n", x, y);

glBegin(GL_POINTS);
glVertex2d(x  + cx, y  + cy);
glVertex2d(x  + cx, -y + cy);
glVertex2d(-x + cx, y  + cy);
glVertex2d(-x + cx, -y + cy);
glVertex2d(y  + cx, x  + cy);
glVertex2d(y  + cx, -x + cy);
glVertex2d(-y + cx, x  + cy);
glVertex2d(-y + cx, -x + cy);
glEnd();

p = 5/4 - r;

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

    printf("%d %d\n", x, y);

    glBegin(GL_POINTS);
    glVertex2d(x  + cx, y  + cy);
    glVertex2d(x  + cx, -y + cy);
    glVertex2d(-x + cx, y  + cy);
    glVertex2d(-x + cx, -y + cy);
    glVertex2d(y  + cx, x  + cy);
    glVertex2d(y  + cx, -x + cy);
    glVertex2d(-y + cx, x  + cy);
    glVertex2d(-y + cx, -x + cy);
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
    printf("Enter the radius: ");
    scanf("%d",&r);
    printf("Enter the center (x,y): ");
    scanf("%d, %d",&cx, &cy);
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

