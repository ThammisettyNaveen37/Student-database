#ifndef STUDENT_H
#define STUDENT_H
  
typedef struct Student {
       char studentId[10];
       char studentName[50];
       char dob[11]; // dd/mm/yyyy
       float matric_percent;
       float inter_percent;
       float grad_percent;
       char contact[15];
       char email[50];
 struct Student* next;
} Student;
extern Student* head;
// Function prototypes
void add_record();
void print_records();
void save_records();
void load_records();
void delete_record();
void edit_record();
void find_record();
void reverse_records();

void edit_name(const char* id);
void edit_dob(const char* id);
void edit_percentage(const char* id);
void edit_contact(const char* id);
void edit_email(const char* id);
#endif