// cximage_test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <windows.h>
#include <tchar.h>

#include "cximage/CxImage/ximage.h"



#include <iostream>
int main()
{
    /*  std::cout << "Hello World!\n";
      CxImage image(100, 100,  32, 0);
      image.Create(100, 100, 32, 0);
      image.Destroy();*/
    
    CxImage image;
    bool bLoad = image.Load(_T("F:\\bumper.png"), CXIMAGE_FORMAT_PNG);
    if (bLoad) {
        CxImage thumbImg;
        RECT re;
        re.left = 0;
        re.right = image.GetWidth() / 2;
        re.top = 0;
        re.bottom = image.GetHeight() / 2;
        image.Crop(re, &thumbImg);
        thumbImg.Save(_T("F:\\out2.png"), CXIMAGE_FORMAT_PNG);

    }
}