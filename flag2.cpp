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
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(-1.0,1.0);
    glVertex2f(-14.0,1.0);
    glVertex2f(-14.0,13.0);
    glVertex2f(-1.0,13.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(-7.5,7.5);
    glVertex2f(-14,13);
    glVertex2f(-14,1);
    glEnd();
    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-9.0,6.0);
    glVertex2f(-11,4);
    glVertex2f(-1,6.0);
    glVertex2f(-1.0,4);
    glEnd();

    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-9.0,8.70);
    glVertex2f(-11.10,10.5);
    glVertex2f(-1,8.70);
    glVertex2f(-1.0,10.5);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-11.0,8.5);
    glVertex2f(-12,8.5);
    glVertex2f(-12.25,7.5);
    glVertex2f(-11.5,6.85);
    glVertex2f(-10.75, 7.5);

    glEnd();


    glBegin(GL_TRIANGLES);//top
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-12.0,8.5);
    glVertex2f(-11.0,8.5);
    glVertex2f(-11.5,10.0);

    glEnd();

    glBegin(GL_TRIANGLES);//top left
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-12.0,8.5);
    glVertex2f(-13.25,8.5);
    glVertex2f(-12.25,7.5);
    glEnd();


    glBegin(GL_TRIANGLES);//bottom right
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-10.75,7.5);
    glVertex2f(-11.5,6.85);
    glVertex2f(-10.5,5.80);
    glEnd();

    glBegin(GL_TRIANGLES);//bottom left
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-12.25,7.5);
    glVertex2f(-12.5,5.80);
    glVertex2f(-11.5,6.85);
    glEnd();

    glBegin(GL_TRIANGLES);//top right
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-11.0,8.5);
    glVertex2f(-10.75,7.5);
    glVertex2f(-9.75,8.5);

    glEnd();

//------------------------------------------------------------------------------------------------------------------------------------------------------------//


    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(1.0,2.50);
    glVertex2f(14.0,2.50);
    glVertex2f(14.0,11.0);
    glVertex2f(1.0,11.0);
    glEnd();

    glLineWidth(5);


    glBegin(GL_QUAD_STRIP);
    glColor3f(0.90f,0.0f,0.0f);
    glVertex2f(14.0,5.50);
    glVertex2f(14,2.5);
    glVertex2f(1,5.50);
    glVertex2f(1.0,2.5);
    glEnd();

    glBegin(GL_QUAD_STRIP);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(14.0,8.0);
    glVertex2f(14,11);
    glVertex2f(1,8.0);
    glVertex2f(1.0,11);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(8.0,7.50);
    glVertex2f(9.25,7.50);

    glVertex2f(7.5,9);
    glVertex2f(8,7.50);

    glVertex2f(5.75,7.5);
    glVertex2f(7.0,7.5);

    glVertex2f(6.75,6.5);
    glVertex2f(6.5,4.80);

    glVertex2f(7.5,5.85);
    glVertex2f(6.5,4.80);

    glVertex2f(8.5,4.80);
    glVertex2f(7.5,5.85);

    glVertex2f(8.25,6.5);
    glVertex2f(8.5,4.80);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(7.0,7.5);
    glVertex2f(8,7.5);
    glVertex2f(8.25,6.5);
    glVertex2f(7.5,5.85);
    glVertex2f(6.75, 6.5);

    glEnd();


    glBegin(GL_TRIANGLES);//top
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(8.0,7.5);
    glVertex2f(7.0,7.5);
    glVertex2f(7.5,9.0);

    glEnd();

    glBegin(GL_TRIANGLES);//top left
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(8.0,7.5);
    glVertex2f(9.25,7.5);
    glVertex2f(8.25,6.5);
    glEnd();


    glBegin(GL_TRIANGLES);//bottom right
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(6.75,6.5);
    glVertex2f(7.5,5.85);
    glVertex2f(6.5,4.80);
    glEnd();

    glBegin(GL_TRIANGLES);//bottom left
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(8.25,6.5);
    glVertex2f(8.5,4.80);
    glVertex2f(7.5,5.85);
    glEnd();

    glBegin(GL_TRIANGLES);//top right
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(7.0,7.5);
    glVertex2f(6.75,6.5);
    glVertex2f(5.75,7.5);

    glEnd();

//--------------------------------------------------------------------------------------------------//

    glBegin(GL_QUADS);//3rd flag
    glColor3f(0.0f,0.40f,1.0f);
    glVertex2f(-1.0,-1.0);
    glVertex2f(-14.0,-1.0);
    glVertex2f(-14.0,-13.0);
    glVertex2f(-1.0,-13.0);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(-1,-1.0);
    glVertex2f(-14.0,-11.0);
    glVertex2f(-14,-13.0);
    glVertex2f(-1.0,-3.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.970f,0.83f,0.054f);
    glVertex2f(-2,-1.0);
    glVertex2f(-14.0,-10.0);
    glVertex2f(-14,-11.0);
    glVertex2f(-1.0,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.970f,0.83f,0.054f);
    glVertex2f(-1,-3.0);
    glVertex2f(-14.0,-13.0);
    glVertex2f(-13,-13.0);
    glVertex2f(-1.0,-4.0);
    glEnd();

    glBegin(GL_POLYGON);//flag polygon
    glColor3f(0.970f,0.83f,0.054f);
    glVertex2f(-11.0,-5.5);
    glVertex2f(-12,-5.5);
    glVertex2f(-12.25,-4.5);
    glVertex2f(-11.5,-3.85);
    glVertex2f(-10.75, -4.5);

    glEnd();

    glBegin(GL_TRIANGLES);//top
    glColor3f(0.970f,0.83f,0.054f);
    glVertex2f(-12.0,-5.5);
    glVertex2f(-11.0,-5.5);
    glVertex2f(-11.5,-7.0);

    glEnd();

    glBegin(GL_TRIANGLES);//top left
    glColor3f(0.970f,0.83f,0.054f);
    glVertex2f(-12.0,-5.5);
    glVertex2f(-13.25,-5.5);
    glVertex2f(-12.25,-4.5);
    glEnd();


    glBegin(GL_TRIANGLES);//bottom right
    glColor3f(0.970f,0.83f,0.054f);
    glVertex2f(-10.75,-4.5);
    glVertex2f(-11.5,-3.85);
    glVertex2f(-10.5,-2.80);
    glEnd();

    glBegin(GL_TRIANGLES);//bottom left
    glColor3f(0.970f,0.83f,0.054f);
    glVertex2f(-12.25,-4.5);
    glVertex2f(-12.5,-2.80);
    glVertex2f(-11.5,-3.85);
    glEnd();

    glBegin(GL_TRIANGLES);//top right
    glColor3f(0.970f,0.83f,0.054f);
    glVertex2f(-11.0,-5.5);
    glVertex2f(-10.75,-4.5);
    glVertex2f(-9.75,-5.5);

    glEnd();




//--------------------------------------------------------------------------------------------------------//
    glBegin(GL_QUADS);//4th flag
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(1.0,-2.0);
    glVertex2f(14.0,-2.0);
    glVertex2f(14.0,-13.0);
    glVertex2f(1.0,-13.0);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f,0.37f,0.0f);
    glVertex2f(7.5,-5);
    glVertex2f(6,-10);
    glVertex2f(9.75,-7);
    glVertex2f(5.25,-7);
    glVertex2f(9,-10);
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
