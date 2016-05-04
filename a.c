
#include<stdio.h>
#include<GL/glut.h>
#include<stdlib.h>
int raster[2],i;
GLint sea[][2]={{-500,-280},{-500,-205},{500,-205},{500,-280}};
GLfloat base[][2]={{130.0,-150.0},{180.0,-205.0},{480.0,-205.0},{480.0,-150.0}};
GLint body1[][2]={{235,-80},{235,-150},{460,-150},{460,-65},{410,-65},{410,-95},{390,-95},{390,-120},{280,-120},{280,-80}};
GLint body2[][2]={{240,-80},{275,-80},{275,-50},{240,-50}};
GLint body3[][2]={{445,-65},{445,-30},{425,-30},{425,-65}};
GLint body4[][2]={{440,-30},{440,-15},{430,-15},{430,-30}};
GLint body5[][2]={{245,-50},{270,-50},{270,-20},{245,-20}};
GLint sq1[][2]={{250,-100},{265,-100},{265,-115},{250,-115}};
GLint sq2[][2]={{400,-105},{410,-105},{410,-115},{400,-115}};
GLint sq3[][2]={{255,-40},{260,-40},{260,-30},{255,-30}};
GLint sq4[][2]={{250,-70},{265,-70},{265,-60},{250,-60}};
GLint hbody[][2]={{70,230},{90,205},{90,190},{-20,190},{-50,230}};
GLint hbody1[][2]={{90,205},{63,205},{63,230},{70,230}};
GLint hbody2[][2]={{63,230},{63,205},{50,205},{50,230}};
GLint hbody3[][2]={{20,230},{0,230},{4,270},{16,270}};
GLint hbody4[][2]={{-46,225},{-42,218},{-150,218},{-150,225}};
GLint hbody5[][2]={{-150,225},{-155,240},{-147,240},{-140,225}};
GLint hbody6[][2]={{-150,218},{-155,203},{-147,203},{-140,218}};
int n=-450;
void update(int value)
{
	n+=15;
	glutPostRedisplay();
	glutTimerFunc(200,update,0);
	
}
void drawship()
{
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
	
	glBegin(GL_POLYGON);
		glColor3f(0.2,0.2,0.2);
		for(i=0;i<4;i++)
		glVertex2iv(sq3[i]);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.2,0.2,0.2);
		for(i=0;i<4;i++)
		glVertex2iv(sq4[i]);
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
	
	glBegin(GL_LINE_LOOP);
		glColor3f(0.4,0.4,0.4);
		for(i=0;i<4;i++)
		glVertex2iv(body4[i]);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glColor3f(0.4,0.4,0.4);
		for(i=0;i<4;i++)
		glVertex2iv(body5[i]);
	glEnd();
	
	glBegin(GL_LINES);
	      glColor3f(0.4,0.4,0.4);
	      glVertex2i(435,0);
	      glVertex2i(435,-15);
	      glVertex2i(415,-15);
	      glVertex2i(455,-15);
	      glVertex2i(420,-15);
	      glVertex2i(430,-30);
	      glVertex2i(440,-30);
	      glVertex2i(450,-15);
	      
	      glVertex2i(303,-120);////pillar1
	      glVertex2i(303,-30);
	      glVertex2i(318,-120); 
	      glVertex2i(318,-30);
	      
	      glVertex2i(372,-120); //pillar2
	      glVertex2i(372,-30);
	      glVertex2i(357,-120);
	      glVertex2i(357,-30);
	      
	glEnd();
	
	glBegin(GL_LINE_STRIP);
		glVertex2i(303,-30);
		glVertex2i(305,-28);
		glVertex2i(310,-27);
		glVertex2i(312,-27);
		glVertex2i(314,-28);
		glVertex2i(316,-29);
		glVertex2i(317,-30);
		glVertex2i(318,-30);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
		glVertex2i(357,-30);
		glVertex2i(359,-28);
		glVertex2i(364,-27);
		glVertex2i(366,-27);
		glVertex2i(368,-28);
		glVertex2i(370,-28);
		glVertex2i(371,-30);
		glVertex2i(372,-30);
	glEnd();
}

void drawsea()
{
	glBegin(GL_POLYGON);
		glColor3f(0.0,0.5,0.7);
		for(i=0;i<4;i++)
		glVertex2iv(sea[i]);
	glEnd();
}

void copter()
{
	glBegin(GL_LINE_LOOP);
		glColor3f(0.4,0.4,0.4);
		for(i=0;i<5;i++)
		glVertex2iv(hbody[i]);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glColor3f(0.4,0.4,0.4);
		for(i=0;i<4;i++)
		glVertex2iv(hbody1[i]);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glColor3f(0.4,0.4,0.4);
		for(i=0;i<4;i++)
		glVertex2iv(hbody2[i]);
	glEnd();	
	
	glBegin(GL_LINES);
	      glColor3f(0.4,0.4,0.4);
	      glVertex2i(90,198);
	      glVertex2i(-26,198);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glColor3f(0.4,0.4,0.4);
		for(i=0;i<4;i++)
		glVertex2iv(hbody3[i]);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glColor3f(0.4,0.4,0.4);
		for(i=0;i<4;i++)
		glVertex2iv(hbody4[i]);
	glEnd();

	glBegin(GL_LINE_LOOP);
		glColor3f(0.4,0.4,0.4);
		for(i=0;i<4;i++)
		glVertex2iv(hbody5[i]);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glColor3f(0.4,0.4,0.4);
		for(i=0;i<4;i++)
		glVertex2iv(hbody6[i]);
	glEnd();

	
	glBegin(GL_LINES);
	      glColor3f(0.4,0.4,0.4);
	      glVertex2i(10,270);
	      glVertex2i(10,275);
	      glVertex2i(60,275);
	      glVertex2i(-50,275);
	glEnd();
	
	glBegin(GL_LINES);
	      glColor3f(0.4,0.4,0.4);
	      glVertex2i(70,190);
	      glVertex2i(75,180);
	      glVertex2i(80,180);
	      glVertex2i(-15,180);
	      glVertex2i(-10,190);
	      glVertex2i(-5,180);
	glEnd();
}

void display()
{
	int i;
	glClear(GL_COLOR_BUFFER_BIT);
	drawsea();
	drawship(); 
	
	glPushMatrix();
		glTranslatef(n,10,0.0);
		copter();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(n-300,10,0.0);	
	//glTranslatef(-380,100,0.0);
	glScalef(0.65,0.65,0.65);
	copter();
	glPopMatrix();
				
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
	glutSwapBuffers();
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
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(1300,700);
	glutCreateWindow("Destroyer");
	//glutIdleFunc(drawsea);
	init();
	glutDisplayFunc(display);
	glutTimerFunc(100,update,0);
	glutMainLoop();	
}
