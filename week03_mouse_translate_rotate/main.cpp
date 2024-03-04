#include <GL/glut.h>///�ϥ�GLUT�~�� 18��
#include <stdio.h>///���F printf()
float teapotX=0,teapotY=0;///�s�[���{���A�Ψө�������y��
float angle=0;
void display() ///�ۤv�g
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///�M�I��
    glPushMatrix();///�ƥ��x�}
        glTranslatef(teapotX,teapotY,0);///��y�в���
        glRotatef(angle,0,0,1);
        glutSolidTeapot(0.3);
    glPopMatrix();///�٭�x�}
    glutSwapBuffers();///�ۤv�g
}
int method = 1;
int oldX=0,oldY=0;
void mouse(int button,int state,int x,int y)
{///�ڭ̳o�̡A�n�������ץ�
    oldX=x;
    oldY=y;
}
void motion(int x,int y)
{
    if(method==1){
        angle+=x-oldX;
    }else if(method==2){
        teapotX += (x-oldX)/150.0;
        teapotY -= (y-oldY)/150.0;
    }
    oldX=x;
    oldY=y;
    display();
}
void keyboard(unsigned char key,int x,int y)
{
    if(key=='e') method=1;///����Rotate
    if(key=='w') method=2;///����Translate
}
int main(int argc, char *argv[])///�ڭ̪�main�禡 138��
{
    glutInit(&argc, argv);///��l��GLUT 140��
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///143��
    glutCreateWindow("week03 mouse glTranslatef");///145�� �ص���

    glutDisplayFunc(display);///148�� �]�w�n�e�Ϫ�display�禡
    glutMouseFunc(mouse);///�o�@��,�]�wmouse�禡
    glutMotionFunc(motion);
    glutKeyboardFunc(keyboard);
    glutMainLoop();///174�� �D�n�j��
}
