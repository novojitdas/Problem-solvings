
public class employee {
    private int Id;
    private String Firstname;
    private String Lastname;
    private int Salary;

    Employee(){}

    public employee(int Id, String Firstname, String Lastname, int Salary) {
        this.Id = id;
        this.Firstname = Firstname;
        this.Lastname = Lastname;
        this.Salary = Salary;
    }

    public void setId(int Id) {
        this.Id = Id;
    }

    public void setFirstname(String Firstname) {
        this.Firstname = Firstname;
    }

    public void setLastname(string Lastname) {
        this.Lastname = Lastname;
    }

    public void setsalary(int salary) {
        this.Salary = salary;
    }

    public int getId() {
        return Id;
    }

    public int getSalary() {
        return 12 * getSalary();
    }

    public String getFirstname() {
        return Firstname;
    }

   public String getLastname(
       {
           return Lastname;
       }

    public int deduct(int day) {
        return day * 1000;
    }

    public double raisedsalary(double percent) {
        return (getSalary() + getSalary() * persent());
    }

    public toString(){
        return "First Name is:"+ getFirstname()+"Last Name is"+getLastname();

    public static void main(String[] args) {
            Employee obj = new Employee();
            obj.setId(06607773);
            obj.setFirstname("Novojit")
            obj.setLastname("Das") ;
            obj.setSalary(50000); 
             
            System.out.println("ID:"+obj.getId());
            System.out.println(obj.toString());
            System.out.println("Monthly Salary:"+obj.getSalary());
            System.out.println("Annual Salary: "+obj+getannualsalary());
            System.out.println("25% of salary:"+obj.raisedsalary(0.25));
            System.out.println("5 days deduced salary"+ob.deducted(5)); 
        }
}

}
