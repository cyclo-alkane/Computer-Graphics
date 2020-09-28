//Circle using bresenham equation

#include <stdio.h>
#include <GL/glut.h>


int X1,Y1,r;

void plot(int x, int y)
{
    glBegin(GL_POINTS);
    glVertex2i(x+X1,y+Y1);
    glEnd();
}




void midPointCircleAlgo()
{
    int x = 0;
    int y = r;
    float p = 5/4 - r;
    plot(x, y);

    while (y > x)
    {
        if (p < 0)
        {
            x++; 
            p=p+2*x+1;
        }
        else
        {
            y--;
            x++;
            p=p+2*(x-y)+1;
        }
        plot(x, y);
        plot(x, -y);
        plot(-x, y);
        plot(-x, -y);
        plot(y, x);
        plot(-y, x);
        plot(y, -x);
        plot(-y, -x);
    }

}

void Display(void)
{
	printf("Enter the Coordinates of the centre of Circle\n");
    printf( "X-coordinate: ");
    scanf("%d", &X1);
    printf( "Y-coordinate: ");
    scanf("%d", &Y1);
    printf("Enter the radius: ");
    scanf("%d", &r);
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0, 1, 0);
    glPointSize(5);
    midPointCircleAlgo();
    glFlush ();
}

int main(int argc, char** argv)
{   

    

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(900,900);
    glutInitWindowPosition(300,500);
    glutCreateWindow ("Task 8");
    gluOrtho2D(-500,500,-500,500);
    glClearColor(0.529, 0.921, 0.972,1);
    glutDisplayFunc(Display);
    glutMainLoop();
    return 0;

}
