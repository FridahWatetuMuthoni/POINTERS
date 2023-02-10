# POINTERS

## POINTERS BASICS

Pointers are one of the most fundamental things to understand in
the C programming language. So what’s a pointer? A pointer is
just the address of a piece of data in memory.
Pointers help you do both these things: avoid copies and share data.
The computer might allocate, say, memory location
4,100,000 in the stack for the x variable. If you assign
the number 4 to the variable, the computer will store 4
at location 4,100,000.
If you want to find out the memory address of the
variable, you can use the & operator:
&x is the memory address of x
C sends arguments as values
Pointers make it easier to share memory
This is one of the main reasons for using pointers—to let functions
share memory. The data created by one function can be modified by
another function, so long as it knows where to find it in memory.

## MEMORY

Code execution follows this path :source code => complier =>machine code
The primary memory is the RAM
Therefore the Application memory is a chunck of RAM given to an application by the operating system
The Application Memory is divided into four.
Application memory segments:

1. Heap=>free store memory::The heap is used for dynamic memory allocation
2. Global/Static = > global variables
3. stack => function calls and local variables
4. Code/Text=> code instructions

## Dynamic memory allocation

1. Malloc
2. Calloc
3. Realloc
4. free

malloc, calloc, realloc => used to allocate memory on the heap
free=> used to free memory from the heap

1. MALLOC:
   void *= malloc(size of memory you want)
   void*p = malloc(4)
   int *p =malloc(sizeof(int)*3) => 12 bytes
   int *p = (int*)malloc(sizeof(int)\*4) = >16 bytes

2. CALLOC:
   void *= calloc(number of elements,size of memory you want)
    int*p = (int *) calloc(3,sizeof(int));

3. REALLOC: it is used to the size of memory
   void *=realloc(pointer to the starting pint of the current memory block,size of the new block)
    int*x = (int*) realloc(*p,sizeof(int)\*10)
   You can free the memory with realloc too
   int *A = (int*)malloc(4 *sizeof(int));
    int*B = (int *) realloc(*A,0)
   Using realloc as malloc
   int *C = (int*)realloc(NULL,sizeof(int)\*8)

4. FREE:
   Any memory that is allocated remains that way during the life time
   of the programme. So if you want to frre the memory you use free
   free(the startig array of the memory block)

## ARRAYS

When you create an array, the array variable can be used as a pointer to the start of the array in memory.When C sees a line of code in a function line this:
char quote[]="Cookies makes you feel amazing";
['C']['o']['o']['k']['i']['e']'[s']......['\0']
The array variable is just like a pointer=> but of the first variable
When the an array variable is passed to a function it is treated as a pointer

## HOW C FUNCTIONS WORK

1. Initially the main() function has a local variable called longitutide that has a value of 32
2. When the computer calls the go_south_east() function it coipes the value the longitutude variable to the lon arguement
3. When the go_south_east() function changes the value of lon,the function is just changing its local copy
4. That means the the computer returns to the main() functions ,the longitude variable has its original value of 32
