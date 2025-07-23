## Chapter 2

- About data structures, how to compile programms, first program

- Getting a C programm to run requires some steps: Preprocessing (e.g. include statements with "#"), compiling, linking (linking the standard- or library functios to the output of the compiler). The linking step is done by gcc for example.

- Directives stand at the top of a C programm. They start with "#" and "supplement" the programm with additional headers and information. These can be libraries or also constant variables. We need this type of addition even for simple printing, because there are not standard functions for read or write like in other programming languages.

- Directives don't end with a ";".

- Statements can be function calls like printf() or "return"-statement. They always end with a semicolon.

- The "main" function is a critical part of a C program, it get's called automatically when the program is executed.

- The main function returns a value to the OS for error handling.

- A string literal is a series of characters enclosed in double quotation marks, like "apple"

- The "//" notation of the comment was introduced in C99 and terminates after a linebreak. The "/* */" combo preceeds this and ends if the last "*/" is reached.

- Arithmetics on floats might be slower than on ints. And floats maybe approximated when storing them, i.e. 0.1 -> 0.9999999987

- In C89 ALL declarations have to come before the first statement. In C99 this was changed that they have to be declared, before they are used.

- It is said in the book that it is best practice to have a succeeding "f" behind floats: "float foo = 0.5f". Otherwise the compiler might through an error. My search has shown, that this actually specifies the type of float, i.e. "double" or "float" ... and thus is needed to specify which type of float we want.

- A the value that is assigned to a variable is called the initializer. E.g. here ´´´int a = 8´´´ 8 is the initializer.

- If a preprocessor variable contains operators it should be contained within parantheses. For example ´´´ #define RECIPROCAL_OF_PI (1.0f / 3.14159f)

- A variable definition in the preprocessor is also called a macro definition.

- The "names" of variables are actually called identifiers.

- Each preprocessing directive needs to be in its own line.

- Otherwise space (tabs, newline, spaces) is **not** important, aslong as they don't obscure the meaning of tokens. (like in case of keyword "intmain" instead of "int main")

- Splitting string literals into several lines is not allowed.

- Putting the paranthesis of functions and methods into separate lines allows to add more to the functions wihtout searching for where the paranthesis intersects with another token.

- exit(0) and "return 0" are the same when used in the main function and which one to use is a matter of taste.

- In C89 if nothing is returned by main, it returns an undefined value. In C99 if it is "int main" it returns 0 and if it is not "int" it returns an unspecified value.

- The C standard denotes, that every comment has to be replaced by a whitespace, when compiling. So "int a/**/b = 0" becomes "int a b = 0".

- Old style comments can't be nested because the last token will terminated the previous comment. So this: "/* /* */ */" is illegal. Hoqever the newer C99 style comment "//" can nest everything that is contained inside the line, which makes them very useful.

- Floating point numbers that are not succeeded by "f" are stored as double, which has a higher precision (more memory usage).
