///�жK�W10��GLUT�{��
#include <GL/glut.h>///�ϥ�GLUT�~�� 18��
#include <stdio.h>///���F printf()
void display() ///�ۤv�g
{
    glutSolidTeapot(0.3);///�ۤv�g
    glutSwapBuffers();///�ۤv�g
}
void mouse(int button,int state,int x,int y)
{///�w�qmouse�禡 button:0����, 1:����, 2:�k��
    ///printf("Hello World\n");///�J��mouse�LHello
    ///printf("%d %d %d %d\n",button,state,x,y);
    if(state==GLUT_DOWN){
        printf("glVertex2f((%d-150)/150.0,-(%d-150)/150.0);\n",x,y);
    }
}
int main(int argc, char *argv[])///�ڭ̪�main�禡 138��
{
    glutInit(&argc, argv);///��l��GLUT 140��
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///143��
    glutCreateWindow("week03 mouse");///145�� �ص���

    glutDisplayFunc(display);///148�� �]�w�n�e�Ϫ�display�禡
    glutMouseFunc(mouse);///�o�@��,�]�wmouse�禡

    glutMainLoop();///174�� �D�n�j��
}
