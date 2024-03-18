
///貼上10行加上今天三行
#include <GL/glut.h>///使用GLUT外掛 18行
#include <opencv/highgui.h>
void display() ///自己寫
{
    glutSolidTeapot(0.3);///自己寫
    glutSwapBuffers();///自己寫
}

int main(int argc, char *argv[])///我們的main函式 138行
{
    IplImage * img = cvLoadImage("c:/mickey-2.jpg");
    cvShowImage("mickey-2.jpg",img);
    glutInit(&argc, argv);///初始化GLUT 140行
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143行
    glutCreateWindow("week05-1_texture_opencv");///145行 建視窗
    glutDisplayFunc(display);///148行 設定要畫圖的display函式
    glutMainLoop();///174行 主要迴圈
}
