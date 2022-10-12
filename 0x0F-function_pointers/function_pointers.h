#ifndef function_pointers.h
#define function_pointers.h
<<<<<<< HEAD:0x0F-function_pointers/function_pointers.h

=======
>>>>>>> e443b843b6179833c0865693ac002afdd711d79f:0x0F-function_pointers/main.h
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
