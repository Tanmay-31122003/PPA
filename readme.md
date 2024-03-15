Date : 23/02/2024


# Pointer in C & C++
    - Pointer is variable which stores address.

1) the concept of pointers is applicable in <u>native</u> programming langugages like c and c ++ 
    - native programming language is the langauge which interacts with operating system directly.
    - pointer is considered as derived data type in <u>C & C++</u>.<br>
    due to security reasons their is no such concept of pointers in java.<br> 
     pointer can store address of any variable which gets it's own memory.<br>
     in 32 bit architecture address of any variable is considered as unsigned long.<br>
     the size for unsigned long is 8 bytes

2) According to above concept size of every pointer is always 8 bytes 

consider the below syntax which used to create syntax

- int No = 11; <br>
 int *ptr = &No;
- according to the above syntax -
    - No is variable of type integer currently intialliased with 11
    - ptr is pointer which holds the address of integer currently it holds the address of No.
    - we can draw the digramatic representation of above syntax as

    ![alt text](image.png)
    - to store the address of any variable we use & (address of) operator.
    - at the time of creating the pointer we have to use * operator. in case of pointer * is considered as a <u> de-reference operator</u>.
    - to fetch the data which is pointed by the pointer we have to use * operator(De-reference Operator)
    - consider the below application which demonstrate the use of Pointer
    Pointer1.c
    - we can create pointer which points to any  primitve data types
    
    ex,<br>
    char ch = 'A';<br>
    int i = 11;<br>
    float f = 89.99f;<br>
    double d = 90.9999;<br>

    char *cptr = &ch;<br>
    int *iptr = &i;<br>
    float *fptr = &f;<br>
    double *dptr = &d;<br>

![alt text](image-1.png)

- we can create a pointer which points to any derived data type like <u> array, pointer, function.</u>

- we can create a pointer which points to another pointer 

- consider the below  which will demonstrate the concept of pointer to pointer

int no = 11;
int *p = &no;
int **q = &p;
int ***x = &q;
int ****y = &x;
int *****z = &y;



no              11
p               100
x               300
y               500
z               400
q               200
&no             100
&p              200
&z              
&x
&y
&q
sizeof(no)      4
sizeof(p)       8
sizeof(q)       8
sizeof(x)       8
sizeof(y)       8
sizeof(z)       8
*p              11
***y            100
****z           100
**q             11 
***x            11
**x             100
*x              200
****y           11
*****z          11