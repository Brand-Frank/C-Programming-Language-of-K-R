#include<stdio.h>
#include<math.h>

#define XMAX 100
#define YMAX 120

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

/*	为点结构体赋值	*/
struct point makepoint(int x, int y);

/*	将两个点相加	*/
struct point addpoint(struct point p1, struct point p2);

int main() {
	struct rect rectange = { {0,0},{40,30} };
	struct point middle;

	rectange.pt1 = makepoint(0, 0);
	rectange.pt2 = makepoint(XMAX, YMAX);

	middle = makepoint(addpoint(rectange.pt1,rectange.pt2).x / 2, (rectange.pt1.y + rectange.pt2.y) / 2);
	printf("pt1(%d,%d)\npt2(%d,%d)\n", rectange.pt1.x, rectange.pt1.y, rectange.pt2.x, rectange.pt2.y);
	printf("middle = (%d, %d)\n", middle.x, middle.y);


}


struct point makepoint(int x, int y) {
	struct point temp;

	temp.x = x;
	temp.y = y;
	return temp;
}

struct point addpoint(struct point p1, struct point p2) {
	p1.x += p2.x;
	p1.y += p2.y;
	return p1;
}

