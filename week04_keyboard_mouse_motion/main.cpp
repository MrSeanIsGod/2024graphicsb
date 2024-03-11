#include <GL/glut.h>///�ϥ�GLUT�~�� 18��
#include <stdio.h>
int N=0;
float teapotX[1000], teapotY[1000];
void display() ///�ۤv�g
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    for(int i=0;i<N;i++){
        glPushMatrix();
            glTranslatef(teapotX[i],teapotY[i],0);
            glutSolidTeapot(0.1);
        glPopMatrix();
    }
    glutSwapBuffers();///�ۤv�g
}
void keyboard(unsigned char key, int x,int y){
    printf("key:%c x:%d y:%d\n",key,x,y);
}
void mouse(int button,int state,int x,int y){
    teapotX[N]=(x-150)/150.0;
    teapotY[N]=-(y-150)/150.0;
    N++;
}
int main(int argc, char *argv[])///�ڭ̪�main�禡 138��
{
    glutInit(&argc, argv);///��l��GLUT 140��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143��
    glutCreateWindow("week04_keyboard_mouse_motion");///145�� �ص���
    glutDisplayFunc(display);///148�� �]�w�n�e�Ϫ�display�禡
    glutKeyboardFunc(keyboard);///��L�ƥ󪺨禡
    glutMouseFunc(mouse);///�ƹ��ƥ󪺨禡
    glutMainLoop();///174�� �D�n�j��
}
