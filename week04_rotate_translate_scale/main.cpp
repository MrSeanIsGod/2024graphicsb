#include <GL/glut.h>///�K�Wweek04_translate_rotate �{���X
float teapotX=0.5, teapotY=0;
float angle=0;
float s=0.3;///�@�}�l�O�쥻1�����j�p
void display() ///�ۤv�g
{
    glClearColor(1,1,0.9,1);///R,G,B,A
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(0,1,0);///3f�N�OR,G,B
    glPushMatrix();///�ƥ��x�}
        glRotatef(angle++,0,0,1);///����
        glTranslatef(teapotX,teapotY,0);///����
        glScalef(s,s,s);///�Y��s��
        glutSolidTeapot(0.3);
    glPopMatrix();///�٭�x�}
    glutSwapBuffers();///�ۤv�g
}
void motion(int x,int y)
{
    s=1+(x-150)/150.0;///�ܤj�ܤp���ܼ�0~1
    display();///���e�e����
}
int main(int argc, char *argv[])///�ڭ̪�main�禡 138��
{
    glutInit(&argc, argv);///��l��GLUT 140��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143��
    glutCreateWindow("week04 mouse glScalef");///145�� �ص���
    glutIdleFunc(display);
    glutDisplayFunc(display);///148�� �]�w�n�e�Ϫ�display�禡
    glutMotionFunc(motion);///���motion���ɭ�
    glutMainLoop();///174�� �D�n�j��
}
