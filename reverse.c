 #include<stdio.h>
 #include<stdlib.h>
 #include "student.h"
 void reverse_records() {
      Student *prev = NULL, *current = head, *next = NULL;
 
     while (current != NULL) {
         next = current->next;
         current->next = prev;
         prev = current;
         current = next;
     }

     head = prev;
     printf("Records reversed successfully.\n");
 }
 