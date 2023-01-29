#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846

GLfloat i = 0.0f;



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



/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(2);
	// Draw a Red 1x1 Square centered at origin



	glBegin(GL_POLYGON);
	glColor3ub(117, 117, 163);

	glVertex2f(0.2,0.0);
	glVertex2f(0.2,0.3);
	glVertex2f(-0.3,0.3);
	glVertex2f(-0.3,0.0);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(117, 117, 163);

	glVertex2f(0.2,0.1);
	glVertex2f(0.3,0.1);
	glVertex2f(0.3,0.2);
	glVertex2f(0.2,0.2);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(117, 117, 163);

	glVertex2f(-0.3,0.1);
	glVertex2f(-0.3,0.2);
	glVertex2f(-0.4,0.2);
	glVertex2f(-0.4,0.1);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(61, 61, 92);

	glVertex2f(0.1,0.1);
	glVertex2f(0.1,0.2);
	glVertex2f(-0.2,0.2);
	glVertex2f(-0.2,0.1);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(255, 140, 26);

	glVertex2f(0.2,0.0);
	glVertex2f(0.3,0.0);
	glVertex2f(0.3,0.1);
	glVertex2f(0.2,0.1);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(255, 140, 26);

	glVertex2f(-0.4,0.0);
	glVertex2f(-0.3,0.0);
	glVertex2f(-0.3,0.1);
	glVertex2f(-0.4,0.1);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(255, 140, 26);

	glVertex2f(-0.1,0.3);
	glVertex2f(0.1,0.3);
	glVertex2f(0.1,0.4);
	glVertex2f(-0.1,0.4);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(204, 122, 0);//yellow

	glVertex2f(-0.2,0.3);
	glVertex2f(-0.1,0.3);
	glVertex2f(-0.1,0.4);
	glVertex2f(-0.2,0.4);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0, 43, 128);//blue

	glVertex2f(0.1,0.4);
	glVertex2f(0.1,0.7);
	glVertex2f(0.0,0.7);
	glVertex2f(0.0,0.6);
	glVertex2f(-0.1,0.6);
	glVertex2f(-0.1,0.4);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);//black

	glVertex2f(-0.2,0.4);
	glVertex2f(-0.1,0.4);
	glVertex2f(-0.1,0.7);
	glVertex2f(-0.2,0.7);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0, 43, 128);//blue

	glVertex2f(0.2,-0.1);
	glVertex2f(0.3,-0.1);
	glVertex2f(0.3,0.0);
	glVertex2f(0.2,0.0);


    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0, 43, 128);//blue

	glVertex2f(-0.4,-0.1);
	glVertex2f(-0.3,-0.1);
	glVertex2f(-0.3,0.0);
	glVertex2f(-0.4,0.0);


    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

	glVertex2f(-0.4,-0.4);
	glVertex2f(-0.3,-0.4);
	glVertex2f(-0.3,-0.1);
	glVertex2f(-0.4,-0.1);


    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

	glVertex2f(0.2,-0.4);
	glVertex2f(0.3,-0.4);
	glVertex2f(0.3,-0.1);
	glVertex2f(0.2,-0.1);


    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(255, 214, 51);

	glVertex2f(-0.3,-0.1);
	glVertex2f(0.2,-0.1);
	glVertex2f(0.2,0.0);
	glVertex2f(-0.3,-0.0);


    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0, 43, 128);//blue

	glVertex2f(-0.2,-0.3);
	glVertex2f(0.1,-0.3);
	glVertex2f(0.1,-0.2);
	glVertex2f(0.2,-0.2);
    glVertex2f(0.2,-0.1);
	glVertex2f(-0.2,-0.1);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);//blue

	glVertex2f(-0.3,-0.2);
	glVertex2f(-0.2,-0.2);
	glVertex2f(-0.2,-0.1);
	glVertex2f(-0.3,-0.1);


    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(61, 61, 92);//blue

	glVertex2f(-0.3,-0.5);
	glVertex2f(-0.2,-0.5);
	glVertex2f(-0.2,-0.2);
	glVertex2f(-0.3,-0.2);


    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(61, 61, 92);//blue

	glVertex2f(0.1,-0.5);
	glVertex2f(0.2,-0.5);
	glVertex2f(0.2,-0.2);
	glVertex2f(0.1,-0.2);


    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(117, 117, 163);//blue

	glVertex2f(-0.2,-0.5);
	glVertex2f(-0.1,-0.5);
	glVertex2f(-0.1,-0.3);
	glVertex2f(-0.2,-0.3);


    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(117, 117, 163);//blue

	glVertex2f(0.0,-0.5);
	glVertex2f(0.1,-0.5);
	glVertex2f(0.1,-0.3);
	glVertex2f(0.0,-0.3);


    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);//blue

	glVertex2f(0.0,-0.4);
	glVertex2f(0.0,-0.3);
	glVertex2f(-0.1,-0.3);
	glVertex2f(-0.1,-0.4);


    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);//blue

	glVertex2f(0.0,-0.6);
	glVertex2f(0.1,-0.6);
	glVertex2f(0.1,-0.5);
	glVertex2f(0.0,-0.5);


    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0, 0, 153);//blue

	glVertex2f(0.1,-0.6);
	glVertex2f(0.2,-0.6);
	glVertex2f(0.2,-0.5);
	glVertex2f(0.1,-0.5);


    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);//blue

	glVertex2f(-0.3,-0.6);
	glVertex2f(-0.2,-0.6);
	glVertex2f(-0.2,-0.5);
	glVertex2f(-0.3,-0.5);


    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0, 0, 153);//blue

	glVertex2f(-0.2,-0.6);
	glVertex2f(-0.1,-0.6);
	glVertex2f(-0.1,-0.5);
	glVertex2f(-0.2,-0.5);


    glEnd();

	glFlush();
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
