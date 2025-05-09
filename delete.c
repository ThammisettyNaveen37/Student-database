#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"
extern Student *head;
void delete_record(void) {
      char id[20];
      printf("Enter Student ID :");
      scanf("%s",id);
      Student *temp = head, *prev = NULL;
      while (temp && strcmp(temp->studentId, id) != 0) {
          prev = temp;
          temp = temp->next;
      }
 
      if (!temp) {
          printf("Record not found.\n");
          return;
      }
 
      if (!prev)
          head = temp->next;
      else
          prev->next = temp->next;
 
     free(temp);
      printf("Record deleted successfully.\n");
}
 