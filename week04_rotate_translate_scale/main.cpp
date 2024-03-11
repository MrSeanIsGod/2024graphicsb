#include <GL/glut.h>///貼上week04_translate_rotate 程式碼
float teapotX=0.5, teapotY=0;
float angle=0;
float s=0.3;///一開始是原本1倍的大小
void display() ///自己寫
{
    glClearColor(1,1,0.9,1);///R,G,B,A
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(0,1,0);///3f就是R,G,B
    glPushMatrix();///備份矩陣
        glRotatef(angle++,0,0,1);///旋轉
        glTranslatef(teapotX,teapotY,0);///移動
        glScalef(s,s,s);///縮放s倍
        glutSolidTeapot(0.3);
    glPopMatrix();///還原矩陣
    glutSwapBuffers();///自己寫
}
void motion(int x,int y)
{
    s=1+(x-150)/150.0;///變大變小的變數0~1
    display();///重畫畫面喔
}
int main(int argc, char *argv[])///我們的main函式 138行
{
    glutInit(&argc, argv);///初始化GLUT 140行
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143行
    glutCreateWindow("week04 mouse glScalef");///145行 建視窗
    glutIdleFunc(display);
    glutDisplayFunc(display);///148行 設定要畫圖的display函式
    glutMotionFunc(motion);///拖動motion的時候
    glutMainLoop();///174行 主要迴圈
}
