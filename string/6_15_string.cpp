#include <stdio.h>
#include <string.h>
//字符串就是一串字符——用双引号括起来的一串字符
//字符串的结束标志是一个\0的转义字符。在计算字符串长度的时候\0是结束标志，不算作字符串内容


//int main() {
//
//	"abcdef";
//	"hello word";
//
//	return 0;
//}

int main() {
	//字符数组 - 数组是一组相同类型的元素
	//字符串的结尾位置隐藏了一个\0的字符
	//\0是字符串结束的标志
	//char arr[] = "hello";
	char arr1[] = "abc";		     //arr1空间内容abc\0  这里面\0是字符串结束标志
	char arr2[] = { 'a', 'b','c'};  //arr2空间内容abc    后面内存没有\0，打印未知的内容乱码
										 //加上\0就好了
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));	//如果arr2里没添加\0则会打印随机值(字符串长度)
										 
										 
	//int len = strlen("abc");		//求字符串长度的函数strlen()
	//printf("%d\n", len);
	//打印字符串
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//return 0;
}