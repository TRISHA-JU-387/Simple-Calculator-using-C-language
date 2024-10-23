


#include<stdio.h>
#include<math.h>
void add();
void subsraction();
void division();
void multiplication();
void equation();
void Simpleaddition();

void Advancedaddition();
void Matrixaddition();
void Miscellaneous();
void area();
void triangle();
void rectangle();
void trapezium();
void circle();
void stat();
void  simplesubstract();
void Adifference();
void simpledivision();
void AdvanceDivision();
void simplemultiplication();
void modulomultiplication();
void matrixmultiplication();
void Exponentiation();
void simpleequation();
void complexequation();
void age();
void stat();
long long int findmin(long long int a[],long long int N);
long long int findmax(long long int a[],long long int N);
double Avg(long long int a[],long long int N);
long long int uniqueelement(long long int a[],long long int N);
void findMostFrequentElements(long long int a[], long long int N);

 double calculateVariance(long long int  a[], long long int N) ;

double calculateMedian(long long int a[],long long  int N);

int main()
{
    int choice;
    while(1){

    printf("           Main Menu\n");
    printf("Which operation you would like to perform?\n");
    printf("Press 1 for addition\n");
    printf("Press 2 for subtract\n");
    printf("Press 3 for divide\n");
    printf("Press 4 for multiply\n");
    printf("Press 5 for solving equation\n");
    printf("Press 6 for Miscellaneous\n");
    printf("Press 7 for Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        add();
        break;
    case 2:
        subsraction();
        break;
    case 3:
        division();
        break;
    case 4:
        multiplication();
        break;
    case 5:
        equation();
        break;
    case 6:
        Miscellaneous();
        break;
    case 7:
        printf("Thank You\n");
        return 0;

    default:
        printf("Sorry\nYour choice is invalid\n\n\nTry again\n");
        break;
    }}
    return 0;
}
void add()
{
    int choice;
    while(1)
    {
        printf("         Addition Menu\n");

    printf("Which type of addition you would like to perform?\n");
    printf("Press 1 for Simple addition\n");
    printf("Press 2 for Advanced addition\n");
    printf("Press 3 for Matrix addition\n");
    printf("Press 4 for Returning to the Main Menu\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        Simpleaddition();
        break;
    case 2:
        Advancedaddition();
        break;
    case 3:
        Matrixaddition();
        break;
    case 4:
        return;
    default:
        printf("Sorry\nYour choice is invalid\n");


        }
    }
}
void Simpleaddition()
{
    double a,b;
    printf("Enter any two number\n");
    scanf("%lf %lf",&a,&b);
 // sum in 2 number
    double sum =a+b;
    printf("summation of two numbers: %lf + %lf = %lf\n",a,b,sum);

}

void Advancedaddition()
{
    int i,N;
    printf("How many numbers you want to add?\n");
    scanf("%d",&N);
    printf("Enter numbers\n");
    double sum=0,num;
    // sum in N number
    for(i=0;i<N;i++)
    {
        scanf("%lf",&num);
        sum=sum+num;

    }
    printf("Total sum = %lf\n",sum);
}

void Matrixaddition()
{
 long long  int N1,M1,N2,M2;
 long long   int i,j;
    int N,M;
    printf("Enter the number of rows and colums of the matrix1:\n");
    printf("Number of rows?\n");
    scanf("%lld",&N1);
    printf("Number of colums?\n");
    scanf("%lld",&M1);
    printf("Enter the number of rows and colums of the matrix2:\n");
    printf("Number of rows?\n");
    scanf("%lld",&N2);
    printf("Number of colums?\n");
    scanf("%lld",&M2);



   long long int Matrix1[N1][M1];
  long long  int Matrix2[N2][M2];
   long long int sum[N1][M1];
// if matrix addition condition is true
if(N1==N2 && M1==M2)
   {
     N=N1;
     M=M1;

    printf("Enter the elements of 1st matrix:\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            scanf("%d",&Matrix1[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix:\n");

    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            scanf("%d",&Matrix2[i][j]);
        }
    }
    // print 1st matrix
    printf("1st matrix\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf(" %d",Matrix1[i][j]);
        }
        printf("\n");
    }
    // print 2nd matrix
    printf("2nd matrix\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf(" %d",Matrix2[i][j]);
        }
        printf("\n");
    }
    // addition of matrix

    // outer for loop use to row
     for(i=0;i<N;i++)
    {
        // inner for loop use to column
        for(j=0;j<M;j++)
        {
            sum[i][j]=Matrix1[i][j]+Matrix2[i][j];
        }
    }
    // print sum of matrix
    printf("Total sum of the matrixes:\n");
     for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf(" %d",sum[i][j]);
        }
        printf("\n");
    }

   }
   // matrix addition condition is not true
   else
   {
       printf("Matrix addition is not possible\n");
   }
}

