#include<stdio.h>
#include<GL/glut.h>
#include<stdlib.h>
GLfloat base[][2]={{130.0,-120.0},{180.0,-175.0},{480.0,-175.0},{480.0,-120.0}};
GLint body1[][2]={{235,-50},{235,-120},{460,-120},{460,-35},{410,-35},{410,-65},{390,-65},{390,-90},{280,-90},{280,-50}};
GLint sq1[][2]={{250,-70},{265,-70},{265,-85},{250,-85}};
GLint sq2[][2]={{400,-75},{410,-75},{410,-85},{400,-85}};
GLint body2[][2]={{237,-50},{278,-50},{278,0},{237,0}};
GLint body3[][2]={{445,-35},{445,0},{425,0},{425,-35}};
void display()
{
	int i;
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
		glColor3f(0.2,0.2,0.2);
		for(i=0;i<4;i++)
		glVertex2fv(base[i]);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glColor3f(0.4,0.4,0.4);
		for(i=0;i<10;i++)
		glVertex2iv(body1[i]);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.2,0.2,0.2);
		for(i=0;i<4;i++)
		glVertex2iv(sq1[i]);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.2,0.2,0.2);
		for(i=0;i<4;i++)
		glVertex2iv(sq2[i]);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glColor3f(0.4,0.4,0.4);
		for(i=0;i<4;i++)
		glVertex2iv(body2[i]);
	glEnd();

	glBegin(GL_LINE_LOOP);
		glColor3f(0.4,0.4,0.4);
		for(i=0;i<4;i++)
		glVertex2iv(body3[i]);
	glEnd();

	glFlush();
}
void init()
{
	glClearColor(0.0,0.0,0.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-500.0,500.0,-300.0,300.0);
}

void main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1300,700);
	glutCreateWindow("Destroyer");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}
