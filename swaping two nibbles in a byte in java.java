// To swap two nibbles in a byte in Java, you can use bitwise operators. Here's a code example that demonstrates this:

```java
public class SwapNibbles {
    public static byte swapNibbles(byte b) {
        // Extract the upper nibble and shift it to the right
        byte upperNibble = (byte) ((b & 0xF0) >> 4);

        // Extract the lower nibble and shift it to the left
        byte lowerNibble = (byte) ((b & 0x0F) << 4);

        // Combine the swapped nibbles
        byte swappedByte = (byte) (upperNibble | lowerNibble);

        return swappedByte;
    }

    public static void main(String[] args) {
        byte b = 0b11011011; // Binary representation of a byte

        System.out.println("Original byte: " + Integer.toBinaryString(b));
        
        byte swappedByte = swapNibbles(b);
        System.out.println("Swapped byte: " + Integer.toBinaryString(swappedByte));
    }
}
```

// In this example, the `swapNibbles` method takes a byte `b` as input and returns the byte with its nibbles swapped.

// To swap the nibbles, we use bitwise operators. First, we extract the upper nibble by performing a bitwise AND operation with the value `0xF0` (11110000 in binary) and then shifting the result 4 bits to the right. This isolates the upper nibble and moves it to the lower nibble position.

// Next, we extract the lower nibble by performing a bitwise AND operation with the value `0x0F` (00001111 in binary) and then shifting the result 4 bits to the left. This isolates the lower nibble and moves it to the upper nibble position.

// Finally, we combine the swapped nibbles by performing a bitwise OR operation between the upper nibble and the lower nibble.

// In the `main` method, we provide an example byte `b` with its binary representation. We call the `swapNibbles` method to swap the nibbles and store the result in the `swappedByte` variable. We then print the original byte and the swapped byte to the console using `Integer.toBinaryString()` to display their binary representations.

// You can modify the value of `b` to swap the nibbles of different bytes and observe the result.
