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
int a1=-450, a2=-1150, b=-650;
int s1=0, s2=0;
void display();
void update(int value)
{
	a1+=10; //copter 1
	a2+=10; //copter 2
	b+=10; //ship 1
	if(a1>=-130)
		a1=-130;
	if(a2>=-130)
		a2=-130;
	if(b>=-30)
		b=-30;
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
	
	glPushMatrix();
	
	glBegin(GL_LINES);
	      glColor3f(0.4,0.4,0.4);
	      //glVertex2i(10,270);
	      //glVertex2i(10,275);
	      glVertex2i(60,275);
	      glVertex2i(-50,275);
	glEnd();
	
	glPopMatrix();

	glBegin(GL_LINES);
	      glColor3f(0.4,0.4,0.4);
	      glVertex2i(10,270);
	      glVertex2i(10,275);
	      glVertex2i(70,190);
	      glVertex2i(75,180);
	      glVertex2i(80,180);
	      glVertex2i(-15,180);
	      glVertex2i(-10,190);
	      glVertex2i(-5,180);
	glEnd();
}

void menu(int id)
{
	switch(id)
	{
		case 1: exit(1);
			break;
	}
	glutPostRedisplay();
}

void mouse(int btn, int state, int x, int y)
{
	if(btn==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
	{
		glutCreateMenu(menu);
		glutAddMenuEntry("quit",1);
		glutAttachMenu(GLUT_RIGHT_BUTTON);
	}
}

void keys(unsigned char key, int x, int y)
{
	if(key=='q' || key=='Q')
		exit(0);
}

void shooter()
{
	glBegin(GL_LINES);
		glColor3f(0.4,0.4,0.4);
		glVertex2i(228,-150);
		glVertex2i(185,-115);
		glVertex2i(235,-141);
		glVertex2i(192,-106);
	glEnd();
}

void blast()
{
	glBegin(GL_POLYGON);
		glColor3f(1.0,0.4,0.0);
		glVertex2i(-110,233);
		glVertex2i(-113,245);
		glVertex2i(-98,240);
		glVertex2i(-92,253);
		glVertex2i(-85,242);
		glVertex2i(-71,244);
		glVertex2i(-72,232);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2i(-72,232);
		glVertex2i(-61,222);
		glVertex2i(-73,216);
		glVertex2i(-66,204);
		glVertex2i(-83,208);
		glVertex2i(-92,198);
		glVertex2i(-99,211);
		glVertex2i(-110,210);
		glVertex2i(-108,221);
		glVertex2i(-118,223);
		glVertex2i(-110,233);
	glEnd();
}

void display1()
{
	int i;
	glClear(GL_COLOR_BUFFER_BIT);
	drawsea();
	
	shooter();
	drawship(); 
	
	glPushMatrix();
		glTranslatef(a1,70,0.0);
		glScalef(0.75,0.75,0.75);
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
}

void display2()
{
	int i;
	glClear(GL_COLOR_BUFFER_BIT);
	drawsea();
	
	shooter();
	
	glPushMatrix();
		glTranslatef(b,-113,0.0);
		glScalef(-0.45,0.45,-0.45);
		drawship(); 
	glPopMatrix();
	
	drawship(); 
	
	glPushMatrix();
		glTranslatef(a1,70,0.0);
		glScalef(0.75,0.75,0.75);
		copter();
	glPopMatrix();
	
	blast();	
				
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
}

void display3()
{
	int i;
	glClear(GL_COLOR_BUFFER_BIT);
	drawsea();
	
	shooter();
	
	drawship(); 
	
	glPushMatrix();
		glTranslatef(b,-113,0.0);
		glScalef(-0.45,0.45,-0.45);
		drawship(); 
	glPopMatrix();	
	
	if(b>=-30)
	{
		glPushMatrix();
		glTranslatef(-40.0,-470,0.0);
		glScalef(1.4,1.4,1.4);
		blast();
		glPopMatrix();
	}
	
				
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
	
}
void display4()
{
	int i;
	glClear(GL_COLOR_BUFFER_BIT);
	drawsea();
	
	shooter();
	
	drawship(); 
	
	glPushMatrix();
		glTranslatef(a2,70,0.0);	
		glScalef(0.60,0.60,0.60);
		copter();
	glPopMatrix();
	
	if(a2>=-130)
	{
	glPushMatrix();
		glTranslatef(-20.0,-30,0.0);
		blast();
	glPopMatrix();
	}
				
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
	//display();
}


void display()
{

	glClear(GL_COLOR_BUFFER_BIT);
	display1();
	if(a1>=-130)
	{
		s1++;
		display2();
	}
	
	if(s1>2)
	{	s2++;
		display3();
	}
	
	/*if(s2>2)
	{
		display4();
	}*/
			
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
	glutMouseFunc(mouse);
	glutKeyboardFunc(keys);
	init();
	glutDisplayFunc(display);
	glutTimerFunc(100,update,0);
	glutMainLoop();	
}
