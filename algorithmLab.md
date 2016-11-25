# Algorithm Lab Notes

## BUGs

### ceil

*   error: pass a integer, make result become smaller, leading to arr[idx] become segmentation fault
*   solution: pass a double, e.g n/2 => n/2.0, n/r/2 => n/r/2.0
*   solution: move all evaluation in function argument list out(this may leading error)

### n

n is not arr.size(), is hi - lo + 1

### zero

```cpp
return kth > 0 ? ... : 0;
```

### arr.size() < r

```cpp
return kth > 0 ? arr[kth - 1] : 0;
```

### -1 edges

*   If distance of edge is '-1', '<' or '>' won't work correctly
*   solution: use 'if' to judge distance of edge is infinite(-1) whether or not, and make it become the far most(largest)
