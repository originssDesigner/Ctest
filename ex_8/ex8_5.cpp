//����2����������ʵ�֡�
#include<stdio.h>
#include<malloc.h>
typedef struct _stu
{   char stuno[10],name[10],gender;
    double score1,score2,score3,total;
    struct _stu *next;
} stu;
main()
{ 	int i;
    stu *head, *p2, *temp;
    head=(stu *)malloc(sizeof(stu));
    head->total=0x7fffffff;//��������Զ�ڵ�һ������ֵΪ��� 
    head->next=NULL;  
	//��һ����㲻��μ������������������ҪĿ����Ϊ�˲�����ɾ���ķ��㡣  
    for (i=1; i<=40; i++) 
	{   p2=(stu *)malloc(sizeof(stu)); //�µĽ�� 
		scanf("%s%s %c%lf%lf%lf",p2->stuno,p2->name,&p2->gender, 
                &p2->score1,&p2->score2,&p2->score3);
        p2->total = p2->score1 + p2->score2 + p2->score3;
		//���������ݼ�����ܷ֣������ܷ�ֵ���뵽�ʵ�λ�� 
		temp=head;
        while(temp->next!=NULL)
		{
            if (temp->total >= p2->total && p2->total >= temp->next->total) break;
            temp=temp->next;
        }
        //ѭ��ֱ��p2->total��ֵ��temp��ָ�����temp->next��ָ���֮�� 
        p2->next=temp->next;
        temp->next=p2;
        //���϶����ǽ��½������ʵ���λ�ã� 
        //p2=NULL; ��仰������ 
    }
    temp=head->next;
    printf("����   ѧ��        ����     �ܷ�\n" ); 
    i=1;
    while(temp!=NULL)
	{
         printf("%3d%11s%11s%6.0lf\n",i++,temp->stuno,temp->name,temp->total);
         temp=temp->next;
	}
}
