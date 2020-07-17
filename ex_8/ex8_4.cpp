/*���ж���struct node
 {  int no;
   struct node *next;
};
1������һ����������������10����㣬����е�noֵ��1��10˳�������2����ɾ��һ����㡣3���ܲ���һ����㡣
*/
#include<stdio.h>
#include<malloc.h>
struct node
{	int no;
	struct node* next;
};
struct node* create(int n)  //nΪ�����Ľ����
{	int i;
	struct node *h=NULL,*last,*p; 
//���½�������ķ�ʽ�������������ͬ���������һ�����Ҳ����ѭ����ʵ�ֵġ�
	for(i=1;i<=n;i++)   
	{
		p=(struct node*)malloc(sizeof(struct node));
		p->no=i;p->next=0;
		if(h==NULL)  //����ǽ�����һ�����
			h=p;
		else          //��������Ĳ��ǵ�һ�����
			last->next=p;
		last=p;
	}
	return h;
}
struct node* del(struct node *h,int x)
{	struct node *p1=h,*p2;
	if(h->no==x)  //�����ɾ��ͷ���
		h=h->next;
	else
	{
		while(p1->no!=x&&p1->next!=NULL)
		{
			p2=p1;
			p1=p1->next;
		}
		if(p1->next!=NULL||p1->no==x)  
//���p1�������һ����㣬�������һ�������Ҫɾ���Ľ��
			p2->next=p1->next;
		       //��������ֵ�Ҳ���ʱ������ɾ��
	}
	return h;
}
struct node * ins(struct node *h,int x)
{
	struct node *p,*p1=h,*p2;
	p=(struct node*)malloc(sizeof(struct node));
	p->no=x;
	if(h->no>x)     //����ǲ���ͷ���ǰ
	{
		p->next=h;
	    h=p;
	}
	else
	{
		while(p1->no<x&&p1->next!=NULL)
		{
			p2=p1;
			p1=p1->next;
		}
		if(p1->no>x)  //������ǲ������һ�����֮��
			p2->next=p,p->next=p1;
		else          
			p1->next=p,p->next=NULL;
	}
	return h;
}
void printlink(struct node* h)
{
	struct node *p=h;
	while(p!=NULL)
	{
		printf("%5d",p->no);
		p=p->next;
	}
	putchar('\n');
}
main()
{
	struct node *h;
	h=create(10);
	printlink(h);
	int i;
	h=del(h,1);  //ɾ��ͷ���
	printlink(h);
    h=del(h,10); //ɾ�����һ�����
	printlink(h);
	h=del(h,5);  //ɾ������ĳ�����
	printlink(h); 
    h=del(h,11);  //ɾ�������ڵĽ��
	printlink(h);
    h=ins(h,1);   //����ͷ���
	printlink(h);
	h=ins(h,10);  //���뵽���
	printlink(h);
	h=ins(h,5);
	printlink(h);//�������м�ĳһλ��
}


