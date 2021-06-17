import java.util.Scanner;

class demo {
    int n;
    int i;
    int sum = 0;
    float avg = 0;

    demo(int n1) {
        n = n1;
    }

    public void numbers() {
        System.out.println("Enter " + n);
        for (int i = 1; i <= n; i++) {
            System.out.println(i);
        }
    }

    public void evennumbers() {
        System.out.println("Even numbers: ");
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                System.out.println(i + " ");
            }
        }
    }

    public void oddnumbers() {
        System.out.println("Odd numbers: ");
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0) {
                System.out.println(i + " ");
            }
        }
    }

    public void average() {
        for (int i = 1; i <= n; i++) {
            sum = sum + i;
        }
        avg= (float) sum / n;
        System.out.println("Average : "+ avg);
    }

}

class Thread1 extends Thread {
    Thread t;
    demo d;

    Thread1(demo d1) {
        d = d1;
        t = new Thread(this);
        t.run();
    }

    public void run() {
        d.numbers();
    }
}

class Thread2 extends Thread {
    Thread t;
    demo d;

    Thread2(demo d1) {
        d = d1;
        t = new Thread(this);
        t.run();
    }

    public void run() {
        d.evennumbers();
    }
}

class Thread3 extends Thread {
    Thread t;
    demo d;

    Thread3(demo d1) {
        d = d1;
        t = new Thread(this);
        t.run();
    }

    public void run() {
        d.oddnumbers();
    }
}

class Thread4 extends Thread {
    Thread t;
    demo d;

    Thread4(demo d1) {
        d = d1;
        t = new Thread(this);
        t.run();
    }

    public void run() {
        d.average();
    }
}

public class fourthread {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        demo d = new demo(n);
        Thread1 t1 = new Thread1(d);
        Thread2 t2 = new Thread2(d);
        Thread3 t3 = new Thread3(d);
        Thread4 t4 = new Thread4(d);
    }
}
