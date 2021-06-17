import java.util.Scanner;

abstract class book {
    String title;

    abstract void setTitle(String s);

    String getTitle() {
        return title;
    }
}

class inputclass extends book {
    void setTitle(String s) {
        title = s;
    }
}

public class finalclass {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String title = sc.nextLine();
        inputclass book = new inputclass();
        book.setTitle(title);
        String t = book.getTitle();
        System.out.println("Title is: " + t);
    }
}