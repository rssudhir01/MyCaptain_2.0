public class Employee_detail {
    String[] name = {"Robert", "Sam", "John"};
    int[] year = {1994, 2000, 1999};
    String[] address = {"64C-WallsStreet", "68D-WallsStreet", "26B-WallsStreet"};
    public static void main(String[] args) {
        Employee_detail obj1 = new Employee_detail();
        System.out.println("\tName\t\tYear of Joining\t\tAddress");
        for (int i = 0; i < 3; i++){
            System.out.println("\t" + obj1.name[i] + "\t\t" + obj1.year[i] + "\t\t\t" + obj1.address[i] + "");
        }
    }
}
