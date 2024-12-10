#include <iostream>
using namespace std;
int main()
{
int values[4][4] =
{{1, 2, 3, 4}
,{2, 3, 4, 5}
,{3, 4, 5, 6}
,{4, 5, 6, 7} };
int S = 0;
for (int i = 0; i < 4; i++)
S = S + values[i][4-1-i];
cout << S;
return 0;
}
//Kết quả: 16. 
/* Tính tổng các phần tử theo đường chéo từ values[0][3]....*/
