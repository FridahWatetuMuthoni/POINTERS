#include <stdio.h>

struct Student
{
    int roll_number;
    char name[30];
    float marks;
};

void create_student(struct Student student)
{
    struct Student student_one;
    student_one = student;
    printf("Student Details: \n");
    printf("Roll Number: %d\n", student_one.roll_number);
    printf("Name: %s\n", student_one.name);
    printf("Marks: %.2f\n", student_one.marks);
}

int main()
{
    struct Student student = {101, "John Doe", 85.5};
    create_student(student);
    return 0;
}
