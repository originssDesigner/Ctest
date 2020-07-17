/*如有定义struct node
 {  int no;
   struct node *next;
};
1）建立一个单向链表，链表共有10个结点，结点中的no值从1到10顺序给出。2）能删除一个结点。3）能插入一个结点。
*/
#include<stdio.h>
#include<malloc.h>
struct node
{	int no;
	struct node* next;
};
struct node* create(int n)  //n为建立的结点数
{	int i;
	struct node *h=NULL,*last,*p; 
//以下建立链表的方式与课堂上有所不同，在这里第一个结节也是在循环中实现的。
	for(i=1;i<=n;i++)   
	{
		p=(struct node*)malloc(sizeof(struct node));
		p->no=i;p->next=0;
		if(h==NULL)  //如果是建立第一个结点
			h=p;
		else          //如果建立的不是第一个结点
			last->next=p;
		last=p;
	}
	return h;
}
struct node* del(struct node *h,int x)
{	struct node *p1=h,*p2;
	if(h->no==x)  //如果是删除头结点
		h=h->next;
	else
	{
		while(p1->no!=x&&p1->next!=NULL)
		{
			p2=p1;
			p1=p1->next;
		}
		if(p1->next!=NULL||p1->no==x)  
//如果p1不是最后一个结点，或者最后一个结点是要删除的结点
			p2->next=p1->next;
		       //当这个结点值找不到时，不用删除
	}
	return h;
}
struct node * ins(struct node *h,int x)
{
	struct node *p,*p1=h,*p2;
	p=(struct node*)malloc(sizeof(struct node));
	p->no=x;
	if(h->no>x)     //如果是插在头结点前
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
		if(p1->no>x)  //如果不是插在最后一个结点之后
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
	h=del(h,1);  //删除头结点
	printlink(h);
    h=del(h,10); //删除最后一个结点
	printlink(h);
	h=del(h,5);  //删除中问某个结点
	printlink(h); 
    h=del(h,11);  //删除不存在的结点
	printlink(h);
    h=ins(h,1);   //插入头结点
	printlink(h);
	h=ins(h,10);  //插入到最后
	printlink(h);
	h=ins(h,5);
	printlink(h);//插入在中间某一位置
}


