#include <stdio.h>
#include "student.h"
Student* head = NULL;
int main() {
      char choice1;
      int subChoice,id;
      load_records(); // Load from file if exists
 
      do {
          printf("\n------------------MENU---------------------------\n");
          printf("a/A : Add a new student record\n");
          printf("p/P : Print the records from database\n");
          printf("s/S : Save the database in a file\n");
          printf("d/D : Delete a record\n");
          printf("e/E : Edit a record (display sub-menu)\n");
 //       printf("1. For name edit 2. For DOB 3. For percentage 4. For contact 5. For email id\n");
          printf("f/F : Find a student\n");
          printf("r/R : Reverse the records of current display (No changes in file)\n");
          printf("q/Q : Quit from app\n");
          printf("Enter your choice: ");
          scanf(" %c", &choice1);
 
          switch(choice1) {
              case 'a': case 'A': add_record(); break;
              case 'p': case 'P': print_records(); break;
              case 's': case 'S': save_records(); break;
              case 'd': case 'D': delete_record(); break;
              case 'e': case 'E': {
                              char id[20];
                              printf("Enter Student ID to edit: ");
                              scanf("%s", id);
                              printf("1. Edit Name\n2. Edit DOB\n3. Edit Percentage\n4. Edit Contact\n5. Edit Email ID\n");
                              printf("Enter your sub-choice: ");
                              int subChoice;
                              scanf("%d", &subChoice);                         
                                switch(subChoice) {
                                           case 1:
                                                    printf("Editing Name...\n");
                                                     edit_name(id);
                                                     break;
                                           case 2:
                                                   printf("Editing DOB...\n");
                                                   edit_dob(id);
                                                   break;
                                           case 3:
                                                   printf("Editing Percentage...\n");
                                                   edit_percentage(id);
                                                   break;
                                           case 4:
                                                   printf("Editing Contact...\n");
                                                   edit_contact(id);
                                                   break;
                                           case 5:
                                                   printf("Editing Email ID...\n");
                                                   edit_email(id);
                                                   break;
                                          default:
                                                   printf("Invalid sub-choice!\n");
                                            }
                                          break;
                                  }
                                  break;
 
              case 'f': case 'F': find_record(); break;
              case 'r': case 'R': reverse_records(); break;
              case 'q': case 'Q': save_records(); break;
              default: printf("Invalid choice!\n");
          }
      } while (choice1 != 'q' && choice1 != 'Q');
 
      return 0;
 }