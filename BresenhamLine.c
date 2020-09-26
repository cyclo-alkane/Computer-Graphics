//line using bresenham equation


#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(5);
float x0=1,y0=1,x1=8,y1=5,x=0,y=0,p=0,dy=0,dx=0,temp1=0,temp2=0,m=0;
printf("enter the value of x0,y0,x1,y1: ");
scanf("%f %f %f %f",&x0,&y0,&x1,&y1);
if(x0<x1){                                 //checking x0 should always be less than x1
    }else{
     temp1=x0;
     x0=x1;
     x1=temp1;
   }
   if(y0<y1){                              //checking y0 should always be less than y1
}else{
     temp2=y0;
     y0=y1;
     y1=temp2;
   }
x=x0;                //inital value of x
y=y0;                //inital value of y
dy=y1-y0;            //inital value of dy
dx=x1-x0;            //inital value of dx
p=2*dy-dx;             //inital value of p
m=dy/dx;       
glColor3f(0,1,0);
glBegin(GL_POINTS);
    if(m<1){
    while(x<=x1){           //x increments till the last point
        glVertex2f(x,y);   //x,y points
        x++;
        if(p<0){               //bresenham condition
            p=p+2*dx;
        }else{
            p=p+2*dy-2*dx; 
            y++;
        }
    }
    }
    if(m>=1){
    while(x<=x1){           //x increments till the last point
        glVertex2f(x,y);   //x,y points
        x++;
        if(p<0){               //bresenham condition
            p=p+2*dy;
        }else{
            p=p+2*dx-2*dy; 
            y++;
        }
    }
    }
   
glEnd();
glFlush();
}
int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(900,900);
glutInitWindowPosition(300,500);
glutCreateWindow("Task 6");
glClearColor(0.529, 0.921, 0.972,1);
gluOrtho2D(-500,500,-500,500);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
