#include <GL/glut.h>///�ϥ�GLUT�~�� 18��

void display() ///�ۤv�g
{
    glBegin(GL_POLYGON);
        glColor3f(1,0,0); glVertex2f(0,1);
        glColor3f(0,1,0); glVertex2f(1,-0.6);
        glColor3f(0,0,1); glVertex2f(-1,-0.6);
    glEnd();
    glutSwapBuffers();///�ۤv�g
}

int main(int argc, char *argv[])///�ڭ̪�main�禡 138��
{
    glutInit(&argc, argv);///��l��GLUT 140��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143��
    glutCreateWindow("week02_glut_color_teapot");///145�� �ص���
    glutDisplayFunc(display);///148�� �]�w�n�e�Ϫ�display�禡
    glutMainLoop();///174�� �D�n�j��
}
