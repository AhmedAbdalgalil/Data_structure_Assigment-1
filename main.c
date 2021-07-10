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
 void creat_dynamic_array (int n)
 {int operation_number,number_of_student_in_array=0;
 // pointer that will be used in dynamic array part to point at the start of the dynamic array.
struct student_information *ptr;
 //save space for n elements in the ram dynamically
ptr = (struct student_information*) calloc(n, sizeof(struct student_information));
printf("array has been created successfully \n");
operations_2:

    while(1){
    //chose the kind of the operation
    printf("what kind of operations do you want to do? \n");
    printf("press 1 to Insert a new student in the beginning    \n");
    printf("press 2 to Insert a new student at the end    \n");
    printf("press 3 to Insert a new student in the middle    \n");
    printf("press 4 to print  all students data    \n");
    scanf("%d", &operation_number);
if (operation_number==1){

    //Move element to make 1st space free
    for (int i=number_of_student_in_array-1;i>=0;i--)
    {
        ptr[i+1]=ptr[i];
    }
//take the input data that will be stored in the free first space
printf("Enter student name \n");
  scanf ("%s", (ptr)->name);
printf("Enter Student_ID \n");
  scanf ("%d", &(ptr )->Student_ID);
printf("Enter Student_date_day \n");
  scanf ("%d", &(ptr )->Student_date_day);
printf("Enter Student_date_month \n");
  scanf ("%d", &(ptr )->Student_date_month);
printf("Enter Student_date_year \n");
  scanf ("%d", &(ptr )->Student_date_year);
printf("Enter Student_score \n");
  scanf ("%d", &(ptr )->Student_score);
//the number of students in the array increased by 1
number_of_student_in_array++ ;
}
else if (operation_number==2){
//enter a element in the end is very simple operation if we know number_of_student_in_array
printf("Enter student name \n");
  scanf ("%s", (ptr+number_of_student_in_array)->name);
printf("Enter Student_ID \n");
  scanf ("%d", &(ptr+number_of_student_in_array )->Student_ID);
printf("Enter Student_date_day \n");
  scanf ("%d", &(ptr+number_of_student_in_array )->Student_date_day);
printf("Enter Student_date_month \n");
  scanf ("%d", &(ptr+number_of_student_in_array )->Student_date_month);
printf("Enter Student_date_year \n");
  scanf ("%d", &(ptr+number_of_student_in_array )->Student_date_year);
printf("Enter Student_score \n");
  scanf ("%d", &(ptr+number_of_student_in_array )->Student_score);

//the number of students in the array increased by 1
  number_of_student_in_array++;


}
else if (operation_number==3){

         //Move element to make middle space free
    for (int i=number_of_student_in_array-1;i>= number_of_student_in_array/2;i--)
    {
        ptr[i+1]=ptr[i];
    }
    //tack the data that will be stored
printf("Enter student name \n");
  scanf ("%s", (ptr+number_of_student_in_array/2)->name);
printf("Enter Student_ID \n");
  scanf ("%d", &(ptr+number_of_student_in_array/2 )->Student_ID);
printf("Enter Student_date_day \n");
  scanf ("%d", &(ptr+number_of_student_in_array/2 )->Student_date_day);
printf("Enter Student_date_month \n");
  scanf ("%d", &(ptr+number_of_student_in_array/2 )->Student_date_month);
printf("Enter Student_date_year \n");
  scanf ("%d", &(ptr+number_of_student_in_array/2 )->Student_date_year);
printf("Enter Student_score \n");
  scanf ("%d", &(ptr+number_of_student_in_array/2 )->Student_score);

//the number of students in the array increased by 1
   number_of_student_in_array++;
}

else if (operation_number==4){
//print all elements in the array
for (int i=0;i<number_of_student_in_array;i++)
    {printf("student %d \n",i);
printf ("student name is %s \n", (ptr+i)->name);
printf ("Student_ID is %d\n", (ptr+i )->Student_ID);
printf ("Student_date_day %d\n", (ptr )->Student_date_day);
printf ("Student_date_month %d\n", (ptr+i )->Student_date_month);
printf ("Student_date_year %d\n", (ptr+i )->Student_date_year);
printf ("Student_score %d\n", (ptr+i )->Student_score);
}
}
else {//if the user entered invalid input
        printf("Invalid input !! !\n");

        goto operations_2 ;
}

 }
 }

































