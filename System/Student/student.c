#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 100

struct student {
    int id;
    char name[50];
    float marks;
};

struct student students[MAX_STUDENTS];
int numStudents = 0;

void addStudent() {
    if (numStudents >= MAX_STUDENTS) {
        printf("Maximum number of students reached.\n");
        return;
    }

    struct student newStudent;

    printf("Enter student ID: ");
    scanf("%d", &newStudent.id);

    printf("Enter student name: ");
    scanf(" %[^\n]", newStudent.name);

    printf("Enter student marks: ");
    scanf("%f", &newStudent.marks);

    students[numStudents++] = newStudent;

    printf("Student added successfully.\n");
}

void displayStudents() {
    if (numStudents == 0) {
        printf("No students to display.\n");
        return;
    }

    printf("ID\tName\t\tMarks\n");
    printf("-----------------------------------\n");

    for (int i = 0; i < numStudents; i++) {
        printf("%d\t%s\t\t%.2f\n", students[i].id, students[i].name, students[i].marks);
    }
}

void deleteStudent() {
    if (numStudents == 0) {
        printf("No students to delete.\n");
        return;
    }

    int studentId;
    printf("Enter the ID of the student to delete: ");
    scanf("%d", &studentId);

    int found = 0;
    int deleteIndex = -1;

    for (int i = 0; i < numStudents; i++) {
        if (students[i].id == studentId) {
            found = 1;
            deleteIndex = i;
            break;
        }
    }

    if (found) {
        for (int i = deleteIndex; i < numStudents - 1; i++) {
            students[i] = students[i + 1];
        }

        numStudents--;

        printf("Student with ID %d deleted successfully.\n", studentId);
    } else {
        printf("Student with ID %d not found.\n", studentId);
    }
}

void updateStudent() {
    if (numStudents == 0) {
        printf("No students to update.\n");
        return;
    }

    int studentId;
    printf("Enter the ID of the student to update: ");
    scanf("%d", &studentId);

    int found = 0;
    int updateIndex = -1;

    for (int i = 0; i < numStudents; i++) {
        if (students[i].id == studentId) {
            found = 1;
            updateIndex = i;
            break;
        }
    }

    if (found) {
        struct student updatedStudent;

        printf("Enter updated name: ");
        scanf(" %[^\n]", updatedStudent.name);

        students[updateIndex] = updatedStudent;

        printf("Student with ID %d updated successfully.\n", studentId);
    } else {
        printf("Student with ID %d not found.\n", studentId);
    }
}

void updateMarks() {
    if (numStudents == 0) {
        printf("No students to update marks.\n");
        return;
    }

    int studentId;
    printf("Enter the ID of the student to update marks: ");
    scanf("%d", &studentId);
    int found = 0;
    int updateIndex = -1;

    for (int i = 0; i < numStudents; i++) {
        if (students[i].id == studentId) {
            found = 1;
            updateIndex = i;
            break;
        }
    }

    if (found) {
        float newMarks;
        printf("Enter updated marks: ");
        scanf("%f", &newMarks);

        students[updateIndex].marks = newMarks;

        printf("Marks updated successfully for student with ID %d.\n", studentId);
    } else {
        printf("Student with ID %d not found.\n", studentId);
    }
}

void calculateAverage() {
    if (numStudents == 0) {
    printf("No students to calculate average.\n");

    return;
    }
float sum = 0;
    for (int i = 0; i < numStudents; i++) {
        sum += students[i].marks;
    }

    float average = sum / numStudents;

    printf("Average marks: %.2f\n", average);
}

void calculateTotal() {
    printf("Total number of students: %d\n", numStudents);
}

int main() {
    int choice;
    do {
        printf("\nStudent Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Delete Student\n");
        printf("4. Update Student\n");
        printf("5. Update Marks\n");
        printf("6. Calculate Average Marks\n");
        printf("7. Calculate Total Students\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            deleteStudent();
            break;
        case 4:
            updateStudent();
            break;
        case 5:
            updateMarks();
            break;
        case 6:
            calculateAverage();
            break;
        case 7:
            calculateTotal();
            break;
        case 8:
            printf("Exiting program.\n");
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (1);

    return 0;
}
