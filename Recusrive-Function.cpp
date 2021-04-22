/*	Muhammad Uzair
	P16-6002
	Assignment #04  */

#include <iostream>
#include<cmath>
#include <string>

using namespace std;
struct node
    {
        node *next;
        int info;
    };

class r_LinkList
{
public:

    node *head = NULL;
    node *temp2 = NULL;
    node *temp = NULL;

    void insert(node *temp)
    {
        if(temp == NULL)
        {
            temp= new node;
            cin >> temp-> info;
            temp-> next = NULL;
            head = temp;
            temp2 = head;
            return;
        }



           if(temp-> next == NULL)
        {
            temp-> next = new node;
            cin >> temp-> next -> info;
            temp-> next -> next = NULL;
            return;
        }

        else
        {
            insert(temp-> next);
            return;
        }



    }
    


    void printList(node *temp)
    {
    	cout<<endl;
    	cout<<"\n";
        if(temp != NULL)
        {
            cout << temp -> info << " ";
        printList(temp -> next);
        }
        else
            return;

    }
    int factorial(int n)
{
	
    if(n == 0)
        return 1;
    else return n * factorial(n-1);
   
}

int powerFtn(int num, int power)
{
    if(power == 1)
        return num;
    else
        return num * powerFtn(num,power-1);
}
    void count(int n)
{
    if(n<=10)
    {
    	cout<<n<<endl;
    		n++;
    	count(n);
    
	}
	
	else 
	return ;
}
    
void printstars (int n)
{
    if(n == 1)
        cout << "*";
    else
    {
        cout << "*";
        printstars(n-1);
    }
}

void string_length()
	{
		int count=0;
		char str[20]="University";
		
		for(int i=0; str[i]!='\0'; i++)
		{
			count++;
		}
		cout<<count;
	}
	int r_Max(int arr[], int size)
{
    int max = arr[0];
 
    if(size == 1)
    {
        return arr[size-1];
    }
 
    else
        {
            r_Max(arr, size-1);
            if(arr[0] > arr[size-1])
                return arr[0];
 
            else
                arr[0] = arr[size-1];
                return arr[size-1];
        }
 
        return max;
}
int Fibonacci(int n)
{
if (n==0)
    return 0;
if (n==1)
    return 1;
return( Fibonacci(n-2) + Fibonacci(n-1) );
}

bool isPrime(int p, int i=2)
{
if (i==p) 

return 1;//or better  if (i*i>p) return 1;

if (p%i == 0) 


return 0;

return isPrime (p, i+1);
}

int sum (int num)
{ 
if (num==0)
return 0;
return (sum(num-1)+(num));
}

bool palindrome(string word)
{
    int length = word.length();

    string first = word.substr(0,1);
    string last = word.substr((length - 1), 1);

    if (first == last)
    {
        word = word.substr((0 + 1), (length - 2));
        cout << word << " " << word.length() << endl; 
        if (word.length() <= 1) return true;  
        palindrome(word);
    }
    else
        return false;
}

bool isVowel(char ch)
{
    ch = toupper(ch);
    return (ch=='A' || ch=='E' || ch=='I' ||
                        ch=='O' || ch=='U');
}

void decimalToHexadecimal(int num){
int n;
if(num==0){
    return;
}
else{
    n=num%16;
    if(n==10){
        decimalToHexadecimal(num/16);
    cout<<"A";
    }
    else if(n==11){
        decimalToHexadecimal(num/16);
    cout<<"B";
    }
    else if(n==12){
        decimalToHexadecimal(num/16);
    cout<<"C";
    }
    else if(n==13){
        decimalToHexadecimal(num/16);
    cout<<"D";

    }
    else if(n==14){
        decimalToHexadecimal(num/16);
    cout<<"E";

    }
    else if(n==15){
        decimalToHexadecimal(num/16);
    cout<<"F";
    }
    else{
        decimalToHexadecimal(num/16);
    cout<<n;

    }
}

}

int repeatedAddition(int m,int n){
if(m==1){
    return n;
}
else{
    return n+repeatedAddition(m-1,n);
}

}

int octalToDecimal(int num,int exp){
if(num==0){
    return 0;
}
else{
    return (num%10)*pow(8,exp)+octalToDecimal(num/10,exp+1);
}
}

int BinaryToDecimal(int num,int exp){
if(num==0){
    return 0;
}
else{
    return (num%10)*pow(2,exp)+BinaryToDecimal(num/10,exp+1);
}
}

void DecimalToBinary(int num){
if(num==0){
    return;
}
else{
DecimalToBinary(num/2);
cout<<(num%2);
}
}

int AukermannsFunc(int m,int n){
if(m==0){
    return n+1;
}
else if(n==0){
    return AukermannsFunc(m-1,1);
}
else{
    return AukermannsFunc(m-1,AukermannsFunc(m,n-1));
}


}
void reverseString(string str){
int size=str.length();
if(size==1){
    cout<<str<<endl;
}
else{
    cout<<str[size-1];
    reverseString(str.substr(0,size-1));
}

}

int GCD(int a,int b){
if(b==0){
    return a;
}
else{
    return GCD(b,a%b);
}

}

int C(int n,int r){
if(r==0){
    return 1;
}
else if(n==r){
    return 1;
}
else{
    return C(n-1,r-1)+C(n-1,r);
}
}

int countVovels(string str, int n)
{
    if (n == 1)
        return isVowel(str[n-1]);
    return countVovels(str, n-1) + isVowel(str[n-1]);
}


};



