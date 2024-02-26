#include <GL/glut.h>///使用GLUT外掛 18行

void display() ///自己寫
{
    glColor3f(247/255.0, 180/255.0, 171/255.0);
    glutSolidTeapot(0.3);///自己寫
    glColor3f(251/255.0, 233/255.0, 219/255.0);
    glutSolidTeapot(0.2);///自己寫
    glutSwapBuffers();///自己寫
}

int main(int argc, char *argv[])///我們的main函式 138行
{
    glutInit(&argc, argv);///初始化GLUT 140行
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143行
    glutCreateWindow("week02_glut_color_teapot");///145行 建視窗
    glutDisplayFunc(display);///148行 設定要畫圖的display函式
    glutMainLoop();///174行 主要迴圈
}
