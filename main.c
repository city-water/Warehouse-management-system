#include <stdio.h>
#include <stdlib.h>

int test(char standard[], char ar[]);   //判断用户名和密码

int main()
{

    //1.实现用户登录；登录成功进入下一步骤，登录失败则提示并退出程序。
    //定义用户名和密码
    char name[10] = "user"; //内定的用户名
    char password[20] = "123";    //内定的用户密码

    char user_name[10];     //用来接收用户输入的用户名
    char user_password[20]; //用来接收用户输入的密码

    printf("请输入用户名：");
    gets(user_name);    //接收用户输入的用户名


    printf("请输入密码：");
    gets(user_password);    //接收用户输入的密码

    //判断用户名和密码是否输入正确
    if(test(name, user_name) == 1 && test(password, user_password))
        printf("用户名或密码错误，程序退出！");


    //2.实现4个基本信息管理模块：查询、修改、删除、添加
    printf("\n功能选择：\n");
    printf("1.查询\t2.修改\t3.删除\t4.添加");
    printf("\n请选择需要使用的功能：");

    return 0;
}

int test(char standard[], char ar[]){
    int i;

    while(ar[i] != 0){
        if(ar[i] != standard[i])    //判断用户输入和标准是否匹配
            return 1;   //不匹配则返回错误1
        i++;
    }

    return 0;
}
