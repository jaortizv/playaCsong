#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	char *p = argv[1];
	

	if (argc != 2){
		
		printf("Error!!! This programme needs a song:\n");
		printf("\"pollitos\"\n");
		printf("\"martinico\"\n");
		printf("\"estrellita\"\n");
		printf("You can use>> %s <song>\n", argv[0]);
		printf("Example : %s pollitos\n", argv[0]);
		return 1;
	}

	if (strcmp("pollitos", p)==0){
		
		Beep(261, 400);
		Beep(293, 400);
		Beep(329, 400);
		Beep(349, 400);
		Beep(392, 1000);
		Beep(392, 1000);
		
		Beep(440, 400);
		Beep(523, 400);
		Beep(440, 400);
		Beep(523, 400);
		Beep(392, 1000);
		Beep(392, 1000);
		
		Beep(349, 400);
		Beep(349, 400);
		Beep(349, 400);
		Beep(392, 400);
		Beep(329, 1000);
		Beep(329, 1000);
		
		Beep(299, 400);
		Beep(293, 400);
		Beep(293, 400);
		Beep(329, 400);
		Beep(261, 1000);
		Beep(261, 1000);
		
		return 0;
	}
	
	else if (strcmp("martinico", p)==0){
		
		Beep(261, 600);
		Beep(293, 600);
		Beep(329, 600);
		Beep(261, 600);
		
		Beep(261, 600);
		Beep(293, 600);
		Beep(329, 600);
		Beep(261, 600);
		
		Beep(329, 600);
		Beep(349, 600);
		Beep(392, 900);
		Beep(0,   100);
		
		Beep(329, 600);
		Beep(349, 600);
		Beep(392, 900);
		Beep(0,   100);		
		
		
		Beep(392, 300);
		Beep(440, 300);
		Beep(392, 300);
		Beep(349, 300);
		Beep(329, 800);
		Beep(261, 900);
		
		Beep(392, 300);
		Beep(440, 300);
		Beep(392, 300);
		Beep(349, 300);
		Beep(329, 800);
		Beep(261, 900);
		
		Beep(293, 800);
		Beep(246, 800);
		Beep(261, 900);
		
		Beep(293, 800);
		Beep(246, 800);
		Beep(261, 900);
		
		
		return 0;
		
	}
	
	else if (strcmp("estrellita", p)==0){
		
		Beep(261, 300);
		Beep(261, 300);
		Beep(392, 300);
		Beep(392, 300);
		Beep(440, 300);
		Beep(440, 300);
		Beep(392, 900);
		Beep(349, 300);
		Beep(349, 300);
		Beep(329, 300);
		Beep(329, 300);
		Beep(293, 300);
		Beep(293, 300);
		Beep(523, 900);
		
		return 0;		
	}
	
	else{
		printf("%s is not a song of the list", argv[1]);
	}
	
	return 0;
}
