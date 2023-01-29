#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846

GLfloat i = 0.0f;

GLfloat i2 = 0.0f;
GLfloat j2 = 0.0f;
GLfloat k2 = 0.0f;

GLfloat position1 = 1.0f;
GLfloat position11 = 1.0f;
GLfloat position2 = -1.0f;
GLfloat speed1 = 0.01f;
GLfloat speed11 = 0.01f;
GLfloat speed2 = 0.02f;


void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void triangleLines(GLfloat a,GLfloat b,GLfloat r)
{
    GLfloat x=a; GLfloat y=b; GLfloat radius =r;
	int i;
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;


	glBegin(GL_LINE_LOOP);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
}

void triangleFan(GLfloat a,GLfloat b,GLfloat r)
{
    int i;
    GLfloat x=a; GLfloat y=b; GLfloat radius =r;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;


	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

void clock()
{




}

void update1(int value)
{

    if(position1 <-1.0)
        position1 = 1.0f;

    position1 -= speed1; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}

void update11(int value)
{

    if(position11 <-1.0)
        position11 = 1.0f;

    position11 -= speed11; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update11, 0);
}

void update2(int value) {

    if(position2 >1.0)
        position2 = -1.0f;

    position2 += speed2; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}




void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'p':
    speed1 = 0.0f;
    break;
case 'r':
    speed1 = 0.1f;
    break;
glutPostRedisplay();
	}
}


