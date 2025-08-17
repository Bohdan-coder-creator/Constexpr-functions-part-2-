int gradeTest();

/*We can see that the return value is an integer, but what does the integer mean? A letter grade? The number of questions missed? 
The student’s ID number? An error code? Who knows! The return type of int does not tell us much. If we’re lucky, documentation 
for the function exists somewhere that we can reference. If we’re unlucky, we have to read the code and infer the purpose.

Now let’s do an equivalent version using a type alias:*/

using TestScore = int;
TestScore gradeTest();