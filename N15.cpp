// 单链表由小到大排序
#include<iostream>
#include<string>
#define N 5
using namespace std;
typedef struct Node {
    int Element; // 节点中的元素为整数类型
    struct Node * Next; // 指向下一个节点
} LNode, *LinkList;
template <class T2>
int getArrayLen(T2 &array) /*使用模板定义一个函数getArrayLen,该函数将返回数组array的长度*/
{
    return (sizeof(array) / sizeof(array[0]));
}
// 单链表尾插法
LinkList List_TailInsert(LinkList &L,int arr[])
{
    LNode *s,*r;
    r=L;
    for (int i = 0; i < N;i++)
    {
        s = (LNode *)malloc(sizeof(LNode));
        s->Element = arr[i];
        // cout << s->Element << endl;
        r->Next = s;
        s->Next = NULL;
        r = s;
    }
    return L;
}
LNode *GetElem(LinkList L)
{
    LNode *p = L->Next;
    for (int i = 0; p!=NULL ;i++)
    {
        cout << p->Element<<" ";
        p = p->Next;
    }
    return p;
}
// 冒泡排序先小后大
void Bubblesort(int A[],int n)
{
    int i = 0, j = 0;

    for (i = 0; i < n-1;i++)
    {
        bool flag=false;
        for(j=n-1;j>i;j--)
        {
            if(A[j-1]>A[j])
            {
                swap(A[j - 1], A[j]);
                flag = true;
            }
        }
        if(flag==false)
            return;
    }
}
int main(){
    int arr[N];
    for (int i = 0; i < N;i++)
    {
        cin >> arr[i];
    }
    Bubblesort(arr, N);
    LinkList L = (LinkList)malloc(sizeof(LNode));
    L->Next = NULL;
    L = List_TailInsert(L,arr);
    // cout << L;
    GetElem(L);
    return 0;
}