void subsraction()
{
    int choice;
    while(1)
    {
        printf("        Subtraction Menu  \n");
        printf("Which type of Subtraction you would like to perform? \n");
        printf("Press 1 for Simple Subtraction\n");
        printf("Press 2 for Absolute difference \n");
        printf("Press 3 for Returning to the Main Menu\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
              simplesubstract();
            break;
        case 2:
            Adifference();
           break;
        case 3:
            return ;
        default:
            printf("Sorry\nYour choice is invalid\n\n\nTry again\n");
        break;
        }
    }
}
// absolute difference function
void Adifference()
{


    double a,b,c,d;

    printf("Enter two numbers\n");

    scanf("%lf %lf",&a,&b);

    c=a-b;
// subtraction is find positive value
    if(c>0){


    printf("Absulate Difference of the two numbers=%lf\n",c);
    }
// subtraction is find negative value
    else if(c<0)

{   // negative value turn to positive to multiply by -1

    d=c*(-1);

    printf("Absulate Difference of the two numbers=%lf\n",d);
    }
// subtract value is find zero
else if(c==0)
{
    printf("Absulate Difference of the two numbers=%lf\n",c);
}


}
void  simplesubstract()
{
    double a,b;

    printf("Enter two numbers\n");

    scanf("%lf %lf",&a,&b);
// subtract in 2 number
    double c=a-b;

    printf("Subtraction of two numbers is =%lf\n",c);


}
void division()

    {
    int choice;
    while(1)
    {
        printf("         Division Menu\n");
        printf("Which type of division you would like to perform? \n");
        printf("Press 1 for Simple division \n");
        printf("Press 2 for Advanced division  \n");
        printf("Press 3 for Returning to the Main Menu\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
          simpledivision();
          break;
        case 2:
           AdvanceDivision();
          break;
        case 3:
            return ;
        default:
             printf("Sorry\nYour choice is invalid\n\n\nTry again\n");
        break;


        }
    }
}

void simpledivision()

{


    double a,b,c;

    printf("Enter numerator\n");

    scanf("%lf",&a);

    printf("Enter Denominator\n");

    scanf("%lf",&b);
    // denominator find zero , than user have to say input again
    while(b==0)
    {
        printf("\nInvalid Denominator\n");
        printf("\nEnter values again\n");
        printf("\nEnter numerator\n");
        scanf("%lf",&a);
    printf("\nEnter Denominator\n");

        scanf("%lf",&b);
    }
// find quotient
    c=a/b;

    printf("\nQuotient=%lf\n",c);




}
void AdvanceDivision()
{


    long long int a,b;


    printf("Enter numerator\n");

    scanf("%lld",&a);

    printf("Enter denominator\n");

    scanf("%lld",&b);
    // if find denominator is zero , user have to say input value again
        while(b==0)
    {
        printf("\nInvalid Denominator\n");
        printf("\nEnter values again\n");
        printf("\nEnter numerator\n");
        scanf("%lld",&a);
    printf("\nEnter Denominator\n");

        scanf("%lld",&b);
    }
// print quotient and reminder
    printf("Quotient=%lld\n",(a/b));

    printf("Remainder=%lld\n",(a%b));


}
void multiplication()

