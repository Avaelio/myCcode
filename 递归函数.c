
//һ���򵥵ĵݹ麯��Ӧ��
#include<stdio.h>

int value(int n){//int value(int n)
	int age =10;
    if(n==1)
    {
        age=10;
    }
    else
    {
       int age=value(n-1)+2;
        return age;
    }
    return age;
    
}

int main() 
{
    //int ages =value(5);
	//ֱ����printf��д��Ҳ��֧�ֵ�
	printf("������˵�������%d\n",value(5)); 
	return 0;
}