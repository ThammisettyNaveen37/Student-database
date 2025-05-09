 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include "student.h"
  
 extern Student* head;
  
int is_duplicate_id(const char* id) {
       Student* temp = head;
      while (temp) {
          if (strcmp(temp->studentId, id) == 0)
              return 1;
          temp = temp->next;
      }
      return 0;
}
 
void add_record() {
      Student* newStudent = (Student*) malloc(sizeof(Student)),*temp=head;
 
      printf("Enter Student ID: ");
      scanf("%s", newStudent->studentId);
 
      if (is_duplicate_id(newStudent->studentId)) {
          printf("Error: Duplicate ID. Record not added.\n");
          free(newStudent);
          return;
		 }
 
      printf("Enter Name: ");
      scanf(" %[^\n]", newStudent->studentName);
      printf("Enter DOB (dd/mm/yyyy): ");
      scanf("%s", newStudent->dob);
      printf("Enter Matric:");
      scanf("%f", &newStudent->matric_percent);
      printf("Enter Inter:");
      scanf("%f", &newStudent->inter_percent);
      printf("Enter Graduation:");
      scanf("%f", &newStudent->grad_percent);
      printf("Enter Contact:");
      scanf("%s", newStudent->contact);
      printf("Enter Email:");
      scanf("%s", newStudent->email);
      newStudent->next = 0;
       if(head==0)
       {
        head=newStudent;
       }
       else
       {
          temp = head;
          while (temp->next)
          temp = temp->next;
          temp->next = newStudent;
        /*while(temp)
        temp=temp->next;
       temp->next = newStudent;*/
       }
    printf("Record added successfully.\n");
}
                                          