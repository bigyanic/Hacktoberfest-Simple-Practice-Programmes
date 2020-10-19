package JAVA;

import java.util.Arrays;

public class Gajendra_CustomStackImplementation {
    private int[] items = new int[5];
    private int count;

    public void push(int item) {
        if (count == items.length)
            throw new StackOverflowError();

        items[count++] = item;
    }

    public int pop() {
        if (isEmpty())
            throw new IllegalArgumentException();

        return items[--count];
    }

    public int peek() {
        if (isEmpty())
            throw new IllegalArgumentException();

        return items[count - 1];
    }

    public boolean isEmpty() {
        return count == 0;
    }

    @Override
    public String toString() {
        var content = Arrays.copyOfRange(items, 0, count);
        return Arrays.toString(content);
    }

    public static void main(String[] args) {
        var customStack = new Gajendra_CustomStackImplementation();
        customStack.push(10);
        customStack.push(20);
        customStack.push(30);
        System.out.println(customStack);
        System.out.println(customStack.pop());
        System.out.println(customStack.peek());
    }
}
