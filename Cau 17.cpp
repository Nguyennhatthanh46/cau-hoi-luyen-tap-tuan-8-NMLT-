#include <iostream>
#define MAXR 100
#define MAXC 100
void NhapMaTran(int A[][MAXC], int &r, int &c) {
std::cin >> r >> c;
 for(int j = 0; j < c; j++)
  for(int i = 0; i < r; i++)
    std::cin>>A[i][j];
}
void XuatMaTran(int (*A)[MAXC], const int &r, const int &c) {
for (int i = 0; i < r; i++)
 for (int j = 0; j < c; j++)
  std:: cout<<A[i][j] << " ";
}
int main() {
int a[MAXR][MAXC], dong, cot;
NhapMaTran(a, dong, cot);
XuatMaTran(a, dong, cot);
return 0;
}
/*Nhập 3 hàng, 4 cột theo thứ tự sau.
1 2 3 4 5 6 7 8 9 10 11 12. 
Kết quả: 
1 4 7 10
2 5 8 11
3 6 9 12
Ta có: 
Khi nhập, thì mảng sẽ xét theo tiêu chí cột trước. 
Dẫn đến.
1 2 3 (cột 0 tính xuống theo hàng 0 1 2)  
4 5 6 (cột 1 ....
7 8 9 ... tương tự. 
Sau đó Xuất mảng sẽ duyệt theo hàng từ hàng 0: 1 4 7 10
Đến 2 5 8 11....
*/
