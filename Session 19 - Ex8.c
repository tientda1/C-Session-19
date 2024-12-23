#include <stdio.h>

typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
} Student;

Student students[5] = {
    {1, "Tien", 20, "123-456-7890"},
    {2, "Doanh", 21, "234-567-8901"},
    {3, "Dat", 22, "345-678-9012"},
    {4, "An", 23, "456-789-0123"},
    {5, "Duc", 24, "567-890-1234"}
};
int currentLength = 5;

void displayStudents() {
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone Number: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}

void sortStudentsByName(Student arr[], int length) {
    Student temp;
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (strcmp(arr[i].name, arr[j].name) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    printf("Truoc khi sap xep:\n");
    displayStudents();
    sortStudentsByName(students, currentLength);
    printf("\nSau khi sap xep:\n");
    displayStudents();

    return 0;
}

