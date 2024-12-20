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
    int idToEdit;
    printf("Nhap id sinh vien can sua: ");
    scanf("%d", &idToEdit);
    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (students[i].id == idToEdit) {
            found = 1;
            printf("Sinh vien tim thay: %s", students[i].name);
            printf("Tuoi: %d\n", students[i].age);
            printf("Nhap ten moi cho sinh vien: ");
            getchar();  
            fgets(students[i].name, sizeof(students[i].name), stdin);
            printf("Nhap tuoi moi cho sinh vien: ");
            scanf("%d", &students[i].age);
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay sinh vien voi id %d.\n", idToEdit);
    }
    printf("\nThong tin toan bo sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien %d:\n", students[i].id);
        printf("Ten: %s", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s", students[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

