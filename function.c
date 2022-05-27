public class Main {
    public double raiseNumber (double num, double power){
        return (Math.pow(num,power));
    }
 
    public static void main(String []args) {
        Main obj = new Main(); // creating object for calling the method
        double result = obj.raiseNumber(5,3); //first invoking the method
        System.out.println("Result of (5^3): "+result);
        System.out.println("Result of (10^4): "+obj.raiseNumber(10,4)); //second invoking
    }
}
