#include <iostream>
using namespace std;
int main()
{
int values [4][4] =
{{1, 2, 3, 4},
{2, 3, 4, 5},
{3, 4, 5, 6},
{4, 5, 6, 7} };
for (int row = 0; row < 4; row++)
for (int column = 0; column < 4; column++)
    if (row + column == 3) //Xét các phần tử đường chéo. 
cout << values[row][column] << "\t";
return 0;
}
//Kết quả: 4 4 4 4