{
    int choice;
    while(1)
    {
        printf("          Multiplication Menu\n");
        printf("Which type of Multiplication you would like to perform? \n");
        printf("Press 1 for Simple Multiply\n");
        printf("Press 2 for Modulo Multiply\n");
        printf("Press 3 for Matrix Multiplication\n");
        printf("Press 4 for Exponentiation \n");
        printf("Press 5 for Returning to the Main Menu\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
          simplemultiplication();
          break;
        case 2:
           modulomultiplication();
          break;
        case 3:
            matrixmultiplication();
            break;
        case 4:
            Exponentiation();
            break;
        case 5:
            return ;
        default:
             printf("Sorry\nYour choice is invalid\n\n\nTry again\n");
        break;


        }
    }
}
void simplemultiplication()
{


    double a,b,c;

    printf("Enter two numbers:\n");

    scanf("%lf %lf",&a,&b);
// formula of multiplication
    c=a*b;

    printf("Multiplication Result=%lf\n",c);

}

 void modulomultiplication()
 {


    long long int a,b,c,d;


    printf("Enter three numbers :\n");


    scanf("%lld %lld %lld",&a,&b,&c);
// formula of modulo multiplication

    d=((a%c)*(b%c))%c;


    printf("Modulo Multiplication = %lld\n",d);


}
void matrixmultiplication()
{

   int R1,C1,R2,C2 ;
 printf("\nEnter the row number of first matrix=");
 scanf("%d",&R1) ;
 printf("\nEnter the column number of first matrix=");
 scanf("%d",&C1) ;
 printf("\nEnrer the row of second matrix=") ;
 scanf("%d",&R2) ;
 printf("\nEnter the column of second matrix=") ;
 scanf("%d",&C2) ;
 // matrix multiplication condition is not true
 while(C1!=R2)
 {
      printf("\nError!Enter the culums and rows again\n");
      printf("\nEnter the row number of first matrix=");
 scanf("%d",&R1) ;
 printf("\nEnter the column number of first matrix=");
 scanf("%d",&C1) ;
 printf("\nEnrer the row of second matrix=") ;
 scanf("%d",&R2) ;
 printf("\nEnter the column of second matrix=") ;
 scanf("%d",&C2) ;}

 int A[R1][C1] , B[R2][C2] ,i,j,k;
// input 1st matrix element
  printf("\nEnter the elememts of 1st matrix:");
  for(i=0 ; i<R1 ; i++){
   for(j=0 ; j<C1 ; j++){
    printf("\nA[%d][%d]=",i,j);
    scanf("%d",&A[i][j]);
   }
  }
  // input 2nd matrix element
  printf("\nEnter the elements of 2nd matrix:") ;
  for(i=0 ; i<R2 ; i++){
   for(j=0 ; j<C2 ; j++)
   {
    printf("\nB[%d][%d]=",i,j);
    scanf("%d",&B[i][j]) ;
   }
  }
// print 1st matrix
  printf("\n1st matrix :\n");
   for(i=0 ; i<R1 ; i++){
    for(j=0 ; j<C1 ; j++){
     printf("%d ",A[i][j]) ;
    }
    printf("\n") ;
   }
   //peint 2nd matrix
   printf("\n2nd matrix :\n") ;
   for(i=0 ; i<R2 ; i++){
    for(j=0 ; j<C2 ; j++){
     printf("%d ",B[i][j]) ;
    }
    printf("\n") ;
   }
   // matrix multiply and print the multiply matrix
   int result ;
  printf("\nMatrix multiplication :\n");
  // this loop use to iterate 1st matrix row
  for(i=0 ; i<R1 ; i++){
        // this loop use to iterate 2nd matrix column
   for(j=0 ; j<C2 ; j++){
    result=0 ;
  // this loop iterate 1st matrix column
    for(k=0 ; k<C1 ; k++){
     result= result+A[i][k] *B[k][j];
    }
    printf("%d ",result) ;
   }
   printf("\n");
  }







}
void Exponentiation()
{

    long long int  base, exponent, modulo;
    printf("Enter base: ");
    scanf("%lld", &base);

    printf("Enter exponent: ");
    scanf("%lld", &exponent);

    printf("Enter modulo: ");
    scanf("%lld", &modulo);
    //this variable store final value is exponential
  long long  int result = 1;
// if exponential is greater than 0 , loop is continue
    while (exponent > 0) {
            // if reminder is find 1
        if (exponent % 2 == 1) {
            result = (result * base) % modulo;
        }

        exponent = exponent / 2;
        base = (base * base) % modulo;
    }
// print final result
    printf("Result: %lld\n", result);
}

