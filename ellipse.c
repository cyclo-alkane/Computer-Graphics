//ellipse using bresenham algorithm
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
double dx, dy, d1, d2, x, y;
double rx, ry, xc=50, yc=50;
float round_value(float v)
{
 return floor(v + 0.5);
}
void midptellipse() 
{  
    x = 0; 
    y = ry;   
    // Initial decision parameter of region 1 
    d1 = (ry * ry) - (rx * rx * ry) + (0.25 * rx * rx); 
    dx = 2 * ry * ry * x; 
    dy = 2 * rx * rx * y; 
   glClear(GL_COLOR_BUFFER_BIT);   
   glBegin(GL_POINTS);
   glPointSize(5);
   glColor3f(0,1,0);
   
    while (dx < dy)
     {        
       glVertex2d(x + xc, y + yc); 
       glVertex2d(-x + xc, y + yc); 
       glVertex2d(x + xc, -y + yc); 
       glVertex2d(-x + xc, -y + yc); 
        if (d1 < 0) { 
            x++; 
            dx = dx + (2 * ry * ry); 
            d1 = d1 + dx + (ry * ry); 
        } 
        else { 
            x++; 
            y--; 
            dx = dx + (2 * ry * ry); 
            dy = dy - (2 * rx * rx); 
            d1 = d1 + dx - dy + (ry * ry); 
        }     }   
    d2 = ((ry * ry) * ((x + 0.5) * (x + 0.5)))    // Decision parameter of region 2
         + ((rx * rx) * ((y - 1) * (y - 1))) 
         - (rx * rx * ry * ry); 
    while (y >= 0) 
    { 
        glVertex2d(x + xc, y + yc); 
        glVertex2d(-x + xc, y + yc); 
        glVertex2d(x + xc, -y + yc); 
        glVertex2d(-x + xc, -y + yc);               
        if (d2 > 0) { 
            y--; 
            dy = dy - (2 * rx * rx); 
        d2 = d2 + (rx * rx) - dy;   } 
        else { 
            y--; 
            x++; 
            dx = dx + (2 * ry * ry); 
            dy = dy - (2 * rx * rx); 
            d2 = d2 + dx - dy + (rx * rx); 
        }     }
   glEnd(); 
   glFlush();
}
  
void main(int argc, char **argv)     
     {
 printf("\nEnter minor radius( X1 , Y1): ");
 scanf("%lf",&rx);
 printf("\nEnter minor radius( X1 , Y1): ");
 scanf("%lf",&ry);
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(900,900);
    glutInitWindowPosition(300,500);
    glutCreateWindow ("Task 9");
    gluOrtho2D(-500,500,-500,500);
    glClearColor(0.529, 0.921, 0.972,1);

glutDisplayFunc(midptellipse);
glutMainLoop();  
}

