# 0x1E. C - Search Algorithms

## [0-linear.c](./0-linear.c)
Write a function that searches for a value in an array of integers using the Linear search algorithm
- Prototype : `int linear_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the first index where `value` is located
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- Every time you compare a value in the array to the value you are searching, you have to print this value

## [1-binary.c](./1-binary.c)
Write a function that searches for a value in a sorted array of integers using the Binary search algorithm
- Prototype : `int binary_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the index where `value` is located
- You can assume that `array` will be sorted in ascending order
- You can assume that `value` won’t appear more than once in array
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray)

## [2-O](./2-O)
What is the `time complexity` (worst case) of a linear search in an array of size `n`?

## [3-O](./3-O)
What is the `space complexity` (worst case) of an iterative linear search algorithm in an array of size `n`?

## [4-O](./4-O)
What is the `time complexity` (worst case) of a binary search in an array of size `n`?

## [5-O](./5-O)
What is the `space complexity` (worst case) of a binary search in an array of size `n`?

## [6-O](./6-O)
What is the space complexity of this function / algorithm?
```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

