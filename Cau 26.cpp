#include <iostream>
using namespace std;
int main()
{
int values [4][4] =
{{ 1, 2, 3, 4}
,{2, 3, 4, 5}
,{3, 4, 5, 6}
,{4, 5, 6, 7}};
int S = 0;
for (int row = 0; row < 4; row++)
for (int column = 0; column < 4; column++)
if (row == column)
S = S + values[row][column];
cout << S << endl;
return 0;
}
//Kết quả: 16.   Cộng các phần tử trên đường chéo (Hàng = Cột)
