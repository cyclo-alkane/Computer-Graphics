//Circle using polar equation

#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
#include <stdlib.h>

float x,y,r;

void circle1(GLfloat x, GLfloat y, GLfloat radius) 
  { 
    float angle;   
    glBegin(GL_POLYGON); 
    for(int i=0;i<100;i++) 
    { 
        angle = i*2*(M_PI/100); 
        glVertex2f(x+(cos(angle)*radius),y+(sin(angle)*radius)); 
    } 
    glEnd(); 
  }

void display()
{
	printf("Enter the value of x coordinates : ");
    scanf("%f",&x);
    printf("Enter the value of y coordinates : ");
    scanf("%f",&y);
    printf("Enter the value of radius of circle ");
    scanf("%f",&r);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0,1,0);          
    circle1(x,y,r);
    glFlush();

}


int main (int argc, char** argv)
{
    glutInit (&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(900,900);
    glutInitWindowPosition(300,500);
    glutCreateWindow("Task 7");
    glClearColor(0.529, 0.921, 0.972,1);
    gluOrtho2D(-500,500,-500,500);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