void equation()
{
    int choice;
    while(1)
    {
        printf("        Equation Solving Menu\n");
        printf("Which type of Equation Solving you would like to perform? \n");
        printf("Press 1 for Simple Equation \n");
        printf("Press 2 for Complex Equation \n");
        printf("Press 3 for Returning to the Main Menu\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
          simpleequation();
          break;
        case 2:
           complexequation();
          break;

        case 3:
            return ;
        default:
             printf("Sorry\nYour choice is invalid\n\n\nTry again\n");
        break;


        }
    }
}
void simpleequation()
{
long long 	int a,b,c,d,e,f ;
	double x,y ;
	printf("\n\nProvide the value a,b,c according to the format ax+by=c  where a,b,c must be integer: \n");
	scanf("%lld %lld %lld",&a,&b,&c);
	printf("\nProvide the value d,e,f according to the format dx+ey = f where d,e,f must be integer:  \n");
	scanf("%lld %lld %lld",&d,&e,&f);
	printf("\n\t%lldx+(%lld)y=%lld\n\t%lldx+(%lld)y=%lld\n",a,b,c,d,e,f);
	// if a,d and b,e equal this condition is true ,they have no solution .
	if( (a==d && b==e ) || (a/d)==(b/c)){
		printf(" This two equation have No solution\n");
	}
	// if this condition is not true then they have a unique solution ,go to else and print value
	else{
	x=(double)((b*(-f))-(e*(-c)))/((a*e)-(d*b)) ;
	y=(double)((d*(-c))-(a*(-f)) )/((a*e)-(d*b));
	printf("\nThe value of x is= %lf\nThe value of y is= %lf\n",x,y) ;
	}

}
void complexequation()
{
long long int  a, b, c ;
 double    D, x1, x2, realPart, imagPart;
    printf("\n\nEnter coefficients a, b and c according to the format ax^2 + bx + c = 0  where a , b and c must be integer : \n");
    scanf("%lld %lld %lld", &a, &b, &c);

printf("\n\t%lldx^2 +(%lld)x +%lld =0 \n",a,b,c);
 // find  discriment in complex equation
    D = b * b - 4 * a * c;

    // condition for real and different roots
    if (D> 0) {
        x1 = (-b + sqrt(D)) / (double)(2 * a);
        x2 = (-b - sqrt(D)) / (double)(2 * a);
        printf("\nX1 = %lf and X2 = %lf\n", x1, x2);
    }

    // condition for real and equal roots
    else if (D == 0) {
        x1 = x2 = -b / (double)(2 * a);
        printf("\nX1 = X2 = %lf\n", x1);
    }

    // if roots are not real
    else {
        realPart = -b /(double) (2 * a);
        imagPart = sqrt(-D) /(double) (2 * a);
        printf("\nx1 = %lf  + % lf i and x2 = %lf - %lf i\n", realPart, imagPart, realPart, imagPart);
    }
}
void Miscellaneous()
{
    int choice;
    while(1){
    printf("          Miscellaneous Menu\n");
    printf("Which type of Subtraction you would like to perform?\n");
    printf("Press 1 for Area Calculator\n");
    printf("Press 2 for Age Calculator\n");
    printf("Press 3 for Statistics\n");
    printf("Press 4 for Returning to the Main Menu\n");
    scanf("%d",&choice);


        switch(choice)
        {
        case 1:
            area();
            break;
        case 2:
            age();
            break;
        case 3:
            stat();
            break;
        case 4:
            return;
        default:
            printf("Sorry\nYour choice is invalid\n");
            break;
        }
    }
}
 void area()
{
    int choice;
    while(1)
    {
         printf("      Area Calculator Menu\n");
    printf("Which type of Subtraction you would like to perform?\n");

    printf("Press 1 for Triangle\n");
    printf("Press 2 for Rectangle\n");
    printf("Press 3 for Trapezium\n");
    printf("Press 4 for Circle\n");
    printf("Press 5 for Returning to the Miscellaneous Menu\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        triangle();
        break;
    case 2:
        rectangle();
        break;
    case 3:
        trapezium();
        break;
    case 4:
        circle();
        break;
    case 5:
        return;
    default:
        printf("Sorry\nYour choice is invalid\n");
        break;
        }
    }
}
void triangle()
{
    long long int a,b,c;
    double s,area;
    printf("Enter the length of three sides of triangle\n");
    printf("Enter a: \n");
    scanf("%lld",&a);
    printf("Enter b: \n");
    scanf("%lld",&b);
    printf("Enter c: \n");
    scanf("%lld",&c);
    // valid triangle condition
    if(a+b>c && b+c>a && a+c>b)
    { // formula
        s=(a+b+c)/2.0;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area of the triangle : %lf\n",area);
    }
    // triangle is not valid
    else
    {
        printf("This triangle is not possible .\n");
    }

}
void rectangle()
{
    long long int a,b;
    long long int area;
    printf("Enter the length of two sides of rectangle:\n");
    printf("Enter the value of a:\n");
    scanf("%lld",&a);
    printf("Enter the value of b:\n");
    scanf("%lld",&b);
    // a is length and b is width which can not zero
    if(a>0 && b>0)
    {   // Formula to calculate area
        area=a*b;
        printf("Area of rectangle  = %lld\n",area);
    }
    else
    {  // if length or width or both is zero
        printf("Invalid ... Try again.\n");
        rectangle() ;
    }

}

