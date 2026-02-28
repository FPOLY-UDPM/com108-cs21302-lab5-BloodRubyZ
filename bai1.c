/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
//  giá trị lớn nhất giữa 3 số 

#include <stdio.h>

// Tạo hàm tìm giá trị lớn nhất trong 3 số
// Kiểu trả về là int, nhận vào 3 tham số kiểu int
int timMax(int so1, int so2, int so3) { 
    int max = so1; // Giả sử số đầu tiên là lớn nhất
    
    // So sánh để tìm ra số lớn nhất 
    if (so2 > max) {
        max = so2;
    }
    if (so3 > max) {
        max = so3;
    }
    
    return max; // Trả về kết quả
} 

int main() {
    int a, b, c;
    int soMax;

    // Input: Nhập từ bàn phím 3 số bất kỳ 
    printf("Nhập ba số nguyên (cách nhau bởi dấu cách): ");
    scanf("%d %d %d", &a, &b, &c);

    // Gọi hàm trong hàm main 
    // Truyền 3 biến a, b, c vào hàm và gán kết quả trả về cho soMax
    soMax = timMax(a, b, c);
    
    // Output: Xuất ra màn hình số lớn nhất trong 3 số 
    printf("Giá trị lớn nhất trong 3 số là: %d\n", soMax);
    
    return 0;
}