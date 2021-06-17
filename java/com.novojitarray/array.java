package com.novojitarray;

public class Array {

    private int[] items;
    private int count;

    public Array(int length) {
        items = new int[length];
    }

    public void insert(int item) {
        if (items.length == count) {
            int[] newItems = new int[count * 2];
            for (int i = 0; i < count; i++)
                newItems[i] = items[i];
            items = newItems;
        }

        items[count++] = item;

    }

    public void removeAt(int index) {
        if (index < 0 || index >= count)
            throw new IllegalArgumentException();
        for (int i = index; i < count; i++)
            items[i] = items[i + 1];
        count--;
    }

    public int indexOf(int item) {
        for (int i = 0; i < count; i++)
            if (items[i] == item)
                return i;

        return -1;

    }

    public int max() {
        int maxnum = items[0];
        for (int i = 1; i <= count; i++) {
            if (items[i] > maxnum)
                maxnum = items[i];
        }
        return maxnum;
    }

    public void reverse() {
        int rev = 0;
        int[] newItemsA = new int[rev];
        for (int i = count - 1; i >= 0; i--) {

            newItemsA[rev] = items[count];
            rev++;
        }
        for (int i = 0; i < count; i++) {
            System.out.println(newItemsA[rev]);
        }

    }

    public void print() {
        for (int i = 0; i < count; i++) {
            System.out.println(items[i]);
        }
    }

}