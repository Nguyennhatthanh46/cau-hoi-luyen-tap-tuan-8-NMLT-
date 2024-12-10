#include <iostream>
#include <string.h>
using namespace std;
#define MAXN 255
char* myFunction (char *s1, char *s2) {
int n1 = strlen(s1);
int n2 = strlen(s2);
if (n1 + n2 < 254)
for (int i = 0; i <= n2; i++)
s1 [n1 + i] = s2[i];
return s1;
}
int main() {
char s1 [MAXN]="UIT";
char s2 [MAXN]="2023";
cout << myFunction (s1, s2);
return 0;
}
//Đáp án: UIT2023.
/*
Hàm nhận vào 2 tham số:
char *s1: Chuỗi thứ nhất, sẽ chứa kết quả sau khi nối chuỗi.
char *s2: Chuỗi thứ hai, sẽ được nối vào s1.
Con trỏ <s1> sau khi đã nối chuỗi. (Ở return) | Dùng để trả về

- n1 = strlen(s1): Độ dài của chuỗi s1.
- n2 = strlen(s2): Độ dài của chuỗi s2.

Khởi tạo:
s1 = "UIT"
s2 = "2023"

Thực thi hàm myFunction:
Độ dài n1 = 3 (UIT) và n2 = 4 (2023 bao gồm ký tự \0).
Tổng n1 + n2 = 7 < 254 (điều kiện đúng).
Sao chép từng ký tự từ s2 (2023) vào cuối s1:
s1[3] = '2' (s1[3] ban đầu là kí tự \0)
s1[4] = '0'
s1[5] = '2'
s1[6] = '3'
s1[7] = '\0' (ký tự kết thúc chuỗi).
Kết quả: s1 = "UIT2023"
*/