void trapezium()
{
  long long int a,b,c,d ,A,B,C,D,E;
   printf("Enter the length of two parallel sides of trapezium:\n");
   printf("Enter a= ");
   scanf("%lld",&a);
   printf("Enter c= ");
   scanf("%lld",&c);

   printf("\nEnter two other sides of trapezium:\n") ;
   printf("Enter b= ") ;
   scanf("%lld",&b);
   printf("Enter d= ");
   scanf("%lld",&d);
   // user input valid value of 4 sides
   if(a>0 && b>0 && c>0 && d>0){
   A = a+b-c+d ;
   B =-a+b+c+d ;
   C = a-b-c+d ;
   D = a+b-c-d ;
   E = pow (a-c , 2) ;
   double H = (double)(A*B*C*D)/(4*E) ;
   double h = sqrt(H) ;

   double area=(a+c)*0.5*h;
   printf("Area of trapezium = %lf\n",area);

   }
   //user input any unvalid value of 4 sides
   else{

     printf("\nInvalid value ...Try again\n");
     trapezium () ;
   }
}
void circle()
{
    long long int R;
    double area;
    printf("Enter the radius of circle:\n");
    scanf("%lld",&R);
    // radius can not zero
    if(R !=0){
    area=3.14159*R*R;
    printf("Area of the circle %lf\n",area);
    }
    // if user put unvalid value of radius
    else {
        printf("\nInvalid...Try again\n") ;
        circle() ;
    }
}
void stat()
{
long long int N,i;
    printf("Enter the value of N:\n");
    scanf("%lld",&N);

    long long int a[N];
    printf("Enter the numbers :\n");
    for(i=0;i<N;i++)
    {
        scanf("%lld",&a[i]);
    }
    long long int r1=findmin(a,N) ;
    	printf("\nMinimum=%lld\n",r1) ;
    long long int r2=findmax(a,N);
    	printf("Maximum=%lld\n",r2) ;

    double r3=Avg(a,N);
    	printf("Average =%lf\n",r3);

       findMostFrequentElements(a,N);

    long long int r4=uniqueelement(a,N)	;
    printf("total number of unique elements = %lld\n",r4);
    double r5=calculateMedian(a,N);
    printf("Median=%lf\n",r5);

      double r6= calculateVariance(a,N);
      printf("Variance=%lf\n",r6);



}
void age()

{

	long long	int cd,cm,cy;
	long long	int bd,bm,by;
	long long		int day,mon,year;
	printf("\nEnter the birth date : ");
		scanf("%lld/%lld/%lld",&bd,&bm,&by);
    printf("\nEnter the current date : ") ;
		scanf("%lld/%lld/%lld",&cd,&cm,&cy);
		if(bd>0 && bd<32 && cd>0 && cd<32 && bm>0 && bm<13 && cm>0 &&cm<13 && cy!=0 && by !=0){
		if(cd<bd){
     // if birth day is greater than current day , take 1 month = 30 day in current month
			cm-=1;
			// find day
			day=(cd+30)-bd;
		}
		else{
                // if current day is greater than birth day
			day=cd-bd;
		}
		if(cm<bm){
		    // if birth month is greater than current month, take 1 year=12 month in current month
			cy-=1;
			// find month
			mon=(cm+12)-bm;
		}
		else{
                // if current month is greater than birth month
			mon=cm-bm;
		}
		// if current year is greater than birth year
		year= cy-by;
		// if user input any unvalid number than we find negative day month year which is not possible
		if(year<0 && year!=0 || mon<0 || day<0){
		   printf("Invalid birth date\n\n") ;
		}
		// when we find valid day , month , year
		else{
			printf("\n\t Age = %lld Year %lld Month %lld Day.\n\n",year ,mon,day);
		}
		}
		else{
          // user input unvalid month ,day , year
            printf("Invalid Date ,Try again ....\n\n");
            // call again age function and take value
            age();
		}
}

