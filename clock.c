#include <GL/glut.h>
#include<math.h>
#define pi 3.1415
void init(void)
{
	glClearColor(0.5,0.0,0.5,1.0);
	glMatrixMode(GL_PROJECTION);
      glLoadIdentity();
	   glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);	
}

void circle(void)
{	
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glutSolidSphere(40,45,2);
	GLvoid *font_style1 = GLUT_BITMAP_TIMES_ROMAN_24;
	glRasterPos3f (2.5, 0.0, 1.0);
	glutBitmapString(font_style1, "Quartz"); 
	glEnd();
	glFlush();
}


void main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(50,100);
	glutInitWindowSize(400,300);
	glutCreateWindow("An Example OpenGL Program");
	init();
	glutDisplayFunc(circle);glRasterPos3f (0.0, 0.0, 0.0);glRasterPos3f (0.0, 0.0, 0.0);
	glutMainLoop();
}

