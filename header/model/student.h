#ifndef _STUDENT_
#define _STUDENT_
#include "course.h"

typedef struct
{
    int id;
    char first_name[32];
    char last_name[32];
    float cgpa;
    Course course;
} Student;

#endif