void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1);
	// Draw a Red 1x1 Square centered at origin



	glBegin(GL_QUADS);//main dock
	glColor3ub(255, 191, 0);
	glVertex2f(1.0, -0.8);
	glVertex2f(-1.0, -0.8);
	glVertex2f(-1,-1);
	glVertex2f(1,-1);
	glEnd();

	glBegin(GL_QUADS);//main dock design
	glColor3ub(230, 138, 0);
	glVertex2f(-0.4, -0.8);
	glVertex2f(-0.5, -1);
	glVertex2f(-0.3,-1);
	glVertex2f(-0.2,-0.8);
	glEnd();

	glBegin(GL_QUADS);//main dock design
	glColor3ub(230, 138, 0);
	glVertex2f(-0.8, -0.8);
	glVertex2f(-0.9, -1);
	glVertex2f(-0.7,-1);
	glVertex2f(-0.6,-0.8);
	glEnd();

	glBegin(GL_QUADS);//main dock design
	glColor3ub(230, 138, 0);
	glVertex2f(0.0, -0.8);
	glVertex2f(-0.1, -1);
	glVertex2f(0.1,-1);
	glVertex2f(0.2,-0.8);
	glEnd();

	glBegin(GL_QUADS);//main dock design
	glColor3ub(230, 138, 0);
	glVertex2f(0.4, -0.8);
	glVertex2f(0.3, -1);
	glVertex2f(0.5,-1);
	glVertex2f(0.6,-0.8);
	glEnd();

	glBegin(GL_QUADS);//main dock design
	glColor3ub(230, 138, 0);
	glVertex2f(0.8, -0.8);
	glVertex2f(0.7, -1);
	glVertex2f(0.9,-1);
	glVertex2f(1,-0.8);
	glEnd();





	glBegin(GL_QUADS);//water
	glColor3ub(153, 255, 255);
	glVertex2f(-1.0, -0.8);
	glVertex2f(1.0, -0.8);
	glVertex2f(1,.2);
	glVertex2f(-1,.2);
	glEnd();

	glBegin(GL_QUADS);//water
	glColor3ub(0, 230, 230);
	glVertex2f(-1.0, -0.8);
	glVertex2f(1.0, -0.8);
	glVertex2f(1,-.6);
	glVertex2f(-1,-.6);
	glEnd();

	glBegin(GL_QUADS);//water
	glColor3ub(51, 255, 255);
	glVertex2f(-1,-.6);
	glVertex2f(1,-.6);
	glVertex2f(1,-.1);
	glVertex2f(-1,-.1);
	glEnd();



	glBegin(GL_QUADS);//sky
	glColor3ub(179, 230, 255);
	glVertex2f(-1.0, 0.2);
	glVertex2f(1.0, 0.2);
	glVertex2f(1,1);
	glVertex2f(-1,1);
	glEnd();

	glBegin(GL_QUADS);//sky upper
	glColor3ub(153, 221, 255);
	glVertex2f(-1.0, 0.8);
	glVertex2f(1.0, 0.8);
	glVertex2f(1,1);
	glVertex2f(-1,1);
	glEnd();

	glBegin(GL_QUADS);//sky down
	glColor3ub(204, 239, 255);
	glVertex2f(-1.0, 0.2);
	glVertex2f(1.0, 0.2);
	glVertex2f(1,.5);
	glVertex2f(-1,.5);
	glEnd();



	/*glBegin(GL_POLYGON);//far boundary
	glColor3ub(191, 191, 191);
	glVertex2f(.1,.2);
	glVertex2f(1,.2);
	glVertex2f(1,.4);
	glVertex2f(.8,.4);
	glVertex2f(.8,.2);
	glVertex2f(.75,.2);
	glVertex2f(.7,.3);
	glVertex2f(.65,.3);
	glVertex2f(.6,.4);
	glVertex2f(.55,.3);

	glVertex2f(.49,.3);
	glVertex2f(.49,.6);
	glVertex2f(.45,.6);
	glVertex2f(.4,.3);
	glVertex2f(.35,.3);
	glVertex2f(.31,.4);
	glVertex2f(.3,.5);
	glVertex2f(.27,.4);
	glVertex2f(.2,.3);
	glVertex2f(.15,.3);
	glVertex2f(.1,.25);

	glEnd();*/



	glBegin(GL_QUADS);//dock stairs
	glColor3ub(255, 191, 0);
	glVertex2f(-0.3, -0.8);
	glVertex2f(0.3, -0.8);
	glVertex2f(0.1, -0.4);
	glVertex2f(-0.1, -0.4);
	glEnd();

	glBegin(GL_QUADS);//dock stairs design
	glColor3ub(230, 138, 0);
	glVertex2f(-0.3, -0.8);
	glVertex2f(0.3, -0.8);
	glVertex2f(0.25, -0.7);
	glVertex2f(-0.25, -0.7);
	glEnd();

	glBegin(GL_QUADS);//dock stairs design
	glColor3ub(230, 138, 0);
	glVertex2f(-0.2, -0.6);
	glVertex2f(0.2, -0.6);
	glVertex2f(0.15, -0.5);
	glVertex2f(-0.15, -0.5);
	glEnd();

	glBegin(GL_LINES);  //borders            // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 1.0f); // Red
	glVertex2f(-1.0f, 0.2f);    // x, y
	glVertex2f(1.0f, 0.2f);    // x, y

	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(-1.0f, -0.8f);
	glVertex2f(1.0f, -0.8f);
	glEnd();


    glColor3ub(255, 224, 102);//sun 1
    triangleFan(-.4f,.6f,.26f);
    glColor3ub(255, 214, 51);//sun 2
    triangleFan(-.4f,.6f,.22f);
    glColor3ub(255, 204, 0);//sun 3
    triangleFan(-.4f,.6f,.17f);
    glColor3ub(255, 195, 77);//sun 4
    triangleFan(-.4f,.6f,.12f);


    glPushMatrix();//moving clouds 1
    glTranslatef(position1,0,0);

    glColor3ub(242, 242, 242);//Clouds
    triangleFan(.4f,.6f,.12f);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(.5f,.7f,.13f);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(.57f,.6f,.11);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(.67f,.65f,.11);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(.3f,.63f,.09f);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(.45f,.72f,.05f);

    glPopMatrix();

    glPushMatrix();//moving clouds 2
    glTranslatef(position1,0,0);

    glColor3ub(242, 242, 242);//Clouds
    triangleFan(-.4f,.6f,.15f);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(-.5f,.7f,.13f);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(-.57f,.58f,.07);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(-.67f,.65f,.10);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(-.3f,.63f,.03f);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(-.45f,.72f,.10f);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(-.3f,.67f,.09f);
    glPopMatrix();


    glBegin(GL_QUADS);//Windmill Tower
	glColor3ub(153, 153, 102);

	glVertex2f(0.2,0.2);
	glVertex2f(0.3,0.2);
	glVertex2f(0.27,.6);
	glVertex2f(0.23,.6);
    glEnd();



    ///windmill
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glTranslatef(0.25,0.6,0.0);
    glRotatef(i,0.0,0.0,1.0);

    glBegin(GL_POLYGON);//Windmill Fans
	glColor3ub(255, 0, 102);

	glVertex2f(0.0,0.0);
	glVertex2f(-0.15,0.15);
	glVertex2f(-0.2,.10);
	glVertex2f(0.0,0.0);
	glVertex2f(-0.04,-.21);
	glVertex2f(0.03,-.21);
	glVertex2f(0.0,0.0);
	glVertex2f(0.15,0.15);
	glVertex2f(0.2,.10);
	glVertex2f(0.0,0.0);

    glEnd();

    glPopMatrix();//while glPopMatrix pops the top matrix off the stack

    i+=0.01f;


    //
    glTranslatef(0.2,.17,0);//mini boat 2
	glScalef(.5,.5,0);

	glBegin(GL_QUADS);//mini boat
	glColor3ub(204, 136, 0);

	glVertex2f(-.7,.0);
	glVertex2f(-.3,.0);
	glVertex2f(-.2,.1);
	glVertex2f(-.8,.1);
    glEnd();

    glBegin(GL_TRIANGLES);//mini boat sail
	glColor3ub(255, 173, 51);
	glVertex2f(-.7,.1);
	glVertex2f(-.5,.1);
	glVertex2f(-.5,.5);

    glEnd();

    glBegin(GL_TRIANGLES);//mini boat sail
	glColor3ub(0, 153, 255);
	glVertex2f(-.48,.1);
	glVertex2f(-.35,.1);
	glVertex2f(-.48,.3);

    glEnd();

    glBegin(GL_LINES);  //boat waves
	glColor3ub(0, 230, 230);
	glLineWidth(5);
	glVertex2f(-.8,.0);
	glVertex2f(-.2,.0);

	glVertex2f(-.7,-.03);
	glVertex2f(-.3,-.03);

	//glVertex2f(.65,-.4);
	//glVertex2f(.2,-.4);

	glEnd();

	glLoadIdentity();
    //

    glPushMatrix();//moving clouds 2
    glTranslatef(position2,0,0);
    glBegin(GL_QUADS);//mini boat
	glColor3ub(204, 136, 0);

	glVertex2f(-.7,.0);
	glVertex2f(-.3,.0);
	glVertex2f(-.2,.1);
	glVertex2f(-.8,.1);
    glEnd();

    glBegin(GL_TRIANGLES);//mini boat sail
	glColor3ub(255, 0, 0);
	glVertex2f(-.7,.1);
	glVertex2f(-.5,.1);
	glVertex2f(-.5,.5);

    glEnd();

    glBegin(GL_TRIANGLES);//mini boat sail
	glColor3ub(255, 140, 26);
	glVertex2f(-.48,.1);
	glVertex2f(-.35,.1);
	glVertex2f(-.48,.3);

    glEnd();

    glBegin(GL_LINES);  //boat waves
	glColor3ub(0, 230, 230);
	glLineWidth(5);
	glVertex2f(-.8,.0);
	glVertex2f(-.2,.0);

	glVertex2f(-.7,-.03);
	glVertex2f(-.3,-.03);

	glVertex2f(.65,-.4);
	glVertex2f(.2,-.4);

	glEnd();

	glPopMatrix();




	glBegin(GL_POLYGON);//ship
	glColor3ub(204, 51, 0);
	glVertex2f(.3,0);
	glVertex2f(.35,-.1);
	glVertex2f(.4,-.2);
	glVertex2f(.45,-.3);
	glVertex2f(.5,-.35);
	glVertex2f(.55,-.4);
	glVertex2f(.65,-.4);//side

	glVertex2f(.8,-.38);
	glVertex2f(.85,-.36);
	glVertex2f(.87,-.35);
	glVertex2f(.9,-.35);
	glVertex2f(.92,-.35);
	glVertex2f(.93,-.34);
	glVertex2f(.94,-.34);
	glVertex2f(1,-.35);

	glVertex2f(1,-.08);

	glEnd();

	glBegin(GL_QUADS);//ship
	glColor3ub(204, 122, 0);
	glVertex2f(.3,0);
	glVertex2f(1,-.08);
	glVertex2f(1,0);
	glVertex2f(.35,.08);
	glEnd();

	glBegin(GL_QUADS);//ship
	glColor3ub(102, 102, 153);
	glVertex2f(.4,.07);
	glVertex2f(1,0);
	glVertex2f(1,.15);
	glVertex2f(.55,.2);
	glEnd();

	glBegin(GL_QUADS);//ship
	glColor3ub(163, 163, 194);
	glVertex2f(.55,.2);
	glVertex2f(1,.15);
	glVertex2f(1,.22);
	glVertex2f(.6,.25);
	glEnd();

	glBegin(GL_QUADS);//pipe
	glColor3ub(71, 71, 107);
	glVertex2f(.75,.24);
	glVertex2f(.95,.22);
	glVertex2f(.95,.46);
	glVertex2f(.75,.46);
	glEnd();

    glBegin(GL_QUADS);//pipe
	glColor3ub(163, 163, 194);

	glVertex2f(.75,.36);
	glVertex2f(.95,.36);
	glVertex2f(.95,.3);
	glVertex2f(.75,.3);
    glEnd();

    glColor3ub(242, 242, 242);//for window2 border
    triangleFan(.67f,.11f,.07f);

    glColor3ub(0, 204, 204);//for window1 inner
    triangleFan(.67f,.11f,.055f);

    glColor3ub(242, 242, 242);//for window2 border
    triangleFan(.89f,.09f,.07f);

    glColor3ub(0, 204, 204);//for window2 inner
    triangleFan(.89f,.09f,.055f);







    glLineWidth(3);
	glBegin(GL_LINES);//Bird 1
	glColor3ub(255, 255, 255);
	glVertex2f(.5,.8);
	glVertex2f(.55,.83);
	glVertex2f(.55,.83);
	glVertex2f(.6,.75);
	glVertex2f(.6,.75);
	glVertex2f(.65,.79);
	glVertex2f(.65,.79);
	glVertex2f(.7,.71);

    glEnd();

    glTranslatef(.2,.32,0);//Bird 2
    glScalef(.5,.5,0);
    glLineWidth(2);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f(.5,.8);
	glVertex2f(.55,.83);
	glVertex2f(.55,.83);
	glVertex2f(.6,.75);
	glVertex2f(.6,.75);
	glVertex2f(.65,.79);
	glVertex2f(.65,.79);
	glVertex2f(.7,.71);


	glEnd();

    glLoadIdentity();

    glTranslatef(.08,.35,0);//Bird 3
    glScalef(.7,.7,0);
    glLineWidth(2);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f(.5,.8);
	glVertex2f(.55,.83);
	glVertex2f(.55,.83);
	glVertex2f(.6,.75);
	glVertex2f(.6,.75);
	glVertex2f(.65,.79);
	glVertex2f(.65,.79);
	glVertex2f(.7,.71);


	glEnd();

    glLoadIdentity();




    ///Clock Stand on the port///

    ///Tower
    glBegin(GL_TRIANGLES);
	glColor3ub(102, 102, 153);
	glVertex2f(-0.7f, -0.2f);
	glVertex2f(-0.8f, -1.0f);
    glVertex2f(-0.6f, -1.0f);

	glEnd();


    ///Clock


    glTranslatef(-.7,-.25,0);
    glScalef(.2,.2,0);

    glLineWidth(100);
	glColor3ub(255, 204, 0);//outer border
    triangleLines(0.0f,0.0f,.85f);


    glLineWidth(3);
    glColor3ub(255, 255, 255);//inner black line
    triangleFan(0.0f,0.0f,.8f);

    glLineWidth(7); //points main 4
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.75f);
	glVertex2f(0.0f, 0.65f);

	glVertex2f(0.0f, -0.75f);
	glVertex2f(0.0f, -0.65f);

	glVertex2f(0.75f, 0.0f);
	glVertex2f(0.65f, 0.0f);

	glVertex2f(-0.75f, 0.0f);
	glVertex2f(-0.65f, 0.0f);

	glEnd();

	glLineWidth(6); //diagonal points 8
    glBegin(GL_LINES);
	glColor3ub(255, 0, 0);
	glVertex2f(0.4f, 0.63f);
	glVertex2f(0.35f, 0.53f);

	glVertex2f(-0.4f, 0.63f);
	glVertex2f(-0.35f, 0.53f);

	glVertex2f(0.65f, 0.35f);
	glVertex2f(0.55f, 0.3f);

	glVertex2f(-0.65f, 0.35f);
	glVertex2f(-0.55f, 0.3f);


	glVertex2f(0.4f, -0.63f);
	glVertex2f(0.35f, -0.53f);

	glVertex2f(-0.4f, -0.63f);
	glVertex2f(-0.35f, -0.53f);

	glVertex2f(0.65f, -0.35f);
	glVertex2f(0.55f, -0.3f);

	glVertex2f(-0.65f, -0.35f);
	glVertex2f(-0.55f, -0.3f);




	glEnd();

	glColor3ub(255, 255, 0);//inner black line
    triangleFan(0.0f,0.0f,.3f);



     //Minute Dial
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    //glTranslatef(0.25,0.6,0.0);
    glRotatef(i2,0.0,0.0,1.0);

    glBegin(GL_POLYGON);//Windmill Fans
	glColor3ub(0, 0, 0);

	glVertex2f(0.0,0.0);
	glVertex2f(0.03,0.0);
	glVertex2f(0.03,0.5);
	glVertex2f(-0.03,0.5);
	glVertex2f(-0.03,-0.0);
	glVertex2f(0.0,0.0);

    glEnd();

    glPopMatrix();//while glPopMatrix pops the top matrix off the stack

    i2-=0.0003f;

    //Hour Dial
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    //glTranslatef(0.25,0.6,0.0);
    glRotatef(j2,0.0,0.0,1.0);

    glBegin(GL_POLYGON);//Windmill Fans
	glColor3ub(102, 102, 153);

	glVertex2f(0.0,0.0);
	glVertex2f(0.03,0.0);
	glVertex2f(0.03,0.3);
	glVertex2f(-0.03,0.3);
	glVertex2f(-0.03,-0.0);
	glVertex2f(0.0,0.0);

    glEnd();

    glPopMatrix();//while glPopMatrix pops the top matrix off the stack

    j2-=0.00008f;

    //Second Dial
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    //glTranslatef(0.25,0.6,0.0);
    glRotatef(k2,0.0,0.0,1.0);

    glBegin(GL_POLYGON);//Windmill Fans
	glColor3ub(255, 102, 0);

	glVertex2f(0.0,0.0);
	glVertex2f(0.02,0.0);
	glVertex2f(0.02,0.6);
	glVertex2f(-0.02,0.6);
	glVertex2f(-0.02,-0.0);
	glVertex2f(0.0,0.0);

    glEnd();

    glBegin(GL_POLYGON);//Windmill Fans
	glColor3ub(255, 102, 0);

	glVertex2f(0.0,0.0);
	glVertex2f(-0.02,0.0);
	glVertex2f(-0.02,-0.2);
	glVertex2f(0.02,-0.2);
	glVertex2f(0.02,0.0);
	glVertex2f(0.0,0.0);

    glEnd();

    glPopMatrix();//while glPopMatrix pops the top matrix off the stack

    k2-=0.001f;

    glColor3ub(255, 204, 0);//inner black line
    triangleFan(0.0f,0.0f,.1f);
    glLoadIdentity();






	glFlush();
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutKeyboardFunc(handleKeypress);

	glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
	glutTimerFunc(100, update1, 0);
	glutTimerFunc(100, update11, 0);
	glutTimerFunc(100, update2, 0);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
