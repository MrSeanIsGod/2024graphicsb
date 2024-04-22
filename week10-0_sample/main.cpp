#include <GL/glut.h>///使用GLUT外掛 18行

void display() ///自己寫
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glTranslatef(-0.6,+0.3,0);
        glutSolidTeapot(0.3);///自己寫
    glPopMatrix();
    glPushMatrix();
        glTranslatef(+0.0,+0.3,0);
        glutSolidCube(0.3);///自己寫
    glPopMatrix();
    glPushMatrix();
        glTranslatef(+0.6,+0.3,0);
        glutSolidSphere(0.3,30,30);///自己寫
    glPopMatrix();
    glutSwapBuffers();///自己寫
}

int main(int argc, char *argv[])///我們的main函式 138行
{
    glutInit(&argc, argv);///初始化GLUT 140行
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///143行
    glutCreateWindow("week09-2 glutSolid系列");///145行 建視窗
    glutDisplayFunc(display);///148行 設定要畫圖的display函式
    glutMainLoop();///174行 主要迴圈
}
