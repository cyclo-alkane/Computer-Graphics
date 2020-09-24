#include<stdio.h>
#include<GL/glut.h>
void line(double precision){
float x0,x1,y0,y1;
printf("Enter x0,y0: ");
scanf("%f %f",&x0,&y0);
printf("Enter x1,y1: ");
scanf("%f %f",&x1,&y1);
float m=0.0;

float j=y0;

if(x1-x0==0)
m=0;
else
m=(y1-y0)/(x1-x0);

float c=(y0-m*x0);

glBegin(GL_POINTS);
	glColor3f(0.956, 0.901, 0.901);
	for(double i=x0;i<x1;i+=precision){
		j=m*i+c;
		glVertex2f(i,j);
	}
glEnd();
glFlush();

}

int main(int argc, char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(900,900);
glutInitWindowPosition(500,300);
glutCreateWindow("Task 4");
glClearColor(0.529, 0.921, 0.972,1);
gluOrtho2D(-50,50,-50,50);
line(0.0000001);
glutMainLoop();
return 0;
}

