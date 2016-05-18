#include<stdio.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<string.h>
int raster[2],i;
GLint sea[][2]={{-500,-300},{-500,-205},{500,-205},{500,-300}};
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
GLint a1, a2, b, b2,flag=0,v=0;
GLint s1,s2,s3,s4;
GLint bx1=0,by1=0,bx2=0,by2=0,f=0,f1=0;
GLfloat bx3=0.0,by3=0.0,bx4=0.0,by4=0.0,theta=0.0;
void display();
void fan();
void drawflag();
void init();
void update(int value)
{
	a1+=10; //copter 1
	a2+=10; //copter 2
	b+=10; //ship 1
	b2+=15;
	if(a1>=-130)
		a1=-130;
	if(a2>=-130)
		a2=-130;
	if(b>=-30)
		b=-30;
	glutPostRedisplay();
	glutTimerFunc(100,update,0);
	
}

void drawship()
{
	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		for(i=0;i<4;i++)
		glVertex2fv(base[i]);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glColor3f(0.4,0.4,0.4);
		for(i=0;i<10;i++)
		glVertex2iv(body1[i]);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.5,0.5,0.5);
		for(i=0;i<4;i++)
		glVertex2iv(sq1[i]);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.5,0.5,0.5);
		for(i=0;i<4;i++)
		glVertex2iv(sq2[i]);
	glEnd();
	
	glBegin(GL_POLYGON);
		glColor3f(0.5,0.5,0.5);
		for(i=0;i<4;i++)
		glVertex2iv(sq3[i]);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.5,0.5,0.5);
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
	      glColor3f(0.8,0.3,0.3);
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

void ship()
{
	drawship();
	drawflag();
}

void drawflag()
{
	glBegin(GL_POLYGON);
		glColor3f(0.8,0.4,0.0);
		glVertex2f(300,-170);
		glVertex2f(360,-170);
		glVertex2f(360,-160);
		glVertex2f(300,-160);
	glEnd();
	
	
	
	glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(300,-170);
		glVertex2f(360,-170);
		glVertex2f(360,-180);
		glVertex2f(300,-180);
	glEnd();
	
	glPointSize(2.5);
	glBegin(GL_POINTS);
		
		glColor3f(0.0,0.0,1.0);
		glVertex2f(330,-175);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.0,1.0,0.0);
		glVertex2f(360,-180);
		glVertex2f(300,-180);
		glVertex2f(300,-190);
		glVertex2f(360,-190);
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

void stars()
{
	glPointSize(5.0);
	glBegin(GL_POINTS);
		glColor3f(1.0,1.0,1.0);
		glVertex2i(370,200);
		glVertex2i(-450,205);
		glVertex2i(300,220);
		glVertex2i(-300,220);
		glVertex2i(250,220);
	glEnd();
}

