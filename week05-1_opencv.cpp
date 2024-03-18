/// File-New-EmptyFile
#include <opencv/highgui.h>///使用OpenCV的高級GUI外掛
int main()
{///大寫I, 小寫p1(Intel performance library)
    IplImage * img = cvLoadImage("c:/mickey-2.jpg");
    ///大寫的Image圖檔請放在C:根目錄裡,micky.jpg
    cvShowImage("mickey-2.jpg",img);
    cvWaitKey(0);///等任意鍵再繼續
}
