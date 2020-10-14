public class Array_Add {
    public static void main(String[] args) {
        int i, j;
        int[][] k = new int[3][3];
        int a[][] = {{1,3,4}, {2,4,3}, {3,4,5}};
        int b[][] = {{1,3,4}, {2,4,3}, {1,2,4}};
        for (i = 0; i < 3; i++){
            for (j = 0; j < 3; j++){
                k[i][j] = a[i][j] + b[i][j];
                System.out.println(k[i][j] + " ");

            }
            System.out.println();
        }
    }
}
