//将第2题用链表来实现。
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
    head->total=0x7fffffff;//这个结点永远在第一，所以值为最大 
    head->next=NULL;  
	//第一个结点不会参加排名，设这个结点的主要目的是为了插入与删除的方便。  
    for (i=1; i<=40; i++) 
	{   p2=(stu *)malloc(sizeof(stu)); //新的结点 
		scanf("%s%s %c%lf%lf%lf",p2->stuno,p2->name,&p2->gender, 
                &p2->score1,&p2->score2,&p2->score3);
        p2->total = p2->score1 + p2->score2 + p2->score3;
		//输入完数据计算出总分，根据总分值插入到适当位置 
		temp=head;
        while(temp->next!=NULL)
		{
            if (temp->total >= p2->total && p2->total >= temp->next->total) break;
            temp=temp->next;
        }
        //循环直至p2->total的值在temp所指结点与temp->next所指结点之间 
        p2->next=temp->next;
        temp->next=p2;
        //以上二句是将新结点插入适当的位置， 
        //p2=NULL; 这句话有用吗？ 
    }
    temp=head->next;
    printf("排名   学号        姓名     总分\n" ); 
    i=1;
    while(temp!=NULL)
	{
         printf("%3d%11s%11s%6.0lf\n",i++,temp->stuno,temp->name,temp->total);
         temp=temp->next;
	}
}
