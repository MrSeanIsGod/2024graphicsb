
///�K�W10��[�W���ѤT��
#include <GL/glut.h>///�ϥ�GLUT�~�� 18��
#include <opencv/highgui.h>
void display() ///�ۤv�g
{
    glutSolidTeapot(0.3);///�ۤv�g
    glutSwapBuffers();///�ۤv�g
}

int main(int argc, char *argv[])///�ڭ̪�main�禡 138��
{
    IplImage * img = cvLoadImage("c:/mickey-2.jpg");
    cvShowImage("mickey-2.jpg",img);
    glutInit(&argc, argv);///��l��GLUT 140��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143��
    glutCreateWindow("week05-1_texture_opencv");///145�� �ص���
    glutDisplayFunc(display);///148�� �]�w�n�e�Ϫ�display�禡
    glutMainLoop();///174�� �D�n�j��
}