void copter()
{
	glBegin(GL_LINE_LOOP);
		for(i=0;i<5;i++)
		glVertex2iv(hbody[i]);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		for(i=0;i<4;i++)
		glVertex2iv(hbody1[i]);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		for(i=0;i<4;i++)
		glVertex2iv(hbody2[i]);
	glEnd();	
	
	glBegin(GL_LINES);
	      glVertex2i(90,198);
	      glVertex2i(-26,198);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		for(i=0;i<4;i++)
		glVertex2iv(hbody3[i]);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		for(i=0;i<4;i++)
		glVertex2iv(hbody4[i]);
	glEnd();

	glBegin(GL_LINE_LOOP);
		for(i=0;i<4;i++)
		glVertex2iv(hbody5[i]);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		for(i=0;i<4;i++)
		glVertex2iv(hbody6[i]);
	glEnd();
	
	glPushMatrix();
	
	fan();
	
	glPopMatrix();

	glBegin(GL_LINES);
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
void fan()
{
	if(f<60)
	{
		f+=3;
		glBegin(GL_LINES);
	     		glVertex2i(60-f,275);
	     		glVertex2i(-50+f,275);
		
		glEnd();
	}
	if(f>=60&& f1!=60)
	{
		f1+=2;
		glBegin(GL_LINES);
			glVertex2i(19+f1,275);
	     		glVertex2i(-1-f1,275);
		glEnd();
		f=0;f1=0;
	}
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
	if(key=='v' || key=='V')
	{
		v=1;s1=0; s2=0; s3=0; s4=0; a1=-450; a2=-1150; b=-650; b2=-1700;
		init();
		glutTimerFunc(300,update,0);
		display();
	}
}

void shooter()
{
	glLineWidth(2.8);
	glBegin(GL_LINES);
		glColor3f(0.2,0.2,0.2);
		glVertex2i(228,-150);
		glVertex2i(189,-122);
		glVertex2i(244,-150);
		glVertex2i(195,-116);
	glEnd();
	glLineWidth(2.0);
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
void rotate1()
{
	theta-=2.0;
	if(theta<=-10.0)
		theta=-10.0;
}

void rotate2()
{
	theta+=20.0;
	if(theta>=40.0)
		theta=40.0;
}
void rotate3()
{
	theta-=9.0;
	if(theta>=0.0)
		theta=0.0;
}
void bullet(void)
{
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.7,0.7);
		glVertex2i(210,-130);
		glVertex2i(215,-135);
		glVertex2i(215,-130);
		glVertex2i(210,-135);
	glEnd();
}

void display1()
{
	int i;
	flag=0;
	glClear(GL_COLOR_BUFFER_BIT);
	stars();

	rotate1();
	glPushMatrix();
		glTranslatef(230,-150,0);
		glRotatef(theta,0,0,1);
		glTranslatef(-230,150,0);
		shooter();
	glPopMatrix();
	
	bx1+=8;by1+=10;
	glPushMatrix();
		glTranslatef(-bx1,by1,0);
		bullet();
	glPopMatrix();
	
	drawsea();
	drawship(); 
	
	glPushMatrix();
		glColor3f(0.5,0.7,1.0);
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
	
	shooter();
		
	drawsea();
	drawship(); 
	stars();
	
	glPushMatrix();
		glTranslatef(b,-113,0.0);
		glScalef(-0.45,0.45,-0.45);
		drawship(); 
	glPopMatrix();
	
	glPushMatrix();
		glColor3f(0.2,0.2,0.2);
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
	
	rotate2();
	glPushMatrix();
		glTranslatef(230,-150,0);
		glRotatef(theta,0,0,1);
		glTranslatef(-230,150,0);
		shooter();
	glPopMatrix();
	
	if(s2>7 && s2<22)
	{
	bx2+=22;by2+=2;
	glPushMatrix();
	glTranslatef(-bx2,-by2,0);
	bullet();
	glPopMatrix();
	}
		
	drawsea();
	drawship(); 
	stars();
	
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
	
	stars();
	drawship(); 
	
	rotate3();
	glPushMatrix();
	glTranslatef(230,-150,0);
	glRotatef(theta,0,0,1);
	glTranslatef(-230,150,0);
	shooter();
	glPopMatrix();
	
	glPushMatrix();
		glColor3f(0.9,0.5,0.3);
		glTranslatef(a2,70,0.0);	
		glScalef(0.60,0.60,0.60);
		copter();
	glPopMatrix();
	
	if(s3<35)
	{
	bx3+=10;by3+=10;
	glPushMatrix();
	glTranslatef(-bx3,by3,0);
	bullet();
	glPopMatrix();
	}
	
	if(s3>36)
	{
		
	glPushMatrix();
		glColor3f(0.2,0.2,0.2);
		glTranslatef(a2,70,0.0);	
		glScalef(0.60,0.60,0.60);
		copter();
	glPopMatrix();
	}
	
	if(a2>=-130)
	{
	glPushMatrix();
		glTranslatef(-20.0,-30,0.0);
		blast();
	glPopMatrix();
	}
	
	glPushMatrix();
		glTranslatef(b2,-113,0.0);
		glScalef(-0.45,0.45,-0.45);
		glColor3f(0.2,0.2,0.2);
		ship(); 
		flag=1;
	glPopMatrix();	
	
	flag=0;			
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

void display5()
{
	int i;
	glClear(GL_COLOR_BUFFER_BIT);
	drawsea();
	
	stars();
	
	rotate2();
	glPushMatrix();
		glTranslatef(230,-150,0);
		glRotatef(theta,0,0,1);
		glTranslatef(-230,150,0);
		shooter();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(b2,-113,0.0);
		glScalef(-0.45,0.45,-0.45);
		flag=1;
		ship(); 
	glPopMatrix();	
	flag=0;
	drawship(); 
	
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

void screen1(int x, int y, char *string, int font)
{
    	int len,i;
	glColor3f(0.8,0.52,1.0);
	glRasterPos2f(x, y);
   	len=(int) strlen(string);
    	for(i = 0; i < len; i++) 
    	{
   		if(font==1)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string[i]);
		if(font==2)
   	 		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string[i]);
		if(font==3)
	      		  glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,string[i]);
		if(font==4)
    			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,string[i]);
	}

}

void display0(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.5,0.2,0.0,0.0);
	
	screen1(-150,90,"Press 'v' to view simulation",1);
	screen1(-185,-10,"Press 'q' or double click on the screen to quit ",2);
	glFlush();
	glutSwapBuffers();

}

void display()
{

	glClearColor(0.0,0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	if(v==0)
	{
		init();
		display0();
	}
	else
	{v=1;
	stars();
	display1();
	if(a1>=-130)
	{
		s1++;
		if(s1>6)
		bx1=0; by1=0;
		display2();
	}
	
	if(s1>7)
	{
		s2++;
		display3();
	}
	
	if(s2>30)
	{
		bx2=0;by2=0;
		s3++;
		display4();
	}
	
	if(s3>40)
	{
		s4++;
		display5();
		 a1=-450;
	}
		
	if(s4>40)
	{
		bx3=0;by3=0;
		bx1=0;by1=0;
		s1=0; s2=0; s3=0; s4=0; a2=-1150; b=-650; b2=-1700;
		theta=0.0;
		display();
	}
	}
	glFlush();
	glutSwapBuffers();
}
void init()
{
	glClearColor(0.5,0.2,0.0,0.0);
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
	//glutTimerFunc(100,update,0);
	glutMainLoop();	
}

