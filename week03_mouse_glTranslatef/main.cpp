///�жK�W10��GLUT�{��
#include <GL/glut.h>///�ϥ�GLUT�~�� 18��
#include <stdio.h>///���F printf()
float teapotX=0,teapotY=0;///�s�[���{���A�Ψө�������y��
void display() ///�ۤv�g
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///�M�I��
    glPushMatrix();///�ƥ��x�}
        glTranslatef(teapotX,teapotY,0);///��y�в���
        glutSolidTeapot(0.3);
    glPopMatrix();///�٭�x�}
    glutSwapBuffers();///�ۤv�g
}
void mouse(int button,int state,int x,int y)
{///�ڭ̳o�̡A�n�������ץ�
    teapotX=(x-150)/150.0;
    teapotY=-(y-150)/150.0;
}
int main(int argc, char *argv[])///�ڭ̪�main�禡 138��
{
    glutInit(&argc, argv);///��l��GLUT 140��
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///143��
    glutCreateWindow("week03 mouse glTranslatef");///145�� �ص���

    glutDisplayFunc(display);///148�� �]�w�n�e�Ϫ�display�禡
    glutMouseFunc(mouse);///�o�@��,�]�wmouse�禡

    glutMainLoop();///174�� �D�n�j��
}
