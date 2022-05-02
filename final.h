#ifndef FINAL_H
#define FINAL_H

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
#endif
