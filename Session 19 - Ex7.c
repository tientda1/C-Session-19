#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
} Student;

Student students[5] = {
    {1, "Tien", 20, "123-456-7890"},
    {2, "Dat", 21, "234-567-8901"},
    {3, "Doanh", 22, "345-678-9012"},
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

void deleteStudentById(int id) {
    int found = 0;
    for (int i = 0; i < currentLength; i++) {
        if (students[i].id == id) {
            found = 1;
            for (int j = i; j < currentLength - 1; j++) {
                students[j] = students[j + 1];
            }
            currentLength--;
            break;
        }
    }
    if (!found) {
        printf("Sinh viên voi ID %d khong tom tai.\n", id);
    }
}

int main() {
    displayStudents();

    int idToDelete;
    printf("Nhap ID sinh viên can xoa: ");
    scanf("%d", &idToDelete);
    deleteStudentById(idToDelete);
    displayStudents();

    return 0;
}

