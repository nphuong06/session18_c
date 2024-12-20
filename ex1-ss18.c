#include <stdio.h>
struct Student {
    char name[100];
    int age;
    char phoneNumber[15];
};
int main() {
    struct Student student;
      printf("Nhap ten sinh vien: ");
      fgets(student.name, sizeof(student.name), stdin);
      printf("Nhap tuoi sinh vien: ");
      scanf("%d", &student.age);
      getchar();
      printf("Nhap so dien thoai sinh vien: ");
      fgets(student.phoneNumber, sizeof(student.phoneNumber), stdin);
      printf("\nTen sinh vien: %s", student.name);
      printf("Tuoi sinh vien: %d\n", student.age);
      printf("So dien thoai sinh vien: %s", student.phoneNumber);
    return 0;
}

