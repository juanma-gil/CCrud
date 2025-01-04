#include <stdio.h>
#include <stdlib.h>
#include "header/model/student.h"

void add_student(Student** student_list, int* list_size) 
{
    Student new_student;
    new_student.id = *list_size;
    
    printf("\r\nPlease write the student's firstname and then press enter\r\n");
    scanf("%31s", new_student.first_name);

    printf("\r\nPlease write the student's firstname and then press enter\r\n");
    scanf("%31s", new_student.last_name);

    printf("\r\nPlease write the student's cgpa and then press enter\r\n");
    scanf("%f", &new_student.cgpa);

    printf("\r\nPlease write the student's course id and then press enter\r\n");
    scanf("%d", &new_student.course.id);

    printf("\r\nPlease write the student's course name and then press enter\r\n");
    scanf("%31s", &new_student.course.course_name);

    *student_list = realloc(*student_list, sizeof(Student));
    if (*student_list == NULL) {
        perror("An error occurred while adding a new student");
        return;
    }
    
    (*student_list)[*list_size] = new_student;
    (*list_size)++;
}

void print_student_list(Student* student_list, int list_size) {
    for (int i = 0; i < list_size; i++) {
        printf(
            "\r\nStudent %d:\r\n"
            "Firstname: %s\r\n"
            "Lastname: %s\r\n"
            "CGPA: %.2f\r\n"
            "Course Id: %d\r\n"
            "Course Name: %s\r\n",
            student_list[i].id,
            student_list[i].first_name,
            student_list[i].last_name,
            student_list[i].cgpa,
            student_list[i].course.id,
            student_list[i].course.course_name
        );
    }
}
