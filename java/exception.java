
public class exception {
    public int g() {
        int num1 = 10;
        int num2 = 0;
        int result = 0;
        return result = num1 / num2;
    }

    public void f()
    {
        try{
            g();
            catch(ArithmeticException e){
                e.printStackTrace();
                System.out.println("Value Error");
            }
        }
    }

public static void main(String[] args) {
    exception obj = new exception;
    obj.f();
}
}
