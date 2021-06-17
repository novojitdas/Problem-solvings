class person {
    private String name;

    person(String n) {
        name = n;
    }

    protected String getName() {
        return name;
    }

}

class Employee extends person {
    private double annualsalary;
    private int joiningyear;
    private String nationalinsurancenumber;

    Employee(String n, double s, int y, String nu) {
        super(n);
        annualsalary = s;
        joiningyear = y;
        nationalinsurancenumber = nu;
    }

    public double getAnnualsalary() {
        return annualsalary;
    }

    public int getJoiningyear() {
        return joiningyear;
    }

    public String getNationalinsurancenumber() {
        return nationalinsurancenumber;
    }

}

class Employeetest {
    public static void main(String[] args) {
        Employee ob = new Employee("ABC", 200000, 2019, "N458");

        System.out.println(ob.getName());
        System.out.println(ob.getAnnualsalary());
        System.out.println(ob.getJoiningyear());
        System.out.println(ob.getNationalinsurancenumber());
    }
}