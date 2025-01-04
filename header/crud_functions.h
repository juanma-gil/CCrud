#ifndef _CRUD_FUNCTIONS_
#define _CRUD_FUNCTIONS_
#include "model/student.h"

void add_student(Student** student_list, int* list_size);
void print_student_list(Student* student_list, int list_size);
#endif