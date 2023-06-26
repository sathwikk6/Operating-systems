#include <stdio.h>
#define FILE_BLOCKS 100
int contiguousAllocation(int blockPosition) {
    return 1; // Only one disk I/O operation is required for contiguous allocation
}
int linkedAllocation(int blockPosition) {
    return 1; // Only one disk I/O operation is required for linked allocation
}
int indexedAllocation(int blockPosition) {
    if (blockPosition == 0 || blockPosition == FILE_BLOCKS - 1)
        return 2; // Two disk I/O operations are required for indexed allocation at the beginning or end
    else
        return 3; // Three disk I/O operations are required for indexed allocation in the middle
}
int main() 
{
    int blockPosition;
    printf("Enter the position of the block (0-%d): ", FILE_BLOCKS - 1);
    scanf("%d", &blockPosition);
    printf("Contiguous Allocation: %d disk I/O operations\n", contiguousAllocation(blockPosition));
    printf("Linked Allocation: %d disk I/O operations\n", linkedAllocation(blockPosition));
    printf("Indexed Allocation: %d disk I/O operations\n", indexedAllocation(blockPosition));
    return 0;
}
Output
