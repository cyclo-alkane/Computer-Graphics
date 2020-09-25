//Drawing a line using DDA algorithm



#include<GL/glut.h>
#include<math.h>
#include<stdio.h>
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.956, 0.901, 0.901);
glPointSize(5);
 float dx=0,dy=0,x0,y0,x1,y1,x=0,y=0,xin=0,yin=0,step=0,m=0,temp1=0,temp2=0;
  printf("enter the value of x0,y0: ");
  scanf("%f %f",&x0,&y0);
  printf("enter the value of x1,y1: ");
  scanf("%f %f",&x1,&y1);
  if(x0<x1){                         
    }else{
     temp1=x0;
     x0=x1;
     x1=temp1;
   }
   if(y0<y1){                       

  }else{
     temp2=y0;
     y0=y1;
     y1=temp2;
   }
    dx=x1-x0;            
    dy=y1-y0;            
    m=dy/dx;                       
    if(dx>dy){                  
        step=dx;
    }else{
        step=dy;
    }
    xin=dx/step;                  
    yin=dy/step;                  
    glBegin(GL_POINTS);
    glVertex2d(round(x0),round(y0));         
     if(m<1 ){                      
        while(x<=x1){
            if(x==0){              
                x=x0+xin;
                y=y0+yin;
            }else{                     
                x=x+xin;
                y=y+yin;
            }
            glVertex2d(round(x),round(y));
        }
    }
    else if(m>1){                    
        while(y<=y1){
            if(x==0){               
                x=x0+xin;
                y=y0+yin;
            }else{                    
                x=x+xin;
                y=y+yin;
            }
           glVertex2d(round(x),round(y));
        }
    }
    else if(m==1){                 
        while(x<=x1|| y<=y1){
            if(x==0){                   
                x=x0+xin;
                y=y0+yin;
            }else{
                x=x+xin;                   
                y=y+yin;
            }
        glVertex2d(round(x),round(y));
        }
       }
       else if(x0==x1){                 
        while(y<=y1){
            if(y==0){                     
                x=x0+xin;
                y=y0+yin;
            }else{                        
                x=x+xin;
                y=y+yin;
            }
        glVertex2d(round(x),round(y));
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
glutCreateWindow("Task 5");
glClearColor(0.529, 0.921, 0.972,1);
gluOrtho2D(-500,500,-500,500);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
