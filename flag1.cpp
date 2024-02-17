#include <windows.h>
#include <GL/glut.h>
#include <math.h>


void display() {
    glClearColor(1.0f, 1.0f, 0.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();


    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(15.0,0.0);
    glVertex2f(-15.0,0.0);
    glVertex2f(0.0,15.0);
    glVertex2f(0.0,-15.0);
    glEnd();
//-----------------------------------------------------------------------------------------------------------------------------------------//
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-1.0,3.0);
    glVertex2f(-14.0,3.0);
    glVertex2f(-14.0,13.0);
    glVertex2f(-1.0,13.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.55f,0.0f,0.22f);
    glVertex2f(-1.0,3.0);
    glVertex2f(-8.0,3.0);
    glVertex2f(-8.0,13.0);
    glVertex2f(-1.0,13.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.55f,0.0f,0.22f);
    glVertex2f(-8,13);
    glVertex2f(-9.5,13);
    glVertex2f(-8,12.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.55f,0.0f,0.22f);
    glVertex2f(-8,12.5);
    glVertex2f(-9.5,12);
    glVertex2f(-8,11.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.55f,0.0f,0.22f);
    glVertex2f(-8,11.5);
    glVertex2f(-9.5,11);
    glVertex2f(-8,10.5);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.55f,0.0f,0.22f);
    glVertex2f(-8,10.5);
    glVertex2f(-9.5,10);
    glVertex2f(-8,9.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.55f,0.0f,0.22f);
    glVertex2f(-8,9.5);
    glVertex2f(-9.5,9);
    glVertex2f(-8,8.5);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.55f,0.0f,0.22f);
    glVertex2f(-8,8.5);
    glVertex2f(-9.5,8);
    glVertex2f(-8,7.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.55f,0.0f,0.22f);
    glVertex2f(-8,7.5);
    glVertex2f(-9.5,7);
    glVertex2f(-8,6.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.55f,0.0f,0.22f);
    glVertex2f(-8,6.5);
    glVertex2f(-9.5,6);
    glVertex2f(-8,5.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.55f,0.0f,0.22f);
    glVertex2f(-8,5.5);
    glVertex2f(-9.5,5);
    glVertex2f(-8,4.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.55f,0.0f,0.22f);
    glVertex2f(-8,4.5);
    glVertex2f(-9.5,4);
    glVertex2f(-8,3.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.55f,0.0f,0.22f);
    glVertex2f(-8,3.5);
    glVertex2f(-9.5,3);
    glVertex2f(-8,3);
    glEnd();




//------------------------------------------------------------------------------------------------------------------------------------------------------------//


    glBegin(GL_QUADS);//2nd flag
    glColor3f(0.970f,0.83f,0.054f);
    glVertex2f(2.0,1.0);
    glVertex2f(9.0,1.0);
    glVertex2f(9.0,8.0);
    glVertex2f(2.0,8.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.70f,0.0f);
    glVertex2f(3.0,1.0);
    glVertex2f(5.5,3.5);
    glVertex2f(8.0,1.0);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(2.0,2.0);
    glVertex2f(4.5,4.5);
    glVertex2f(2.0,7.0);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(9.0,2.0);
    glVertex2f(6.5,4.5);
    glVertex2f(9.0,7.0);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.70f,0.0f);
    glVertex2f(3.0,8.0);
    glVertex2f(5.5,5.5);
    glVertex2f(8.0,8.0);

    glEnd();

//---------------------------------------------------------------------------------------------------
    glBegin(GL_QUADS);//3rd flag
    glColor3f(0.0f,0.0f,0.70f);
    glVertex2f(-2.0,-1.0);
    glVertex2f(-9.0,-1.0);
    glVertex2f(-9.0,-8.0);
    glVertex2f(-2.0,-8.0);
    glEnd();
    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-9,-3.5);
    glVertex2f(-9,-5.25);
    glVertex2f(-2,-3.5);
    glVertex2f(-2,-5.25);
    glEnd();

    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-6,-1.0);
    glVertex2f(-7.5,-1.0);
    glVertex2f(-6,-8.0);
    glVertex2f(-7.5,-8.0);
    glEnd();

     glBegin(GL_QUAD_STRIP);
    glColor3f(0.70f,0.0f,0.0f);
    glVertex2f(-6.5,-1.0);
    glVertex2f(-7.0,-1.0);
    glVertex2f(-6.5,-8.0);
    glVertex2f(-7.0,-8.0);
    glEnd();

    glBegin(GL_QUAD_STRIP);
    glColor3f(0.70f,0.0f,0.0f);
    glVertex2f(-9,-4.0);
    glVertex2f(-9,-4.75);
    glVertex2f(-2,-4.0);
    glVertex2f(-2,-4.75);
    glEnd();
//-------------------------------------------------------------------------------------------------------------///
    glBegin(GL_QUADS);//4th flag
    glColor3f(0.0f,0.70f,0.0f);
    glVertex2f(2.0,-1.0);
    glVertex2f(9.0,-1.0);
    glVertex2f(9.0,-8.0);
    glVertex2f(2.0,-8.0);
    glEnd();

    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(2.5,-1);
    glVertex2f(5.5,-4);
    glVertex2f(9,-1);
    glVertex2f(9,-4);

    glBegin(GL_QUAD_STRIP);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(3.0,-1.0);
    glVertex2f(5.5,-3.5);
    glVertex2f(9.0,-1.0);
    glVertex2f(9.0,-3.5);



    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.970f,0.83f,0.054f);
    glVertex2f(2.0,-1.5);
    glVertex2f(5.0,-4.5);
    glVertex2f(2.0,-7.5);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(2.0,-2.0);
    glVertex2f(4.5,-4.5);
    glVertex2f(2.0,-7.0);

    glEnd();

    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(2.5,-8.0);
    glVertex2f(5.5,-5.0);
    glVertex2f(9.0,-8.0);
    glVertex2f(9.0,-5.0);

    glEnd();

    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(3.0,-8.0);
    glVertex2f(5.5,-5.5);
    glVertex2f(9.0,-8.0);
    glVertex2f(9.0,-5.5);

    glEnd();





     glFlush(); // Render now
}
void reshape(int w , int h)
{

    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-15,15,-15,15);
    glMatrixMode(GL_MODELVIEW);

}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(640, 480); // Set the window's initial width & height
    glutInitWindowPosition(450, 250);  // Set the window's initial position according to the monitor
    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutReshapeFunc(reshape); //Reshape  the specific position for drawing like graph
    glutMainLoop(); // Enter the event-processing loop

    return 0;
}