long long int findmin(long long int a[],long long int N)
{   // assume a[0] is minimum value
    long long int min=a[0];
    int i;
	for(i=1 ; i<N; i++){
		if(min>a[i])
		{  // if a[i] is less than a[0]
		    min=a[i];}
	}

	return min;
}
long long int findmax(long long int a[],long long int N)
{
  long long int max=a[0];
  int i;

	for(i=1 ; i<N;i++){
            // if a[i] is greater than a[0]
		if(max<a[i])
		max=a[i] ;
	}

	return max;


}
double Avg(long long int a[],long long int N)
{
    double sum=0;

    double avg;

    int i;

for(i=0;i<N;i++)

{
   // we find all elements some use in a loop

    sum=sum+a[i];}

  // find  sum and divide by size in array
   avg=sum/N;


    return avg;

}

void findMostFrequentElements(long long int a[], long long int N) {
   long long  int b[N]  ,maxFrequency = 0, k = 0 ,i, j;

 // outer loop use to take one by one value to compare
    for ( i = 0; i < N; i++) {
        int count = 1;// count take 1 if the element is only occur in 1 time count value is 1 , if the value occur more time count value is increase
        // innner loop use to compare element
        for ( j = i + 1; j < N; j++) {
                // if a[i] value is equal in any value of array,condition is true and count++
            if (a[i] == a[j]) {
                count++;
            }
        }
        // if count value is greater than max frequency
        if (count > maxFrequency) {
                // maxfrequency value is update
            maxFrequency = count;
        // frequent value store in b array , k is variable in b array
            k = 0;
            // 1st frequent value store the array b
            b[k] = a[i] ;
        }
        // if we find same count value which is equal in maxfrequency value
        if (count == maxFrequency) {
                // value of k is increase and store another frequency value
            b[k++] = a[i];
        }
    }


// if we cannot mind no most frequent value all value occur in one time so original array size and frequent array size is same
if(k==N){
    printf("\nFrequency = No most frequent element found. All the elements occur in one time\n\n");
}
else{
        // if we find most frequent element
            printf("\nTotal most frequent element %lld\n",k) ;
            printf("\nMost frequent elements: ");
//print most frequent element which store in array  b
            for (int i = 0; i < k; i++) {
                printf("%lld ", b[i]);
            }
            printf("\n");

}
   return ;
}




long long int uniqueelement(long long int a[],long long int N)
{
    int count=0;
    int i,j;
    //inner loop use to  take one value of array
    for(i=0;i<N;i++)
    {
          // outer loop use to compare value

            for(j=i+1;j<N;j++)
            {    //if we find any frequent value this loop is break because we take one time occur value
                if(a[i]==a[j])
                {
                    break;
                }
            }
            // if we find any frequent value j can not reach the N number
            // if inner loop compare and find no frequent value so inner loop can not break and reach last value N
        if(j==N)
        {  // count unique value
            count++;
        }
    }
    //total unique value
    return count;
}
double calculateMedian(long long int a[],long long  int N) {
    // Sort the array
    long long int i,j,temp ;
    for ( i = 0; i < N - 1; i++) {
        for ( j = 0; j < N- i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Calculate the median
    if (N% 2 == 0)//array size even
        {
        return (double)(a[N / 2] + a[N / 2 - 1]) / 2;
    } else
    // array size is odd
     {
        return a[N/ 2];


    }
}
double calculateVariance(long long int  a[], long long int N) {

  long long  int sum = 0 ,i;
  double mean ;
    for ( i = 0; i < N; i++) {
            // find sum of all elements
        sum += a[i];
    }
    // find mean value
    mean = (double)sum / (N);



    double variance = 0;

    for ( i = 0; i < N; i++) {

            //  subtract mean value in all array element and calculate power and sum all element
        variance += pow(a[i] - mean, 2);
    }

    return variance / (N);

}
