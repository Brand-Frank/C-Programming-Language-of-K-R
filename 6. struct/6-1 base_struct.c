#include<stdio.h>
#include<math.h>

/*	坐标结构体	*/
struct point
{
	int x;
	int y;
};

/*	矩形结构体	*/
struct rect {
	struct point pt1;
	struct point pt2;
};

int main() {
	//声明
	struct point point1;		// = struct point1;
	
	//定义：初始化 - 结构体成员赋值
	struct point point2 = { 30,40 };	//声明时初始化
	point1.x = 3;
	point1.y = 4;
	printf("point1.x = %d\npoint1.y = %d\n", point1.x, point1.y);

	//*********************
	struct point pt = { 30,40 };
	double dist, sqrt(double);
	dist = sqrt((double)pt.x * pt.x + (double)pt.y * pt.y);
	printf("pt.x = %d\npt.y = %d\ndist = %f\n", pt.x, pt.y, dist);

	//**********矩形*************
	struct rect rectange = { {0,0},{40,30} };
	printf("rectange.pt1.x = %d\nrectange.pt2.y = %d\n", rectange.pt1.x, rectange.pt2.y);


}