#ifndef ex5_h

#define ex5_h

	typedef struct {
		char age;
		short number;
		int grades[10];
		char name[80];
		char address[120];
	} Student;

	void fill_student(Student *s, char age, short number, char *name,char *address);
    void update_address(Student *s, char *new_address);
    void update_grades(Student *s, int *new_grades);

#endif