/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

#include <stdio.h>

// Tạo hàm hoán vị sử dụng con trỏ
// Dùng dấu * để khai báo tham số là con trỏ (chỉ đến địa chỉ bộ nhớ)
void hoanVi(int *x, int *y) {
    int temp; // Tạo một biến tạm (giống như cái ly thứ 3)

    // Cách giải để hoán vị:
    temp = *x; // Bước 1: Lấy giá trị tại địa chỉ x cất tạm vào biến temp
    *x = *y;   // Bước 2: Lấy giá trị tại địa chỉ y đổ sang địa chỉ x
    *y = temp; // Bước 3: Lấy giá trị đang cất ở temp đổ lại vào địa chỉ y
}

int main() {
    int a, b;

    // Input: Nhập vào từ bàn phím 2 giá trị a, b
    printf("Nhap gia tri a: ");
    scanf("%d", &a);
    printf("Nhap gia tri b: ");
    scanf("%d", &b);

    printf("\nTruoc khi hoan vi: a = %d, b = %d\n", a, b);

    // Gọi hàm trong hàm main 
    // CHÚ Ý CỰC KỲ QUAN TRỌNG: Phải dùng dấu & để truyền ĐỊA CHỈ của a và b
    hoanVi(&a, &b);
    
    // Output: Xuất ra màn hình sau khi hoán vị
    printf("Sau khi hoan vi: a = %d, b = %d\n", a, b);
    
    return 0;
}

