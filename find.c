 #include<stdio.h>
 #include<stdlib.h>
 #include "student.h"
 #include<string.h>
 extern Student* head;
 void find_record(void) {
      char id[20];
       printf("Enter Student ID to find:");
       scanf("%s",id);
       Student* temp = head;
 
       while (temp != NULL) {
            if (strcmp(temp->studentId, id) == 0) {
                 printf("\nStudent ID: %s\n", temp->studentId);
                 printf("Name: %s\n", temp->studentName);
                 printf("DOB: %s\n", temp->dob);
                 printf("Matric %%: %.2f\n", temp->matric_percent);
                 printf("Inter %%: %.2f\n", temp->inter_percent);
                 printf("Graduation %%: %.2f\n", temp->grad_percent);
                 printf("Contact: %s\n", temp->contact);
                 printf("Email: %s\n", temp->email);
                 return;
             }
              temp = temp->next;
        }
      printf("Student record not found.\n");
}