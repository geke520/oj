// 这道题编译一直不通过，原因是指针初始化一定要分配地址，在线oj没有本地强大

// 有N个小朋友围成一圈玩击鼓传花游戏，将小朋友编号为1~N，
// 从1号开始传花，每次传3个，拿到花的小朋友表演节目后退出，
// 任给N，问最后一个表演的小朋友编号是多少？
// 例如：5个小朋友，从1号开始传花，第一个表演的是3号，
// 第二个表演的是1号，第三个表演的是5号，第四个表演的是2号，最后一个表演的是4号。（建议用链表实现）
#include <iostream>
#define N 100
using namespace std;
typedef struct LNode
{
    int data;
    struct LNode *next;
} LNode, *LinkList;

LinkList head = (LNode *)malloc(sizeof(LNode));
// LinkList tail=(LNode *)malloc(sizeof(LNode));
// 无头结点循环单链表尾插法---约瑟夫环
void List_TailInsert(int n)
{
    LNode *p, *q;
    //head = (LNode *)malloc(sizeof(LNode));
    q = head;
    q->data = 1;
    for (int i = 2; i <= n; i++)
    {
        p = (LNode *)malloc(sizeof(LNode));
        p->data = i;
        q->next = p;
        q = p;
    }
    p->next = head;
    // tail = p;
}
// int GetLen(LinkList L,int n)
// {
//     LNode *p = L;
//     int len = n;
//     for (int i = 0; len==0; i++)
//     {
//         len += 1;
//         cout << p->data;
//         p = p->next;
//     }
//     cout << endl;
//     cout << "len" << len << endl;
//     return len;
// }
LinkList GetElem(LinkList L, int n)
{
    LNode *p = L, *q;
    for (int i = 1; n != 0; i++)
    {
        // 用i-1是因为p为要删除元素的前一个
        if (i % 2 == 0)
        {
            q = p->next;
            p->next = q->next;
            if (n == 1)
            {
                int x = q->data;
                cout << x;
            }
            // cout << "q" << q->data<<"i"<<i << "p" << p ->data << endl;
            free(q);
            n--;
        }
        p = p->next;
    }
    return L;
}
int main()
{
    int n;
    cin >> n;
    List_TailInsert(n);
    // cout << L;
    GetElem(head, n);
    return 0;
}