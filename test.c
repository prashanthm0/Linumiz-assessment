// C program to implement
// the above approach
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int stdio,stdlib,conio,time,string,ctype,math;
int stdio1,stdlib1,conio1,time1,string1,ctype1,math1;
// Driver code
int stdio_check(char *ptr0){
	
	if((strstr(ptr0,"stdio.h"))){
				stdio1=1;
	}
	else
	stdio1=0;
	
		if((strstr(ptr0,"printf"))||(strstr(ptr0,"scanf"))||(strstr(ptr0,"getc"))||(strstr(ptr0,"putc"))||(strstr(ptr0,"fopen"))||(strstr(ptr0,"fclose"))){
		stdio +=1;	
		}
		printf("%d %d",stdio,stdio1);
}


int stdlib_check(char *ptr1){
	if((strstr(ptr1,"stdlib"))){
				stdlib1=1;
	}
	
		if((strstr(ptr1,"malloc"))||(strstr(ptr1,"free"))||(strstr(ptr1,"abort"))||(strstr(ptr1,"exit"))||(strstr(ptr1,"atol"))||(strstr(ptr1,"atoll"))||(strstr(ptr1,"atof"))||(strstr(ptr1,"rand"))){
		stdlib +=1;	
		}
		
}

int conio_check(char *ptr2){
	if((strstr(ptr2,"conio"))){
				conio1=1;
	}
	
		if((strstr(ptr2,"clrscr"))||(strstr(ptr2,"getch"))||(strstr(ptr2,"getche"))||(strstr(ptr2,"textcolor"))||(strstr(ptr2,"textbackround"))){
		conio +=1;	
		}
		
}

int math_check(char *ptr3){
	if((strstr(ptr3,"math"))){
				math1=1;
	}
	
		if((strstr(ptr3,"sqrt"))||(strstr(ptr3,"exp"))||(strstr(ptr3,"log"))||(strstr(ptr3,"log10"))||(strstr(ptr3,"fabs"))||(strstr(ptr3,"ceil"))||(strstr(ptr3,"floor"))||(strstr(ptr3,"pow"))||(strstr(ptr3,"fmod"))||(strstr(ptr3,"sin"))||(strstr(ptr3,"cos"))||(strstr(ptr3,"tan"))){
		math +=1;	
		}
		
}

int string_check(char *ptr4){
	if((strstr(ptr4,"string"))){
				string1=1;
	}
	
		if((strstr(ptr4,"strlen"))||(strstr(ptr4,"strcat"))||(strstr(ptr4,"strncat"))||(strstr(ptr4,"strcpy"))||(strstr(ptr4,"strncpy"))||(strstr(ptr4,"strcmp"))||(strstr(ptr4,"strncmp"))||(strstr(ptr4,"strchr"))||(strstr(ptr4,"strrchr"))||(strstr(ptr4,"strstr"))||(strstr(ptr4,"strspn"))||(strstr(ptr4,"strcspn"))){
		string +=1;	
		}
		
}

int time_check(char *ptr5){
	if((strstr(ptr5,"time"))){
				time1=1;
	}
	
		if((strstr(ptr5,"setdate"))||(strstr(ptr5,"getdate"))||(strstr(ptr5,"clock"))||(strstr(ptr5,"time"))||(strstr(ptr5,"difftime"))||(strstr(ptr5,"strftime"))||(strstr(ptr5,"mktime"))||(strstr(ptr5,"localtime"))||(strstr(ptr5,"gmttime"))||(strstr(ptr5,"ctime"))||(strstr(ptr5,"asctime"))){
		time +=1;	
		}
		
}

int ctype_check(char *ptr6){
	if((strstr(ptr6,"ctype"))){
				ctype1=1;
	}
	
		if((strstr(ptr6,"isalpha"))||(strstr(ptr6,"isdigit"))||(strstr(ptr6,"isalnum"))||(strstr(ptr6,"isspace"))||(strstr(ptr6,"islower"))||(strstr(ptr6,"isupper"))||(strstr(ptr6,"isxdigit"))||(strstr(ptr6,"iscntrl"))||(strstr(ptr6,"isprint"))||(strstr(ptr6,"ispunct"))||(strstr(ptr6,"isgraph"))){
		ctype +=1;	
		}
		
}

void final_result(){
	if((stdio1==0)&&(stdio>=1)){
		printf("stdio.h is missing\n");
	}
	else if((stdio1==1)&&(stdio==0)){
		printf("stdio.h is unused\n");
	}
	
	if((stdlib1==0)&&(stdlib>=1)){
		printf("stdlib.h is missing\n");
	}
	else if((stdlib1==1)&&(stdlib==0)){
		printf("stdlib.h is unused\n");
	}
	
	if((conio1==0)&&(conio>=1)){
		printf("conio.h is missing\n");
	}
	else if((conio1==1)&&(conio==0)){
		printf("conio.h is unused\n");
	}
	
	if((math1==0)&&(math>=1)){
		printf("math.h is missing\n");
	}
	else if((math1==1)&&(math==0)){
		printf("math.h is unused\n");
	}
	
	if((string1==0)&&(string>=1)){
		printf("string.h is missing\n");
	}
	else if((string1==1)&&(string==0)){
		printf("string.h is unused\n");
	}
	
	if((time1==0)&&(time>=1)){
		printf("time.h is missing\n");
	}
	else if((time1==1)&&(time==0)){
		printf("time.h is unused\n");
	}
	
	if((ctype1==0)&&(ctype>=1)){
		printf("ctype.h is missing\n");
	}
	else if((ctype1==1)&&(ctype==0)){
		printf("ctype.h is unused\n");
	}
	
}

int main()
{	
	FILE* ptr;
	char str[50];
	ptr = fopen("test.c", "a+");

	if (NULL == ptr) {
		printf("file can't be opened \n");
	}

	printf("content of this file are \n");

	while (fgets(str, 50, ptr) != NULL) {
	stdio_check(str);
	stdlib_check(str);
	conio_check(str);
	math_check(str);
	string_check(str);
	time_check(str);
	ctype_check(str);
	}

	fclose(ptr);
	final_result();
	return 0;
}

