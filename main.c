#include <stdio.h>
#include <stdlib.h>

int test(char standard[], char ar[]);   //�ж��û���������

int main()
{

    //1.ʵ���û���¼����¼�ɹ�������һ���裬��¼ʧ������ʾ���˳�����
    //�����û���������
    char name[10] = "user"; //�ڶ����û���
    char password[20] = "123";    //�ڶ����û�����

    char user_name[10];     //���������û�������û���
    char user_password[20]; //���������û����������

    printf("�������û�����");
    gets(user_name);    //�����û�������û���


    printf("���������룺");
    gets(user_password);    //�����û����������

    //�ж��û����������Ƿ�������ȷ
    if(test(name, user_name) == 1 && test(password, user_password))
        printf("�û�����������󣬳����˳���");


    //2.ʵ��4��������Ϣ����ģ�飺��ѯ���޸ġ�ɾ�������
    printf("\n����ѡ��\n");
    printf("1.��ѯ\t2.�޸�\t3.ɾ��\t4.���");
    printf("\n��ѡ����Ҫʹ�õĹ��ܣ�");

    return 0;
}

int test(char standard[], char ar[]){
    int i;

    while(ar[i] != 0){
        if(ar[i] != standard[i])    //�ж��û�����ͱ�׼�Ƿ�ƥ��
            return 1;   //��ƥ���򷵻ش���1
        i++;
    }

    return 0;
}
