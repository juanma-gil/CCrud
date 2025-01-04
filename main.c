#include <stdio.h>
#include "header/model/student.h"
#include "header/crud_functions.h"

int main() {
    int choice;
    int list_size = 0;
    Student* student_list = NULL; 

    while (1)
    {
        printf(
            "What action do you want to do?\n\n\r"
            "[0] Add a new student.\n\r"
            "[1] Find a existent student.\n\r"
            "[2] Know how much students are registered.\n\r"
            "[3] Delete a student.\n\r"
            "[4] Update a student.\n\r"
            "[-1] to exit\n\n\r"
        );

        scanf("%d", &choice);

        if (choice < -1 || choice > 4)
        {
            perror("\r\nThe chosen option is not valid!");
            return -1;
        }

        printf("You has chosen the option %d", choice);

        switch (choice)
        {
        case 0:
            add_student(&student_list, &list_size);
            print_student_list(student_list, list_size);
            break;
        case 1:
            // TODO: call find_student() function
        break;
        case 2:
            // TODO: call count_students() function
        break;
        case 3:
            // TODO: call delete_student() function
        break;
        case 4:
            // TODO: call update_student() function
        break;
        
        default:
            return 0;
            break;
        }
    }

    return 0;
}