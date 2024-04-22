#include <GL/glut.h>///使用GLUT外掛 18行
void myBody(){
    glColor3f(1,0,0);
    glutWireCube(0.6);
}
void myArm(){
    glPushMatrix();
        glColor3f(0,1,0);
        glScalef(1.5,0.5,0.5);
        glutWireCube(0.3);
    glPopMatrix();
}
float angle=0;
void display() ///自己寫
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        myBody();
    glPopMatrix();

    glPushMatrix();///右半邊
        glTranslatef(+0.3,+0.3,0);///掛到肩上
        glRotatef(angle++,0,0,1);///轉動
        glTranslatef(0.225,0,0);///旋轉中心,放在正中心
        myArm();///右手臂
        glPushMatrix();
            glTranslatef(0.225,0,0);
            glRotatef(angle++,0,0,1);
            glTranslatef(0.255,0,0);
            myArm();///右手肘
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();///左半邊
        glTranslatef(-0.3,+0.3,0);///掛到肩上
        glRotatef(angle++,0,0,1);///轉動
        glTranslatef(-0.225,0,0);///旋轉中心,放在正中心
        myArm();///左手臂
        glPushMatrix();
            glTranslatef(-0.225,0,0);
            glRotatef(angle++,0,0,1);
            glTranslatef(-0.255,0,0);
            myArm();///左手肘
        glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();///自己寫
}

int main(int argc, char *argv[])///我們的main函式 138行
{
    glutInit(&argc, argv);///初始化GLUT 140行
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///143行
    glutCreateWindow("week09-2 glutSolid系列");///145行 建視窗
    glutDisplayFunc(display);///148行 設定要畫圖的display函式
    glutIdleFunc(display);
    glutMainLoop();///174行 主要迴圈
}
