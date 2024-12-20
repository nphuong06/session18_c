#include <stdio.h>
struct Student {
    int id;
    char name[100];
    int age;
    char phoneNumber[15];
};
int main() {
    struct Student students[50] = {
        {1, "Nguyen A", 20, "0123456789"},
        {2, "Tran B", 22, "0987654321"},
        {3, "Le C", 21, "0912345678"},
        {4, "Pham D", 23, "0934567890"},
        {5, "Hoang E", 24, "0945678901"}
    };
    int currentCount = 5;
    struct Student newStudent;
    printf("Nhap thong tin sinh vien moi:\n");
    newStudent.id = currentCount + 1;
    printf("Nhap ten sinh vien: ");
    getchar();
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &newStudent.age);
    printf("Nhap so dien thoai sinh vien: ");
    getchar();
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    students[currentCount] = newStudent;
    currentCount++;
    printf("\nThong tin toan bo sinh vien sau khi them:\n");
    for (int i = 0; i < currentCount; i++) {
        printf("Sinh vien %d:\n", students[i].id);
        printf("Ten: %s", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s", students[i].phoneNumber);
        printf("\n");
    }
    return 0;
}

