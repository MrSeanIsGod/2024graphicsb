#include <stdio.h>
#include "CMP3_MCI.h" //記得要用雙引號,不能用角括號
CMP3_MCI myMP3; //宣告一個變數,名字叫 myMP3
int main()
{
    myMP3.Load("filename.mp3");
    myMP3.Play();

    int a;//幫忙卡住, 程式不要快速結束
    scanf("%d",&a);
}
