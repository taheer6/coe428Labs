1.  
From tower(5,2,3), the first recursve call is made by n-1, moving from the initial (from) tower to the spare tower.  
In this case, the 'from' tower would be (2) and spare is (1). 
The first recursion would end up being: towers(4,2,1). 

2.
To return to the initial invocation, it would take 5 recursive calls. Since n=5, in order to meet the condition
to end recursion, (n != 0), it would take 5 calls of n-1.

3. 
Once returned, Stdout will print the move of "2 3". The first move will be to move the first disk from tower 2 to tower 3.

4.
The second recursive tower will be invoked by: towers(3,2,3). 

Question: (5)
When 'towers(8,2,1)' is invoked, it will take 2^n - 1 steps to solve the algorithm perfectly, so with n=8, or 8 disks, it will take 
255 lines, meaning 255 steps.


Description:
In this lab, I was able to successfully run the 'gcc -o' command in terminal to get the program running. After that, seperating
stdout and sterr was not an issue for me. I was able to single out stderr and stdout both completely fine. As well as hiding both. 

When it came to modifying the main() class, I was able to modify it with no errors in the terminal. When no arguments are given after the 
inital 'towers' argc, it solves assuming n=3, from=1, dest=2. The algorithm also works fine when only sending in a numberDisks argument, and 
also when sending an argument for numberDisks, fromID and destID.