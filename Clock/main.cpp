#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846

GLfloat i = 0.0f;
GLfloat j = 0.0f;
GLfloat k = 0.0f;

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
	int triangleAmount = 100; //# of triangles used to draw circle

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

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

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
    glRotatef(i,0.0,0.0,1.0);

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

    i-=0.0003f;

    //Hour Dial
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    //glTranslatef(0.25,0.6,0.0);
    glRotatef(j,0.0,0.0,1.0);

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

    j-=0.00008f;

    //Second Dial
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    //glTranslatef(0.25,0.6,0.0);
    glRotatef(k,0.0,0.0,1.0);

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

    k-=0.001f;





    glColor3ub(255, 204, 0);//inner black line
    triangleFan(0.0f,0.0f,.1f);





	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
