#include <iostream>
using namespace std;
int main()
{
int values [4][4] =
{ { 1, 2, 3, 4}
, {2, 3, 4, 5}
, {3, 4, 5, 6}
, {4, 5, 6, 7} };
int S = 0;
for (int i = 0; i < 4; i++)
for (int j = 0; j < 4; j++)
if (i >= j)
S = S + values[i][j];
cout << S;
return 0;
}
//Kết quả: 40.
/* Tính tổng các phần tử hàng lớn hơn cột và cả đường chéo của "ma trận" 
1 + 2 + 3 + 3 + 4 + 5 + 4 + 5 6 + 7 = 10 */
