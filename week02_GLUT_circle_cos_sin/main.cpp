#include <GL/glut.h>///�ϥ�GLUT�~�� 18��
#include <math.h>
void myCircle(float cx, float cy, float r){
    glBegin(GL_POLYGON);
    for(float a=0;a<=3.14*2;a+=0.1){
        glVertex2f(r*cos(a)+cx,r*sin(a)+cy);
    }
    glEnd();
}
void display() ///�ۤv�g
{
    glColor3f(1,1,1);myCircle(0,0,1);
    glColor3f(0,0,0);myCircle(-0.5,+0.5,0.3);
    glColor3f(0,0,0);myCircle(+0.5,+0.5,0.3);
    glColor3f(0,0,0);myCircle(0,-0.3,0.7);
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
