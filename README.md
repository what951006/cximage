## 关于本项目
cximage是一个很好用很好用的操作图片的库，能比较好的完成剪切，拼接，旋转等操作，基于cximage 7.0.2 / visual studio 2017环境配置为静态库！！方便后续使用

## 结构说明
- CxImage 核心操作库
- jpeg png jasper libpsd等为编译可选库，可以在CxImage\ximacfg.h通过宏定义来使其编译
- test 测试工程样例代码

## 如何使用？
1. clone本项目
2. 在你的visualstudio项目中，添加现有项，并选择 Console.sln
3. 在你的项目中右键菜单，引用CXimage的库

## 期间遇到的坑
1. cximage项目因为没有声明为unicode字符集，导致编译项目链接出错,此真奇葩也!!