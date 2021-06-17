class threethread extends Thread {
    private String input;
    private int second;

    threethread(String i, int s) {
        input = i;
        second = s;
    }

    public void run() {
        for (int i = 0; i < 1; i++) {
            System.out.println(input);
            try {
                Thread.sleep(second);
            } catch (Exception e) {
                System.out.println(e);
            }
        }

    }

    public static void main(String args[]) {
        threethread a = new threethread("Hi", 1000);
        threethread b = new threethread("Hello", 2000);
        threethread c = new threethread("Good Morning", 3000);
        a.run();
        b.run();
        c.run();
    }
}