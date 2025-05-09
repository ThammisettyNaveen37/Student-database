#include<stdio.h>
#include<stdlib.h>
#include "student.h"
void print_records() {
       Student* temp = head;
       if (temp == NULL) {
           printf("No records to display.\n");
           return;
       }
 
      while (temp != NULL) {
          printf("\nStudent ID: %s\n", temp->studentId);
          printf("Name: %s\n", temp->studentName);
          printf("DOB: %s\n", temp->dob);
          printf("Matric %%: %.2f\n", temp->matric_percent);
          printf("Inter %%: %.2f\n", temp->inter_percent);
          printf("Graduation %%: %.2f\n", temp->grad_percent);
          printf("Contact: %s\n", temp->contact);
          printf("Email: %s\n", temp->email);
          temp = temp->next;
      }
  }
 