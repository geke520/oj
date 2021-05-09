// 字符串翻转
#include <iostream>
#include <string>
#define N 100
using namespace std;
typedef struct LNode
{
    char data;
    struct LNode *next;
} LNode, *LinkList;
// template <class T1>
// int getArrayLen(T1 &array) /*使用模板定义一个函数getArrayLen,该函数将返回数组array的长度*/
// {
//     return (sizeof(array) / sizeof(array[0]));
// }

// 单链表头插法及倒叙
LinkList List_HeadInsert(LinkList &L, string str)
{
    LNode *s;
    for (int i = 0; i < str.length(); i++)
    {
        s = (LNode *)malloc(sizeof(LNode));
        s->data = str[i];
        // cout << str[i] << endl;
        s->next = L->next;
        L->next = s;
    }
    return L;
}
LNode *GetElem(LinkList L)
{
    LNode *p = L->next;
    for (int i = 1; p != NULL; i++)
    {
        cout << p->data;
        p = p->next;
    }
    return p;
}
int main()
{
    int len;
    // char *s[N]={0};
    string str = "";
    cin >> str;
    // s[N] = str.c_str();
    LinkList L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    L = List_HeadInsert(L, str);
    // cout << L;
    GetElem(L);
    return 0;
}