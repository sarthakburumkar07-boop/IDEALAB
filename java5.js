// Online JavaScript compiler (editor)
// Write and run JavaScript online using this JS editor.
import java.util.Scanner;class PrimeNumber {    public static void main(String[] args) {        Scanner sc = new Scanner(System.in);        System.out.print("Enter a number: ");        int n = sc.nextInt();        boolean isPrime = n > 1;        for (int i = 2; i <= n / i; i++) {            if (n % i == 0) {                isPrime = false;                break;            }        }        if (isPrime)            System.out.println("Prime number");        else            System.out.println("Not a prime number");        sc.close();    } }
console.log("Try clicking the Run button.");
