#include <stdio.h>
#include <stdlib.h>

int main(){
	char ch;
	system("dir D:\\");//dir指的是打开文件夹目录  
	system("D:\\学习资源\\Clanguage\\实验课\\实验7\\C7_3_10.exe");//打开指定C程序并运行
	scanf("%c",&ch);
	printf("%c",ch);
	if(ch=='x')
	system("cls"); 
	return 0;
} 
