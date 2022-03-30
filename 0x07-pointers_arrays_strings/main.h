/* prototype for function that fills memory with a constant byte*/

char *_memset(char *s, char b, unsigned int n);

/* prototype for function that copies memory area */
char *_memcpy(char *dest, char *src, unsigned int n);

/* prototype for function that locates a character in a string*/
char *_strchr(char *s, char c);

/* prototype for function that gets the length of a prefix substring*/

unsigned int _strspn(char *s, char *accept);

/* prototype for function that searches a string for any of a set of bytes*/
char *_strpbrk(char *s, char *accept);

/* prototype for function that locates a substring */
char *_strstr(char *haystack, char *needle);

/* prototype for function that prints the chessboard*/
void print_chessboard(char (*a)[8]);

/* prototype for function that writes the character c to stdout*/
int _putchar(char c);

/* prototype for function that sets the value of a pointer to a char*/
void set_string(char **s, char *to);