int main()
{
    r_LinkList ob;
    int num,power;
    int arr[5] = {7,11,3,9,1};
    int ans = ob.r_Max(arr,5);
    
    string word = "madams";

    
    ob.insert(ob.head);
    ob.insert(ob.head);
    ob.insert(ob.head);
    cout<<"Link List through Recursion"<<endl;
    ob.printList(ob.head);
     cout<<"Factorial using recursicve functions"<<endl;
     cout<<ob.factorial(5)<<endl;


 
    cout << "Enter number" << endl;
    cin >> num;
 
    cout << "Enter power" << endl;
    cin >> power;
 
    cout <<"Power of any number using recursion= " <<ob.powerFtn(num,power);
   

    cout<<"\nPrinting 10 integes using recursion"<<endl;
    ob.count(0);
   
   cout<<"\nPrinting stars thorugh recursion"<<endl;
    ob.printstars(5);
    
    cout<<"\nString length using recursion"<<endl;
    ob.string_length();

     
    cout << "\nLargest Element in array using recursion is " << ans;
    
    cout<<"\nFibonacci series using recursion= "<<ob.Fibonacci(8);

   cout<<"\nA recursive function to determine if an input is prime:"<<ob.isPrime(7);
   cout<<"\nRecursive solution to adding up numbers from 1 to any given number= "<<ob.sum(4);
   
   
    if (ob.palindrome(word) == true)
        cout << "\nWord is a palindrome!" << endl;
    else
        cout << "\nWord is not a palindrome..." << endl;

    cout<<"\nRecusrive function to check whether the input character is vowel or not= "<<ob.isVowel('t');
    cout<<"\n Recursive function for decimal to hexadecimal= ";
    ob.decimalToHexadecimal(10);
     
     cout<<"\n Recursive function for Repeated Addition= "<<ob.repeatedAddition(1,2);
     
     
     
     cout<<"\n Recursive function for decimal to binary= ";
     ob.DecimalToBinary(12);
     
     cout<<"\n Recursive function for Aukermanns function= "<<ob.AukermannsFunc(1,2);
     cout<<"\n Recursive function for reverse string = "<<endl;
     ob.reverseString("Uzair");
     
     
     cout<<"\nRecursive Function for GCD= "<<ob.GCD(2,3);
     
     cout<<"\nRecursive function for nCr= "<<ob.C(2,2);
     cout<<"\nRecursive function to count vowels= "<<ob.countVovels("String",3);
     
     
    return 0;
}


