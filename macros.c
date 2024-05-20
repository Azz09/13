#include <stdio.h>
#include <stdbool.h>


#define print(a,b,c,d,e,f,n) printf("%s %s %s %d %d %d %d\n", a,b,c,d,e,f,n)
#define scan_s(str) scanf("%s", str)
#define scan_d(num) scanf("%d", num)



struct student {
	char surname[50];
	char name[50];
	char patronymic[50];
	int group;
	int mathematics;
	int physics;
	int chemistry;
};


void outputStudents(struct student students[], int count) {
	for (int j = 0; j < count; j++){
		if (students[j].chemistry>=3){
			students[j].chemistry = students[j].chemistry -1;
		}
	}




for (int i = 0; i < count; i++) {
//#printf("%s %s %s %d %d %d %d\n",
     print(
		    students[i].surname,
				students[i].name,
				students[i].patronymic,
				students[i].group,
				students[i].mathematics,
				students[i].physics,
				students[i].chemistry);
   }		
}



void inputStudents(struct student students[], int count) {
		for (int i = 0; i < count; i++) {
			printf("Enter the student's last name: ");
      //scanf("%s", students[i].surname);
      scan_s(students[i].surname);
			printf("Enter the student's name: ");
			//scanf("%s", students[i].name);
      scan_s(students[i].name);
			printf("Enter the student's middle name: ");
			//scanf("%s", students[i].patronymic);
      scan_s(students[i].patronymic);
			printf("Enter the student's group: ");
      //scanf("%d", &students[i].group);
      scan_d(&students[i].group);
			printf("Enter the math score: ");
			//scanf("%d", &students[i].mathematics);
			printf("Enter a physics grade: ");
			scan_d(&students[i].physics);
			printf("Enter a chemistry grade: ");
			scan_d(&students[i].chemistry);
		}
}
int main() {
	int count = 0;
	printf("Enter the number of students: ");
	scanf("%d", &count);
	struct student students[count];
	inputStudents(students, count);
	outputStudents(students, count);
return 0;
}

