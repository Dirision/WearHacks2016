#include <GL/glut.h>

//Drawing funciton
void draw(void)
{
  //Background color
  glClearColor(245,245,245,1);
  glClear(GL_COLOR_BUFFER_BIT );
  //Draw order
  glFlush();
}

//Main program
int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  //Simple buffer
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );
  glutInitWindowPosition(50,25);
  glutInitWindowSize(1920,1080);
  glutCreateWindow("Thermal window");
  //Call to the drawing function
  glutDisplayFunc(draw);
  glutMainLoop();
  return 0;
}
