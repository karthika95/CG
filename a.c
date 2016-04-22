#include<stdio.h>
#include<GL/glut.h>
#include<stdlib.h>
int raster[2];
GLint sea[][2]={{-500,-280},{-500,-205},{500,-205},{500,-280}};
GLfloat base[][2]={{130.0,-150.0},{180.0,-205.0},{480.0,-205.0},{480.0,-150.0}};
GLint body1[][2]={{235,-80},{235,-150},{460,-150},{460,-65},{410,-65},{410,-95},{390,-95},{390,-120},{280,-120},{280,-80}};
GLint body2[][2]={{237,-80},{278,-80},{278,-30},{237,-30}};
GLint body3[][2]={{445,-65},{445,-30},{425,-30},{425,-65}};
GLint sq1[][2]={{250,-100},{265,-100},{265,-115},{250,-115}};
GLint sq2[][2]={{400,-105},{410,-105},{410,-115},{400,-115}};
void display()
{
	int i;
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_POLYGON);
		glColor3f(0.0,0.5,0.7);
		for(i=0;i<4;i++)
		glVertex2iv(sea[i]);
	glEnd();

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
	
	char india[]="INDIA";
	raster[0]=330;
	raster[1]=-180;
	for(i=4;i>=0;i--)
	{
		raster[0]=raster[0]-8;
		glColor3f(1.0,1.0,1.0);
		glRasterPos2iv(raster);
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13,india[i]);
	}

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
