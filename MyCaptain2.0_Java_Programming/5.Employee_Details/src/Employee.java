import java.util.Scanner;

public class Employee {
    public static void main(String[] args) {
        String[] name = new String[5];
        int[] year = new int[5];
        String[] address = new String[5];
        int n, i;

        System.out.println("Enter the no of employee details you wish to enter : ");
        Scanner p = new Scanner(System.in);
        n = p.nextInt();
        System.out.println(n);


        for (i = 0; i < n; i++){
            System.out.println("Enter the employee's name : ");
            Scanner q = new Scanner(System.in);
            name[i] = q.nextLine();
            System.out.println("Enter the employee's year of joining : ");
            Scanner r = new Scanner(System.in);
            year[i] = r.nextInt();
            System.out.println("Enter the employee's address : ");
            Scanner s = new Scanner(System.in);
            address[i] = s.nextLine();
        }
        System.out.println("\tName\t\tYear of Joining\t\tAddress");
        for (i = 0; i < n; i++){
            System.out.println("\t" + name[i] + "\t\t" + year[i] + "\t\t\t" + address[i]);
        }
    }
}
