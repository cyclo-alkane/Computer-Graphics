//Scenery with keyboard and mouse events

#include<GL/glut.h>
#include<stdio.h>
#include<stdbool.h>

bool check;

void mouse(int button, int state){

	if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN){
		check=true;
	}
	else if(button==GLUT_RIGHT_BUTTON && state==GLUT_DOWN){
		check=false; 
	}
	glutPostRedisplay();

}

void keyboard(unsigned char key){
	switch(key){
	case 'L':
	case 'l': 
		glClearColor(0.529, 0.921, 0.972,1);
		glBegin(GL_QUADS);
			glColor3f(1, 0.988, 0.101);
			glVertex2f(0,0);
			glVertex2f(-0.22,0.35);
			glVertex2f(0,0.37);
		glEnd();
	break;
	}
	glutPostRedisplay();
}

void display(){
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1,0,0);


//mountains
glBegin(GL_TRIANGLES);
glColor3f(0.745, 0.494, 0.235);
glVertex2f(-1,0);
glVertex2f(0,0);
glVertex2f(-0.5,0.8);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.745, 0.494, 0.235);
glVertex2f(0,0);
glVertex2f(1,0);
glVertex2f(0.5,0.8);
glEnd();

//sun
glBegin(GL_QUADS);
glColor3f(1, 0.988, 0.101);
glVertex2f(0,0);
glVertex2f(-0.22,0.35);
glVertex2f(0,0.37);
glVertex2f(0.22,0.35);
glEnd();

//ground
glBegin(GL_QUADS);
glColor3f(0.262, 0.960, 0.180);
glVertex2f(-1,0);
glVertex2f(1,0);
glVertex2f(1,-1);
glVertex2f(-1,-1);
glEnd();

//hut
glBegin(GL_QUADS);
glColor3f(0.917, 0.513, 0.164);
glVertex2f(0.35,-0.7);
glVertex2f(0.35,-0.35);
glVertex2f(0.7,-0.35);
glVertex2f(0.7,-0.7);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.627, 0.278, 0.031);
glVertex2f(0.475,-0.55);
glVertex2f(0.475,-0.45);
glVertex2f(0.575,-0.45);
glVertex2f(0.575,-0.55);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0.525,-0.55);
glVertex2f(0.525,-0.45);
glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0.575,-0.5);
glVertex2f(0.475,-0.5);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.627, 0.278, 0.031);
glVertex2f(0.35,-0.35);
glVertex2f(0.525,-0.125);
glVertex2f(0.7,-0.35);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.858, 0.450, 0.101);
glVertex2f(0.7,-0.35);
glVertex2f(0.85,-0.20);
glVertex2f(0.85,-0.55);
glVertex2f(0.7,-0.7);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.709, 0.352, 0.050);
glVertex2f(0.7,-0.35);
glVertex2f(0.85,-0.2);
glVertex2f(0.7,-0.05);
glVertex2f(0.525,-0.125);

glEnd();

//river
glBegin(GL_QUADS);
glColor3f(0.286, 0.701, 0.913);
glVertex2f(-0.5,-1);
glVertex2f(0.125,-1);
glVertex2f(0.3,0);
glVertex2f(-0.2,0);

glEnd();

glColor3f(1,1,1);

if(check){
	glClearColor(0, 0, 0,1);
	glBegin(GL_QUADS);
		glColor3f(0.956, 0.901, 0.901);
		glVertex2f(0,0);
		glVertex2f(-0.22,0.35);
		glVertex2f(0,0.37);
		glVertex2f(0.22,0.35);
	glEnd();
	
}

glFlush();
}

int main(int argc, char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(900,900);
glutInitWindowPosition(500,300);
glutCreateWindow("Scenery");
glClearColor(0.529, 0.921, 0.972,1);
glutDisplayFunc(display);
glutMouseFunc(mouse);
glutKeyboardFunc(keyboard);
glutMainLoop();
return 0;
}
