# IPC-Perf-Evaluation
Calculating performance specially IPC for printf for large files

First Trial:_
Using Parallelism so I think that will lower the number of cycles against the number of instructions that will be the same but after implementation of cilk plus to do the parallelism I found out that the overhead migrations that happen between threads overcome the number of cycles I reduced by using this method, the maximum IPC = 0.75.

Second Trial:_
Using loop unrolling with adding to a matrix random values, but because of gcc optimizations so the additions are all optimized and most of the iterations are turned into one equation so the number of instructions decreased so much against the number of cycles, the maximum IPC = 1.25.

Third Trial:_
Reading file lines, here we forced the gcc to accept the iterations so it can't optimize it anymore and here the number of instructions increase by increasing the number of lines in a file, and the number of cycles increase but not as much as the increase in instructions, the maximum IPC = 1.75. but with more lines I expect that we can achieve more than 2.47.

This assignment introduced me to alot of performance analysis that will help me alot, but I suggest that the best that if we had a code to optimize and try to achieve the same result with higher IPC instead of trying to get any non useful code.

