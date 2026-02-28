/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN 
//  Input: Nhập vào năm 
//  Output: Có phải là năm nhuận hay không? 
//  Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không 
//  chia hết cho 100 
 
#include <stdio.h>

// Tạo hàm kiểm tra năm nhuận bằng cách tách nhỏ các lệnh if
int kiemTraNamNhuan(int nam) {
    // Trường hợp 1: Nếu chia hết cho 400 -> Chắc chắn là năm nhuận
    if (nam % 400 == 0) {
        return 1; 
    }
    
    // Trường hợp 2: Nếu chia hết cho 4 NHƯNG lại chia hết cho 100 -> KHÔNG phải năm nhuận
    if (nam % 4 == 0) {
        if (nam % 100 == 0) {
            return 0; 
        } else {
            return 1; // Chia hết cho 4 và không chia hết cho 100 -> Là năm nhuận
        }
    }

    // Trường hợp 3: Không lọt vào các điều kiện trên (không chia hết cho 4)
    return 0; 
}

int main() {
    int nam;

    printf("Nhập vào một năm bất kỳ: ");
    scanf("%d", &nam);

    int ketQua = kiemTraNamNhuan(nam);
    
    if (ketQua == 1) {
        printf("%d là năm nhuận.\n", nam);
    } else {
        printf("%d không phải là năm nhuận.\n", nam);
    }
    
    return 0;
}