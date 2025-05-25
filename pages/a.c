




































































































// Notes : 

// print()
// scanf(specifier,naam)
// Touch dia folder a dhuke file create kore
// ./hello
// gcc -o hello hello.c

// sting hoile 
// char dob[50] dia declar
// printf("Insert Date of Birth: "); 
// scanf("%s", dob);

// Inteser hoile 
// int dob[50] dia declar
// printf("Insert Date of Birth: "); 
// scanf("%d", &dob);

// Basic code : 
// #include<stdio.h>
// int main() {
// int a;
// return 0;
// }

// First program:  
// #include <stdio.h>
// int main ()
// {
// //Variable Declaration 
// int mob;
// char name,dob[60];
// 
// printf("Insert Name :\n");
// scanf("%c",&name);
// printf("The Name is :%c",name);
// 
// //printf("Insert Name %c/n:");
// 
// //printf("Insert Name %c/n:");
// 
// return 0;
// }


//multiarray
// #include <stdio.h>
// int main () {
//     /* an array with 5 rows and 2 columns*/
//     int a[5][2] = {{0,0}, {1,2}, {2,4}, {3,6}, {4,8}};
//     int i, j;
//     /* output each array element's value */
//     for (i = 0; i < 5; i++) {
//         for (j = 0; j < 2; j++) {
//             printf("a[ %d][ %d] = %d \n", i, j, a[i][j]);
//         }
//     }
//     return 0;
// }






//string
// #include <stdio.h>
// int main ()
// {
//     char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
// 
//     printf("Greeting message: %s\n", greeting);
//     return 0;
// }

//struct

// #include <stdio.h>
// #include <string.h>
// struct Books
// {
//     char title[50];
//     char author[50];
//     char subject[100];
//     int book_id;
// };
// int main() 
// {
//     struct Books Book1; /* Declare Book1 of type Book */
//     struct Books Book2; /* Declare Book2 of type Book */
//     /* book 1 specification */
//     strcpy(Book1.title, "C Programming");
//     strcpy(Book1.author, "Nuha Ali");
//     strcpy(Book1.subject, "C Programming Tutorial");
//     Book1.book_id = 6495407; // Note: corrected from 'book1.book_id'
//     /* book 2 specification */
//     strcpy(Book2.title, "Telecom Billing");
//     strcpy(Book2.author, "Zara Ali");
//     strcpy(Book2.subject, "Telecom Billing Tutorial");
//     Book2.book_id = 6495700; // Note: corrected from 'book2.book_id'
//     /* print Book1 info */
//     printf("Book 1 title: %s\n", Book1.title);
//     printf("Book 1 author: %s\n", Book1.author);
//     printf("Book 1 subject: %s\n", Book1.subject); // Note: corrected typo 'subjoct'
//     printf("Book 1 book_id: %d\n", Book1.book_id);
//     /* print Book2 info */
//     printf("Book 2 title: %s\n", Book2.title);
//     printf("Book 2 author: %s\n", Book2.author);
//     printf("Book 2 subject: %s\n", Book2.subject); // Note: corrected typo 'subjoct'
//     printf("Book 2 book_id: %d\n", Book2.book_id); // Note: corrected typo 'book_id'
//     return 0;
// }


//struct student


// #include <stdio.h>

// // Defines a structure 'Student' with name, age, and grade fields.
// struct Student {
//     char name[50]; // Character array to store the student's name.
//     int age; // Integer to store the student's age.
//     float grade; // Floating-point variable to store the student's grade.
// };

// int main() {
//     struct Student s1 = {"John", 20, 85.5}; 
//     /*
//     Initializes a Student structure with:
//     - Name: "John"
//     - Age: 20
//     - Grade: 85.5
//     */

//     printf("Name: %s, Age: %d, Grade: %.2f\n", s1.name, s1.age, s1.grade); 
//     /*
//     Prints the values of the structure:
//     %s for string (name)
//     %d for integer (age)
//     %.2f for float (grade with 2 decimal places)
//     */

//     return 0;
// }







// Task 2 : 
// #include <stdio.h>
// int main ()
// {
// //Variable Declaration 
// int length,width,area,perimeter;
// //char name,dob[60];
// 
// printf("Insert Length :\n");
// scanf("%d",&length);
// printf("Insert Length :\n");
// scanf("%d",&width);
// area=length*width;
// perimeter=2*(width+length);
// 
// printf("The area is :%d\n",area);
// printf("The perimeter is :%d\n",perimeter);
// 
// //printf("Insert Name %c/n:");
// 
// //printf("Insert Name %c/n:");
// 
// return 0;
// }

// Task 5 :
// //Write a program in C to read n number of values in an array and display it in reverse order
// #include<stdio.h>
// int main() {
// int n,i,j,k,l;
// char arr[50];
// 
// printf("Insert value of N:\n");
// scanf("%d",&n);
// for (i=0;i<n;i++){
// printf("Insert value Want to enter in array:\n");
// scanf("%d",&j);
// arr[i]=j;
// }
// printf("Arrary :%s\n",arr);
// printf("Array:\n");
// for (k=n-1;k>-1;k--){
// l=arr[k];
// printf("%d",l);
// }
// 
// return 0;
// }