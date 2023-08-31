#include <stdio.h>
#define CLASS  5
struct Students{
	char ID;
	char name[30];
	char course[20];
};


void capture(struct Students *aStudent){
	char ch;
	FILE *fp;
	
	fp = fopen("studentFiles.txt", "w");
	
	int i;
	for(i=0; i<=22; i++){
		
		printf("ID:\t");
		scanf("%c", &aStudent[i].ID);
		fprintf(fp, "ID = %c\n", aStudent[i].ID);
		ch=getchar();
		
		ch=getchar();
		printf("Name:\t");
		scanf("%[^\n]s", aStudent[i].name);
		fprintf(fp, "Name = %s\n", aStudent[i].name);
		ch=getchar();
	
		printf("Course:\t");
		scanf("%d", &aStudent[i].course);
		fprintf(fp, "Age = %d\n", aStudent[i].course);
	}
	fclose(fp);
}

void main (){
struct Students aStudent[5];

	printf("\t\t\tMaster\n");
	printf("Enter Student Details\n");
	
		capture(aStudent);


}
