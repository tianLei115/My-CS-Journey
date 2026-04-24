//#include <stdio.h>
//
////常量
//int main() {
//	//整型常量
//	//整型常量有三种表示方法：十进制、十六进制、八进制
//	printf("%d %ld\n", 10, 10L);
//	printf("%d\n",010);
//	printf("%d\n",0x123);
//
//	//实型常量
//	//实型常量有两种表示方法：十进制小数形式和科学计数法
//	printf("%f\n",123.45);
//	printf("%f\n", 123e3);
//
//	//C语言中的实型常量都被作为 double处理。用float：
//	printf("%f\n", 1.23F);
//
//	//字符常量
//	//字符类型变量对应的内存中存放的是字符的ASCII码值
//	printf("%d\n",'A');
//
//	//转译序列
//	//ASCII编码的长度为 8个比特，可以编码 256个字符。
//	//但可打印字符通常只有100个左右，多余的编码通常被计算机用作控制字符。
//	printf("\a \n \r \t \0 \\ \' \" \ddd \177");
//
//	//字符串常量
//	printf("hello!I am zhangtianlei,What is your name");
//
//	//符号常量
//	#define PAI 3.14;
//
//	return 0;
//}