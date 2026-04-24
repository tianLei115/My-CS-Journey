//#include <stdio.h>
//
////格式化输出
////printf(格式控制字符串，输出列表);
//int main() {
//	//控制字符串 %d %o %x %f %e
//	printf("long int 占%d个字节\nint 占%d个字节\nshort int 占%d个字节\n",sizeof(long int),sizeof(int),sizeof(short int));
//
//	int iint = 12380;
//	double ddouble = 123.1234567891;
//	//分别用d、o、x、输出 十进制 八进制 十六进制
//	printf("12380的十进制为 %d\n12380的八进制为 %o\n12380的十六进制为 %x",iint,iint,iint);
//
//	//十进制小数和科学计数法的输出
//	printf("十进制小数 %f\n科学计数法 %e",ddouble,ddouble);
//
//	printf("\n");
//	printf("\n");
//	//附加控制字符 %l %m %.n %-
//	printf("123.4567891的十进制为 %10f\n123.4567891的科学计数法为%7e\n",ddouble,ddouble);
//
//	//右对齐 和 左对齐
//	printf("12380的十进制右对齐表示%10d\n12380的十进制左对齐表示%-10d", iint, iint);
//
//
//	return 0;
//}