// 给出一百分制成绩，要求输出成绩等级‘A’、‘B’、‘C’、‘D’、‘E’。
// 90分以上为A 80-89分为B 70-79分为C 60-69分为D 60分以下为E

#include <iostream>
using namespace std;
void degree(int n)
{
    if (n > 89)
        cout << "A";
    if (n > 79 && n < 90)
        cout << "B";
    if (n > 69 && n < 80)
        cout << "C";
    if (n > 59 && n < 70)
        cout << "D";
    if (n < 60)
        cout << "E";
}
int main()
{
    int n;
    cin >> n;
    degree(n);
}

// 另一种思路
// int main() {
//     int score;
//     scanf("%d", &score);
//     switch(score/10) {
//         case 10:
//         printf("A"); break;
//         case 9:
//         printf("A"); break;
//         case 8:
//         printf("B"); break;
//         case 7:
//         printf("C"); break;
//         case 6:
//         printf("D"); break;
//         default:
//         printf("E");
// 	}
// }