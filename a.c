#include<stdio.h>
#include<GL/glut.h>
#include<stdlib.h>
GLfloat base[][2]={{130.0,-120.0},{180.0,-175.0},{480.0,-175.0},{480.0,-120.0}};
GLint body1[][2]={{235,-50},{235,-120},{460,-120},{460,-35},{420,-35},{420,-65},{395,-65},{395,-90},{280,-90},{280,-50}};
GLint body2[][2]={{237,-50},{278,-50},{278,0},{237,0}};
GLint body3[][2]={{450,-35},{450,0},{430,0},{430,-35}};
GLint sq1[][2]={{250,-65},{265,-65},{265,-80},{250,-80}};
GLint sq2[][2]={{405,-75},{415,-75},{415,-85},{405,-85}};
GLint sq3[][2]={{251,-17},{251,-29},{264,-29},{264,-17}};
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

	glBegin(GL_POLYGON);
		glColor3f(0.2,0.2,0.2);
		for(i=0;i<4;i++)
		glVertex2iv(sq3[i]);
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
