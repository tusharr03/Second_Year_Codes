import java.util.*;
class Lab_5_Q4
{
    int n;
    int arr[];

    public void read() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        n = sc.nextInt();
        arr = new int[n];
        System.out.println("Enter the elements: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        sc.close();
    }

    public void swap() {
        int max = 0, min = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > arr[max]) {
                max = i;
            }
            if (arr[i] < arr[min]) {
                min = i;
            }
        }
        int temp = arr[max];
        arr[max] = arr[min];
        arr[min] = temp;
    }

    public void display() {
        System.out.println("The array after swapping is: ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String[] args) {
        Lab_5_Q4 obj = new Lab_5_Q4();
        obj.read();
        obj.swap();
        obj.display();
    }
};