//////////////////////////////////////////////////  student 2 part starts here     ////////////////////////////////////////////////////////
void creat_linked_list (int n)

 {
     // A linked list node
typedef struct node {
    struct student_information val;
    struct node * next;
} node_t;

node_t * head = NULL;//create a head pointer that will points to the first node
node_t * Tail = NULL;//create a End pointer that will points to the last node
//create the head node
head = (node_t *) malloc(sizeof(node_t));
head->next =NULL;
Tail=head;
int operation_number,number_of_student_in_LinkedList=1;
    ////////////////////////////////////////////////


//tack  the first node data
    printf("Add the first student \n");
        printf("Enter student name \n");
    scanf ("%s", head->val.name);
    printf("Enter Student_ID \n");
    scanf ("%d", &(head)->val.Student_ID);
    printf("Enter Student_date_day \n");
    scanf ("%d", &(head)->val.Student_date_day);
    printf("Enter Student_date_month \n");
    scanf ("%d", &(head)->val.Student_date_month);
    printf("Enter Student_date_year \n");
    scanf ("%d", &(head)->val.Student_date_year);
    printf("Enter Student_score \n");
    scanf ("%d", &(head)->val.Student_score);



operations_1:
    while(1){
//Set the operation that the user want to use .
    printf("what kind of operations do you want to do? \n");
    printf("press 1 to Insert a new student in the beginning    \n");
    printf("press 2 to Insert a new student at the end    \n");
    printf("press 3 to Insert a new student in the middle    \n");
    printf("press 4 to print  all students data    \n");
    scanf("%d", &operation_number);

if (operation_number==1){

    node_t * new_node=NULL;
    //create a new node
    new_node = (node_t *) malloc(sizeof(node_t));

    //take the data for the new node
    printf("Enter student name \n");
    scanf ("%s", new_node->val.name);
    printf("Enter Student_ID \n");
    scanf ("%d", &(new_node)->val.Student_ID);
    printf("Enter Student_date_day \n");
    scanf ("%d", &(new_node)->val.Student_date_day);
    printf("Enter Student_date_month \n");
    scanf ("%d", &(new_node)->val.Student_date_month);
    printf("Enter Student_date_year \n");
    scanf ("%d", &(new_node)->val.Student_date_year);
    printf("Enter Student_score \n");
    scanf ("%d", &(new_node)->val.Student_score);
    //increase the number of nodes
    number_of_student_in_LinkedList++;
    //the the new node the head node
    new_node->next = head;

    head = new_node;



}

else if (operation_number==2){

        /* now we can add a new variable */
        Tail->next = (node_t *) malloc(sizeof(node_t));

printf("Enter student name \n");
  scanf ("%s", Tail->next->val.name);
printf("Enter Student_ID \n");
  scanf ("%d", &(Tail->next)->val.Student_ID);
printf("Enter Student_date_day \n");
  scanf ("%d", &(Tail->next)->val.Student_date_day);
printf("Enter Student_date_month \n");
  scanf ("%d", &(Tail->next)->val.Student_date_month);
printf("Enter Student_date_year \n");
  scanf ("%d", &(Tail->next)->val.Student_date_year);
printf("Enter Student_score \n");
  scanf ("%d", &(Tail->next)->val.Student_score);
  //increase the number of nodes
number_of_student_in_LinkedList++;
//make the new node followed by null
Tail->next->next = NULL;
Tail=Tail->next;
}
else if (operation_number==3){
//make a new node
  node_t * new_node=NULL;
    new_node = (node_t *) malloc(sizeof(node_t));
    printf("Enter student name \n");
    scanf ("%s", new_node->val.name);
    printf("Enter Student_ID \n");
    scanf ("%d", &(new_node)->val.Student_ID);
    printf("Enter Student_date_day \n");
    scanf ("%d", &(new_node)->val.Student_date_day);
    printf("Enter Student_date_month \n");
    scanf ("%d", &(new_node)->val.Student_date_month);
    printf("Enter Student_date_year \n");
    scanf ("%d", &(new_node)->val.Student_date_year);
    printf("Enter Student_score \n");
    scanf ("%d", &(new_node)->val.Student_score);


    ///////////////////////////////////


    int i=1;
    node_t * current = head;
   //find the middle node
    while (i<number_of_student_in_LinkedList/2) {
        current = current->next;
        i++;
    }

    //Note :Tail pointer can not be changed by insertion a element in the middle.
    //the change  will only happen when we have one element on the linked list.
    if(number_of_student_in_LinkedList==1){
    Tail=current;
}
    //match the new node in the middle
    new_node->next = current->next;
    current->next = new_node;

number_of_student_in_LinkedList++;

}
else if (operation_number==4){

        //print all nodes data
    node_t * current = head;

    while (current != NULL) {

        //
        printf ("student name is %s \n", current->val.name);
        printf ("Student_ID is %d\n", (current)->val.Student_ID);
        printf ("Student_date_day %d\n", (current)->val.Student_date_day);
        printf ("Student_date_month %d\n", (current)->val.Student_date_month);
        printf ("Student_date_year %d\n", (current)->val.Student_date_year);
        printf ("Student_score %d\n", (current)->val.Student_score);
        //
         current = current->next;

    }




}
else{


//mack sure the user give you a good input
        printf("Invalid input !! !\n");

        goto operations_1 ;

}

 }
 }




























