#include <GL/glut.h>///使用GLUT外掛 18行
void display() ///自己寫
{
    glBegin(GL_POLYGON);
        glColor3f(1,1,1);
        glVertex2f((30-200)/200.0,-(45-200)/200.0);
        glVertex2f((46-200)/200.0,-(102-200)/200.0);
        glVertex2f((84-200)/200.0,-(23-200)/200.0);
    glEnd();
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
