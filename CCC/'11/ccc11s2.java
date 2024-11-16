// import scanner library for input
import java.util.Scanner;

public class ccc11s2 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in); // define scanner class
        
        int correctAnswers = 0; // store the number of correct answers
        int N = Integer.parseInt(scan.nextLine()); // get the number of answers
        
        char[] studentAnswers = new char[N]; // define an array for student answers of size N

        for(int index = 0 ; index<N; index++){ // for loop, from 0 to N-1
            studentAnswers[index] = scan.nextLine().charAt(0); // get the input and store it in array at index i
        }

        for(int index=0; index<N; index++){ // for loop, from 0 to N-1
            char correctAnswer = scan.nextLine().charAt(0); // get the correct answer
            if(correctAnswer == studentAnswers[index]){ // if the correct answer is equal to the student's answer
                correctAnswers += 1; // add one to the number of correct answers
            }
        }

        System.out.println(correctAnswers); // print the number of correct answers
    }
}