 #include <stdio.h>
 #include <stdlib.h>
 #include "student.h"
 extern Student* head;
 void save_records() {
      FILE* fp = fopen("database.txt", "w");
      if (!fp) {
          printf("Unable to save file.\n");
         return;
		 }
      Student* temp = head;
      while (temp) {
          fprintf(fp, "%s,%s,%s,%.2f,%.2f,%.2f,%s,%s\n",
                  temp->studentId, temp->studentName, temp->dob,
                  temp->matric_percent, temp->inter_percent, temp->grad_percent,
                  temp->contact, temp->email);
          temp = temp->next;
      }
 
      fclose(fp);
      printf("Database saved successfully.\n");
 }
  void load_records() {
      FILE* fp = fopen("database.txt", "r");
      if(!fp)
      return;
      head=NULL;
      Student *temp=NULL, *newNode;
      while(1)
     {
          newNode = (Student*) malloc(sizeof(Student));
          if(!newNode){
                  printf("Memory Allocation failed\n");
                  break;}
           int ret = fscanf(fp, "%[^,],%[^,],%[^,],%f,%f,%f,%[^,],%s",
                 newNode->studentId, newNode->studentName, newNode->dob,
	                &newNode->matric_percent, &newNode->inter_percent, &newNode->grad_percent,
                 newNode->contact, newNode->email);
          if(ret==EOF||ret!=8){
             free(newNode);
             break;
          }
          newNode->next=NULL;
          if(head==NULL)
          {
           head=newNode;
           temp=newNode;
          }
           else
          {
           temp->next=newNode;
           temp=newNode;
          }
 
        }
     fclose(fp);
 }