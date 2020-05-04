How to Create a Dynamic Library (Linux)
To create a dynamic library in Linux, simply type the following command: gcc *.c -c -fPIC and hit return. This command essentially generates one object file .o for each source file .c . The -fPIC flag ensures that the code is position-independent. This means it wouldn’t matter where the computer loads the code into memory. Some operating systems and processors need to build libraries from position-independent code so that they can decide at runtime where they want to load it into memory. The -c options just ensures that each .o file isn’t linked yet.
Next, type in the following command: gcc *.o -shared -o liball.so (substitute your desired library name with all) and hit return. The wildcard * tells the compiler to compile all the .o files into a dynamic library which is specified by the -shared flag. The naming convention for dynamic libraries is such that each shared library name must start with lib and end with .so . Other than that though, let your imagination run free when considering names for your dynamic libraries.
Finally, we’ll need to export the path for libraries so that programs know where to look for them by executing the following command: export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
Using Dynamic Libraries (Linux)
The point of creating a dynamic library is to use it with other programs. You can compile your code as follows:
gcc -L test_code.c -lholberton -o test_code
In the above command it is worth noting that your source code, test_code.cin this case, needs to be listed before the -l flag. The expression, -lcombined with holberton tells the compiler to look for a dynamic library called libholberton.so, while the -L flag tells the compiler to look in the current directory for the library file. This is why it is important to use the standard format for naming that I described earlier. For instance if test_code.c was the following:
#include "holberton.h"
int main(void)
{
      _puts("Hello World!");
      return (0);
}
Typing and executing gcc -L test_code.c -lholberton -o test_code would generate an executable file called test_code. In order to accomplish this, the compiler looks through the library that is specified with the -l flag for the _puts function object code. Executing test_code like so: ./test_code would give us the following output: Hello World!. Now that you know how to create and use dynamic libraries, go and conquer the world!