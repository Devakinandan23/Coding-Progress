Block Swap Algorithm
  // The Block Swap Algorithm is used to rotate an array by a specific number of positions. It divides the array into two blocks and swaps the blocks to achieve the desired rotation. Here's a Java code implementation of the Block Swap Algorithm:

```java
public class BlockSwapAlgorithm {
    public static void swap(int[] arr, int start, int end, int d) {
        for (int i = 0; i < d; i++) {
            int temp = arr[start + i];
            arr[start + i] = arr[end + i];
            arr[end + i] = temp;
        }
    }

    public static void rotate(int[] arr, int d) {
        int n = arr.length;
        if (d == 0 || d == n)
            return;

        if (d < 0) {
            d = n + d; // Convert negative rotation to positive
        }

        if (d < n - d) {
            swap(arr, 0, n - d, d);
            rotate(arr, d);
        } else {
            swap(arr, 0, d, n - d);
            rotate(arr, n - d);
        }
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5, 6, 7};
        int d = 3; // Number of positions to rotate

        System.out.println("Original Array: " + Arrays.toString(arr));

        rotate(arr, d);

        System.out.println("Rotated Array: " + Arrays.toString(arr));
    }
}
```

// In this example, the `swap` method is used to swap `d` elements between `start` and `end` indices in the array. It iterates `d` times and performs the swapping using a temporary variable.

// The `rotate` method is the main implementation of the Block Swap Algorithm. It takes the array `arr` and the number of positions to rotate `d` as inputs. The method first checks if `d` is zero or equal to the length of the array. If so, there is no need to rotate the array, and the method returns.

// If `d` is negative, it converts the negative rotation to positive by adding `n` (length of the array) to `d`.

// Next, it checks whether to perform a normal rotation (if `d` is less than `n-d`) or a reverse rotation (if `d` is greater than or equal to `n-d`). The normal rotation swaps the first `d` elements with the last `d` elements, while the reverse rotation swaps the last `n-d` elements with the first `d` elements.

// The `swap` method is called within the `rotate` method to perform the necessary block swaps.

// In the `main` method, we provide an example array `arr` and the number of positions to rotate `d`. We call the `rotate` method to perform the rotation and then print the original and rotated arrays using `Arrays.toString()`.

// You can modify the values of `arr` and `d` to rotate different arrays by a different number of positions.
