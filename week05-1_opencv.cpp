/// File-New-EmptyFile
#include <opencv/highgui.h>///�ϥ�OpenCV������GUI�~��
int main()
{///�j�gI, �p�gp1(Intel performance library)
    IplImage * img = cvLoadImage("c:/mickey-2.jpg");
    ///�j�g��Image���ɽЩ�bC:�ڥؿ���,micky.jpg
    cvShowImage("mickey-2.jpg",img);
    cvWaitKey(0);///�����N��A�~��
}
