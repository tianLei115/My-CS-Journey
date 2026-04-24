//#include <stdio.h>
//
////赋值嵌套
//int main() {
//	int n1, n2, n3;
//	n1 = n2 = n3 = 0;
//	printf("n1 = %d, n2 = %d, n3 = %d\n", n1, n2, n3);
//
//	//多重赋值语句,需保证参与运算的变量类型相同
//	n1 = (n2 = (n3 = 0));//等号的优先级低于+
//	printf("n1 = %d, n2 = %d, n3 = %d\n", n1, n2, n3);
//	return 0;
//}