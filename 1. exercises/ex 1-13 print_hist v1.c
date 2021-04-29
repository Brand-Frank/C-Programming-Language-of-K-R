/*	打印输入单词的长度的直方图 - 水平方向	*/

#include<stdio.h>
#define MAXHIST 15
#define MAXWORD 11
#define IN 1
#define OUT 0

int main() {
	int c;	/*	receive input from keyboard	*/
	int i, nc, state;
	int len;			/*	length of each bar		*/
	int maxvalue;		/*	maxium value for wl[]	*/
	int overflow;		/*	number of overflow words*/
	int wl[MAXWORD];	/*	word length counters	*/

	state = OUT;
	nc = 0;				/*	number of chars in a word	*/
	overflow = 0;		/*	number of words >= MAXWORD	*/

	for (i = 0; i < MAXWORD; ++i)
		wl[i] = 0;

	/*	nc 每个单词的字符个数计数，将长度为 nc 的单词个数保留到 wl[nc] 中	*/
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if (nc > 0)
				if (nc < MAXWORD)
					++wl[nc];		/*	长度为 nc 的单词个数累加	*/
				else
					++overflow;		/*	处理超出 MAXWORD=10 部分的单词,且不计入数组中	*/
			nc = 0;		/*	在单词外边	*/
		}
		else if (state == OUT) {	/*	每个单词的第一个字母	*/
			state = IN;
			nc = 1;		/*	beginning of a new words	*/
		}
		else if (c == 'q')		/*	# replace EOF #	q to quit	*/
			break;
		else
			++nc;		/*	inside a word	*/
	}

	/*	找出直方图中的最大值:长度为nc的单词的个数(频次)	*/
	maxvalue = 0;
	for (i = 1; i < MAXWORD; ++i) {
		if (wl[i] > maxvalue)
			maxvalue = wl[i];
	}

	/*	处理水平直方图的显示问题	*/
	for (i = 1; i < MAXWORD; ++i) {
		printf("%4d - %2d : ", i, wl[i]);	/*	单词长度 nc=0~10 - 出现次数wl[i]	*/
		if (wl[i] > 0) {
			if ((len = wl[i] * MAXHIST / maxvalue) <= 0)
				len = 1;
		}
		else
			len = 0;		/*	长度为i的单词出现次数为0，则不打印	*/

		/*len = wl[i];*/	//将上边的if..else注释后，可使出现次数按照原数打印，而不会被削减
		while (len > 0) {
			putchar('#');
			--len;
		}
		putchar('\n');
	}
	if (overflow > 0)
		printf("There are %d words >= %d\n", overflow, MAXWORD);//don't deal with overflow(11)

	return 0;
}