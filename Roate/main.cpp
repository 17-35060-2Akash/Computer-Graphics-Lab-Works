#include<cstdio>

#include <GL/gl.h>
#include <windows.h>
#include <GL/glut.h>
#include<math.h>
# define PI           3.14159265358979323846



GLfloat m = 0.0;
GLfloat k = 0.0;
GLfloat l = 0.0;

GLfloat position = 0.0f;
GLfloat position2 = 0.0f;
GLfloat position3 = 0.0f;
GLfloat speed = 10.f;



void update(int value) {

    if(position >1.0)
        position = -1.0f;

    position -= speed+.2;

	glutPostRedisplay();


	glutTimerFunc(1, update, 0);

}



void Idle()
{
    glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'p':
    speed = 0.0f;
    break;
case 'r':
    speed = 10.0f;
    break;
glutPostRedisplay();
	}
}
void handleMouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON){
			speed += 10.0f;
			}
			if (button == GLUT_RIGHT_BUTTON)
	        {
            speed -= 10.0f;
			}
	glutPostRedisplay();
}







void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);


    ///WINGS

	glPushMatrix();

    glRotatef(position,0.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glColor3ub(1,1,1);
    glVertex2f(0,0);
    glVertex2f(.1,.5);
    glVertex2f(-.1,.5);
    glVertex2f(0,0);

    glVertex2f(0,0);
    glVertex2f(-.5,.1);
    glVertex2f(-.5,-.1);
    glVertex2f(0,0);

    glVertex2f(0,0);
    glVertex2f(-.1,-.5);
    glVertex2f(.1,-.5);
    glVertex2f(0,0);

    glVertex2f(0,0);
    glVertex2f(.5,.1);
    glVertex2f(.5,-.1);
    glVertex2f(0,0);

    glEnd();

    glLoadIdentity();
    glPopMatrix();


    ///TABLE FAN CENTRE ROUND DISK
    int i;
	GLfloat x1=0.0f; GLfloat y1=0.0f; GLfloat radius1 =.17f;
	int triangleAmount1 = 20;


	GLfloat twicePi1 = 2.0f * PI;

     glBegin(GL_TRIANGLE_FAN);

        glColor3ub(1,1,1);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount1;i++)
            {
			 glVertex2f(
		             x1 + (radius1 * cos(i *  twicePi1 / triangleAmount1)),
			         y1 + (radius1 * sin(i * twicePi1 / triangleAmount1))
			);
		    }

	glEnd();




	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("TABLE FAN");
	glutReshapeWindow(400,400);
	glutPositionWindow(450,200);
	//glutFullScreen();
	glutDisplayFunc(display);
	glutIdleFunc(Idle);
	glutTimerFunc(1, update, 0);
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);



	glutMainLoop();
	return 0;
}
