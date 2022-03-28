/*prototype for function that concatenate two strings*/

char *_strcat(char *dest, char *src);

/*prototype for function that concatenate two strings, except that it will use at most n bytes from src*/

char *_strncat(char *dest, char *src, int n);

/* prototype for a function that copies a string*/
char *_strncpy(char *dest, char *src, int n);

/* prototypr for a function that compares two string*/
int _strcmp(char *s1, char *s2);

/* prototype for a function that reverses the content of an array of integers*/

void reverse_array(int *a, int n);

/* prototype for function that changes all lowercase letters of a string to uppercase*/

char *string_toupper(char *);


/* prototype for a function that capitalizes all words of a string*/

char *cap_string(char *);

/* prototype for a function that encodes a string into 1337*/

char *leet(char *);


/* prototype for a function that encodes a string using rot13*/
char *rot13(char *);

/* prototype for a function that prints an integer*/

void print_number(int n);


/* prototype for a function that writes the character c to stdout*/
int _putchar(char c);
