/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner input = new Scanner(System.in);
		int inputVar;
		inputVar = input.nextInt();
		while(inputVar!=42){
		System.out.println(inputVar);
		inputVar = input.nextInt();
		}
	}
}

