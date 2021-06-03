// 给定两个元素有序（从小到大）的链表，要求将两个链表合并成一个有序（从小到大）链表
// 第一行输入第一个链表的结点数S1，S1<=100。
// 第二行输入S1个整数，两两之间用空格隔开。
// 第三行输入第二个链表的结点数S2，S2<=100。
// 第四行输入S2个整数，两两之间用空格隔开。
// 输出合并之后的链表结果，两两之间用空格隔开，末尾没有空格。
#include<bits/stdc++.h>
using namespace std;
#define N 100

typedef struct Node {
    int data; // 节点中的元素为整数类型
    struct Node * next; // 指向下一个节点
} LNode, *LinkList;
// 单链表尾插法
LinkList List_TailInsert(LinkList &L,int arr[],int n)
{
    LNode *s,*r;
    r=L;
    for (int i = 0; i < n;i++)
    {
        s = (LNode *)malloc(sizeof(LNode));
        s->data = arr[i];
        r->next = s;
        r = s;
    }
	r->next = NULL;
    return L;
}

int main(){
    int n1=0,n2=0,a1[N]={0},a2[N]={0};
    cin >> n1;
    for (int i = 0; i < n1;i++)
    {
        cin >> a1[i];
    }
	LinkList L1,L2;
    L1 = (LinkList)malloc(sizeof(LNode));
    L1 = List_TailInsert(L1,a1,n1);
    cin >> n2;
    for (int j = 0; j < n2;j++)
    {
        cin >> a2[j];
    }
    L2 = (LinkList)malloc(sizeof(LNode));
	L2 = List_TailInsert(L2,a2,n2);
	
	LNode *p = L1->next;
	LNode *q = L2->next;
	while(q!=NULL){
		// cout << "q:" << q->data << "p:" << p->data << endl;
		if (q->data > p->data)
		{
			if(p->next == NULL)
			{
				LNode *s;
				s = (LNode*)malloc(sizeof(LNode));
				s->data = q->data;
				s->next = NULL;
				p->next = s;
				q = q->next;
			}
			else{
				p = p->next;
			}
		}
		else{
			LNode *s;
			s = (LNode*)malloc(sizeof(LNode));
			s->next = p->next;
	    	p->next = s;
			s->data = p->data;
			p->data = q->data;
			p = s;
			q = q->next;
		}		
	}
	LNode *z = L1->next;
	while(z !=NULL){
		if(z->next == NULL){
			cout << z->data;
			break;
		}
		else{
			cout << z->data<<" ";
			z = z->next;
		}	
	}
	return 0;	
}