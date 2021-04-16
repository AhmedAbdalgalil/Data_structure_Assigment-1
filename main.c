/*
data structures firs project.
in this project want to implement some important  programing tools such as  dynamic array , linked_list and git.
the organized the the following
student 1 part from line 1 to 60
student 3 part from line 60 to 200
student 2 part after line 200
we organized it as that because we don't want to worry about conflicts during
*/
#include <stdio.h>
#include <stdlib.h>


void creat_dynamic_array (int);
void creat_linked_list (int);

//define a structure for student data

    struct student_information
{
   char name[50];
   int Student_ID;
   int Student_date_day;
   int Student_date_month;
   int Student_date_year;
  int Student_score;
};



int main()
{
    int n, data_type;
//welcome  massage
    printf("welcome to our first project in data structure course !\n");


    the_start:
    //ask the user about type of data structure that will be used
    printf("what type of data structure that you want to use    \n");
    printf("press 1 to use linked list    \n");
    printf("press 2 to use dynamic array    \n");
    scanf("%d", &data_type);

    if(data_type==1)
        {//use a liked list
        creat_linked_list (n);
        }
    else if (data_type==2)
    {//use dynamic array
        printf("what is the number of students that you will work with  \n");
    scanf("%d", &n);
    creat_dynamic_array (n);
    }

    else{//if the user entered in valid input
        printf("Invalid input !! !\n");
        goto the_start;
    }
}
//////////////////////////////////////////////////  student 3 part starts here     ////////////////////////////////////////////////////////










































































































































//////////////////////////////////////////////////  student 2 part starts here     ////////////////////////////////////////////////////////





























