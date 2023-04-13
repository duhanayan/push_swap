# Push_Swap Project
Push_Swap is a sorting algorithm that uses two stacks. The algorithm works by transferring elements from one stack to the other in a sorted manner.

The goal of this project is to sort the given numbers in the stack in the least amount of steps possible. Only two stacks will be used during the sorting process and only a few specific commands will be used.

## Installation
To use the Push_Swap project, we first need to compile the project using the make command. After the compilation process is completed, you can use the project by using the following command:

`./push_swap arg1 arg2 arg3 ...`
Here, arg1, arg2, arg3, etc. represent the numbers that need to be sorted. These numbers should be given along with their initial order in the stack.

## Algorithm
The Push_Swap algorithm first calculates the number of steps required to sort the given numbers in ascending order. It then performs the most suitable movements to minimize this number of steps.

The working of the algorithm is as follows:

1. Place the given numbers in a stack.
2. Find the smallest element in the first stack and transfer it to the second stack using a series of commands until it is smaller than the largest element in the second stack.
3. Find the largest element in the second stack and transfer it to the first stack using a series of commands until it is smaller than the smallest element in the first stack.
4. Transfer the smallest element in the first stack to the second stack using a series of commands until it is smaller than the largest element in the second stack.
5. Repeat these steps, but when the elements in the first stack are sorted, transfer the elements from the second stack to the first stack and complete the process.
6. The Push_Swap algorithm requires only 2.5n movements for n numbers in the worst case. However, this calculation depends on the size of the stack and the commands used during the sorting process.

Commands
The Push_Swap algorithm uses only a few specific commands:

* `sa`: Swaps the top two elements in the first stack.
* `sb`: Swaps the top two elements in the second stack.
* `ss`: Combination of sa and sb commands. Swaps the top two elements in both stacks.
* `pa`: Removes the top element in the second stack and places it at the top of the first stack.
* `pb`: Removes the top element in the first stack and places it at the top of the second stack.
* `ra`: Rotates the elements in the first stack up by one.
* `rb`: Rotates the elements in the second stack up by one.
* `rr`: Combination of ra and rb commands. Rotates the elements in both stacks up by one.
* `rra`: Rotates the elements in the first stack down by one.
* `rrb`: Rotates the elements in the second stack down by one.
* `rrr`: Combination of rra and rrb commands. Rotates the elements in both stacks down by one.

By using these commands, the elements in the stack can be sorted in ascending order.
