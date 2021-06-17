import java.util.*;

public class Main {
    public int main(int x, int y)
    {
        int temp;
        if(x > y)
        { 
            temp = x / y;
            return temp; 
        }
        else 
          return 0;   
    }

    public double main(double x, double y)
    {
        double temp;
        if(x > y)
        { 
            temp = x / y;
            return temp; 
        }
        else 
          return 0;   
    }

    public int main(int x) {
        return x;
    }

    public double main(double x) {
        return x;
    }

    public static void main(String[] args) {
        Main s = new Main();
        System.out.println(s.main(40, 20));
        System.out.println(s.main(30.5, 20.5));
        System.out.println(s.main(10));
        System.out.println(s.main(20.5));

    }
}
