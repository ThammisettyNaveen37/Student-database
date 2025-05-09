 #include <stdio.h>
 #include <string.h>
 #include "student.h"
 extern Student* head;
 void edit_name(const char* id) {
      Student* temp = head;
      while (temp && strcmp(temp->studentId, id) != 0)
          temp = temp->next;
 
      if (!temp) {
          printf("Student not found.\n");
         return;
 }

     printf("Enter new name: ");
     scanf(" %[^\n]", temp->studentName);
     printf("Data updated successfully.\n");
 }
void edit_dob(const char* id) {
      Student* temp = head;
      while (temp && strcmp(temp->studentId, id) != 0)
          temp = temp->next;
 
      if (!temp) {
          printf("Student not found.\n");
          return;
      }
 
      printf("Enter new DOB (DD/MM/YYYY): ");
      scanf("%s", temp->dob);
     printf("Data updated successfully.\n");
 }
  void edit_percentage(const char* id) {
      Student* temp = head;
      while (temp && strcmp(temp->studentId, id) != 0)
          temp = temp->next;
 
      if (!temp) { 
		  printf("Student not found.\n");
          return;   
 }
 
      printf("Enter new Matric %%: ");
      scanf("%f", &temp->matric_percent);
      printf("Enter new Inter %%: ");
      scanf("%f", &temp->inter_percent);
      printf("Enter new Graduation %%: ");
      scanf("%f", &temp->grad_percent);
     printf("Data updated successfully.\n");
 }
 void edit_contact(const char* id) {
      Student* temp = head;
      while (temp && strcmp(temp->studentId, id) != 0)
          temp = temp->next;
 
      if (!temp) {
          printf("Student not found.\n");
          return;
      }
 
      printf("Enter new contact: ");
      scanf("%s", temp->contact);
     printf("Data updated successfully.\n");
 }
void edit_email(const char* id) {
      Student* temp = head;
      while (temp && strcmp(temp->studentId, id) != 0)
          temp = temp->next;
 
      if (!temp) {
          printf("Student not found.\n");
          return;
      }
 
      printf("Enter new email: ");
        scanf("%s", temp->email);
       printf("Data updated successfully.\n");
}