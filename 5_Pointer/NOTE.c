/*

C printf() / scanf() Format Specifier Cheat Sheet

🔢 Integer Types
Data Type	    printf	scanf	Example
int	            %d	    %d	    int a = 10;
unsigned int	%u	    %u	
short	        %hd	    %hd	    
long	        %ld	    %ld	
long long	    %lld	%lld

🔠 Character & String
Data Type	        printf	scanf	Example
char	            %c	    %c	    char ch = 'A';
char[] / string	    %s	    %s	    char name[20];

🔢 Floating Point
Data Type	    printf	scanf	Example
float	        %f	    %f	
double	        %f	    %lf	
scientific	    %e	    —

🧠 Pointer & Memory
Purpose	            Specifier	Example
Address	            %p	        printf("%p", (void*)&x);
Pointer value	    %p	        printf("%p", (void*)ptr);
Dereference value	depends	    printf("%d", *ptr);

📦 sizeof (VERY IMPORTANT)
Function	    Return Type	    printf
sizeof()	    size_t	        %zu

*/