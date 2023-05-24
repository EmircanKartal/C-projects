#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*
Write a function called "Find Successful Student" that compares two variables of the type of student sent to it and returns the more successful one.

This function must have the following properties:
-The higher average of two students is more successful,
-If the averages are equal, the one with the higher Akts sum is more successful,
-If both the average and the total of the akts are equal, the one with the smaller entry year is more successful.
-If all the above values are the same, one of them is more successful.

Two students will be produced in the "student" structure. The information of these students will be taken from the keyboard. If different types of information are entered, an error should occur. The information of two students should be sent to the "Find Successful Student" function, the more successful one should be found here, the successful student; student number Name and surname should be printed on the screen.
*/

#define MAX_STUDENT_NAME 50

struct student
{
    char ID[20];
    char nameSurname[MAX_STUDENT_NAME];
    float GPA;
    int ECTS_Sum;
    int yearofEntry;
};

struct student find_Successful_Student(struct student student1, struct student student2);

struct student find_Successful_Student(struct student student1, struct student student2)
{
    if (student1.GPA > student2.GPA)
        return student1;
    else if (student2.GPA > student1.GPA)
        return student2;
    else
    {
        if (student1.ECTS_Sum > student2.ECTS_Sum)
            return student1;
        else if (student2.ECTS_Sum > student1.ECTS_Sum)
            return student2;
        else
        {
            if (student1.yearofEntry < student2.yearofEntry)
                return student1;
            else if (student2.yearofEntry < student1.yearofEntry)
                return student2;
            else
            {
                // If the GPA, ECTS sum and year of entry are also equal, return a random one
                int randomIndex = rand() % 2;
                if (randomIndex == 0)
                    return student1;
                else
                    return student2;
            }
        }
    }
}

int main()
{
    struct student student1, student2;

    printf("1. Student Information:\n");
    printf("ID: ");
    scanf("%s", student1.ID);
    printf("Name surname: ");
    scanf(" %[^\n]s", student1.nameSurname);
    printf("GPA: ");
    scanf("%f", &student1.GPA);
    printf("Sum of ECTS: ");
    scanf("%d", &student1.ECTS_Sum);
    printf("The Year of Entry: ");
    scanf("%d", &student1.yearofEntry);

    printf("\n2. Student Information:\n");
    printf("ID: ");
    scanf("%s", student2.ID);
    printf("Name surname: ");
    scanf(" %[^\n]s", student2.nameSurname);
    printf("GPA: ");
    scanf("%f", &student2.GPA);
    printf("Sum of ECTS: ");
    scanf("%d", &student2.ECTS_Sum);
    printf("The Year of Entry: ");
    scanf("%d", &student2.yearofEntry);

    struct student successful_Student = find_Successful_Student(student1, student2);

    printf("\nSuccessful Student:\n");
    printf("ID: %s\n", successful_Student.ID);
    printf("Name Surname: %s\n", successful_Student.nameSurname);

    return 0;
}
