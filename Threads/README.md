
## Thread Example

	thread1.c: Thread example program 

### Thread Assignment

	evenodd.c: WAP to create two threads, even thread print even number and odd thread print odd number simulataneously. 

## Thread Synchronization (Producer Consumer Problem)

### Not Thread-Safe

	prodcons-not-thread-safe.c (producer consumer problem using pthreads only): This is basic producer consumer example implement with pthreads with out synchronizaion mechanisums.
	Drawback: Data inconsistency, Data Loss, Dead Lock.

### Thread-Safe

	prodcons-binsem.c (producer consumer problem using pthreads and binary semaphores)
	
	prodcons-countsem.c (producer consumer problem using Pthreads and counting semaphores)
	This example implement 2 counting semaphores one is empty and another one is full. This examples works fine if one producer and one consumer.
