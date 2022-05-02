#ifndef HEADER_H
#define HEADER_H

extern int stdio,stdlib,conio,time,string,ctype,math;
extern int stdio1,stdlib1,conio1,time1,string1,ctype1,math1;
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
#endif
