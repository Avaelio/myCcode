
//一个简单的递归函数应用
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
	//直接在printf里写函也是支持的
	printf("第五个人的年龄是%d\n",value(5)); 
	return 0;
}