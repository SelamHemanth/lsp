Inter-Process Communication: Pipes.
----------------------------------

pipe1.c    -  A program that uses the function pipe to create a pipe.

pipe2.c    -  A program that passes data between the two halves of a forked process using pipe.

pipe3.c    -  A program that uses the functions fork and execl to create a child process and then
uses the function pipe to pass data from one to the other.

pipe4.c    -  The child process called by execl in pipe3.c.


fifo.c    -  A program that creates a named pipe using fifo.

fifo-prod.c, fifo-cons.c  -  Two programs that show how to pass data between unrelated processes using a fifo.

