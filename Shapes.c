#include<GL/glut.h>
void display(){
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1,0,0);

glBegin(GL_POINTS);
glColor3f(1,1,1);
glVertex2f(-0.9,-0.9);
glVertex2f(-0.8,-0.9);
glVertex2f(-0.9,-0.7);
glVertex2f(-0.9,-0.6);
glEnd();

glBegin(GL_LINES);
glColor3f(1,0,0);
glVertex2f(-0.5,-0.5);
glVertex2f(-0.5,-0.8);
glEnd();

glBegin(GL_LINE_STRIP);
glColor3f(0,1,0);
glVertex2f(0.9,0.9);
glVertex2f(0.9,0.7);
glVertex2f(0.7,0.7);
glVertex2f(0.7,0.9);
glEnd();

glBegin(GL_LINE_LOOP);
glColor3f(1,1,1);
glVertex2f(0.5,0.5);
glVertex2f(0.5,0.3);
glVertex2f(0.7,0.3);
glVertex2f(0.5,0.5);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0,0,1);
glVertex2f(0.5,-0.5);
glVertex2f(0.5,-0.7);
glVertex2f(0.7,-0.7);
glVertex2f(0.7,-0.4);
glVertex2f(0.6,-0.35);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex2f(-0.5,0.2);
glVertex2f(-0.5,0.4);
glVertex2f(-0.7,0.5);
glVertex2f(-0.7,0.2);
glEnd();

glBegin(GL_QUAD_STRIP);
glColor3f(0,1,0);
glVertex2f(0,-0.2);
glVertex2f(0,0.2);
glVertex2f(0.2,-0.2);
glVertex2f(0.2,0.2);
glVertex2f(0.3,-0.4);
glVertex2f(0.35,0.2);
glVertex2f(0.4,0.1);
glVertex2f(0.4,-0.1);
glEnd();

glColor3f(1,1,1);

glFlush();
}

int main(int argc, char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(900,900);
glutInitWindowPosition(500,300);
glutCreateWindow("6 shapes using opengl");
glClearColor(0,0,0,0.5);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
