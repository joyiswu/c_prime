#include <iostream>
#include <cstring>
#include <string>

// array 4.1
void arrayone()
{
    using namespace std;
    int yams[3] = {7,8,6};

    int yamscost[3] = {20, 30, 5};

    cout << "total yams = " << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs " << yamscost[1] << " cent per yam. " << endl;

    int total = yams[0] * yamscost[0] + yams[1] * yamscost[1]+ yams[2] * yamscost[2];
    cout << "The total yam expense is " << total << " cents." << endl;

    cout << "Size of yams array = " << sizeof(yams) << " bytes." << endl;
    cout << "Size of one element = " << sizeof(yams[0]) << " bytes." << endl;
}

//4.2 string.cpp
void strings(){
    using namespace std;
    const int Size = 15;
    char name1[Size]; // empty array
    char name2[Size] = "C++owboy"; // initialized array

    cout << "hello, I'm " << name2 << "! What's yours name?" << endl;
    cin >> name1;\
    cout << "Well, " << name1 << ", your name has " << strlen(name1) << " letters and is stored" << endl;

    cout << "in an array of " << sizeof(name1) << " bytes." << endl;
    cout << "Your initial is " << name1[0] << endl;
    cout << "Here are the first 3 characters of my name: " << name2 << endl;
}

// 4.4 instr2
// Reading more than one word with getline
void instr2(){
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:" << endl;
    cin.getline(name, ArSize); // reads through newline
    cout <<  "Enter your favourite dessert: " << endl;
    cin.getline(dessert, ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you. " << name << endl;

}

/*
 * String
 */

// 4.7 strtype1
// The diference between string and char
void strtype1(){
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kind of feline: ";
    cin >> str1;
    cout << "Here are some feline: " << charr1 << " " << charr2 << " ";
    cout << str1 << " " << str2 << endl;
    cout << "The third letter in " << charr2 << " is " << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is " << str2[2] << endl;

}

/*
 * Structured
 */

// 4.11 structur


void structur()
{

    struct inflatable{
        char name[20];
        float volume;
        double price;
    };

    using namespace std;
    inflatable guest ={
            "Glorious Gloria",
            1.88,
            29.99
    };

    inflatable pal = {
            "Audacious Arthur",
            3.12,
            32.99
    };

    cout << "Expand your guest list with " << guest.name << endl;
    cout << " and " << pal.name << endl;
    cout << "You can have both for $" << guest.price + pal.price;
}

// 4.12 assigning structures
void assgn_st(){
    struct inflatable{
        char name[20];
        float volume;
        double price;
    };

    using namespace std;
    inflatable bouquet = {
            "sunflowers",
            0.20,
            12.49
    };
    inflatable choice;
    cout << "bouquet" << bouquet.name << " for $";
    cout << bouquet.price << endl;
    choice = bouquet;
    cout << "choice: " << choice.name << " for $ " << choice.price << endl;
}

/***********************************************************************
 * Chapter 4.5 union
 ***********************************************************************/

/***********************************************************************
 * Chapter 4.6 enum
 ***********************************************************************/
 void enum_1(){
     enum spectrum{
         red, orange, yellow, green, blue, violet, indigo, ultraviolet
     };

     spectrum band;
     band = blue;

     std::cout << band;
 }

/***********************************************************************
* Chapter 4.7 pointer and address
***********************************************************************/
void pointer(){
    using namespace std;
    int updates = 6;
    int * p_updates;

    p_updates = &updates; // assign address of int to pointer

    // express values two ways
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    // express address two ways
    cout << "Addresses: &updates = " << &updates << ", p_updates " << p_updates << endl;

    // use pointer to change value
    *p_updates = ++*p_updates ;
    cout << updates;
}

// 4.17 use new
// using the new operator
void use_new(){
    using namespace std;
    int * pt = new int; // allocate space for an int
    *pt = 1001;

    cout << "int " << "value = " << *pt << ": location = " << pt << endl;

    double * pd = new double;
    *pd = 10000001.0;

    cout << "double " << "value = " << *pd << ": location = " << pd << endl;

    cout << "size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd);
    cout << ": size of *pd = " << sizeof(*pd);
}

// 4.18 arraynew
// using the new operator for arrays
void arraynew()
{
    using namespace std;
    double * p3 = new double [3]; // space for 3 doubles
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] is " << p3[1] << endl;
    p3++;  // increment the pointer
    cout << "Now p3[0] is " << p3[0] << " and " << "p3[1] is " << p3[1] << endl;

    p3--;

    cout << p3;
    delete [] p3;

}

/***********************************************************************
* Chapter 4.8 pointer arithmetic
***********************************************************************/

// 4.19 addpntrs
// pointer addition
void addpntrs(){
    using namespace std;
    double wages[3] = {10000.0, 20000.0, 30000.0};
    int stacks[3] = {3, 2, 1};

    // Here are two ways to get the address of an array
    double * pw = wages; // name of an array = address
    int * ps = &stacks[0]; // use address operator

    // with array element
    cout << "pw = " << pw << ", *pw = " <<  *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer: \n" << "pw = " << pw << ", *pw = " << *pw << endl << "\n";

    cout << "ps = " << ps << ", *ps = " <<  *ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer: \n" << "ps = " << ps << ", *ps = " << *ps << endl << "\n";

    cout << "access two elements with array notation\n" << "stacks[0] = " << stacks[0];
    cout << ", stack[1] = " << stacks[1] << endl;

    cout << "access two elements with pointer notation\n" << "*stacks = " << *stacks;
    cout << ", *(stacks + 1) = " << *(stacks + 1) << endl;

    cout << sizeof(wages) << " = size of wages array" << endl;
    cout << sizeof(pw) << " = size of pw pointer" << endl;
}

// 4.20 ptrstr
// using pointers to string
void ptrstr()
{
    using namespace std;
    char animal[20] = "bear";
    const char * bird = "wren";
    char * ps; //uninitializedd

    cout << animal << " and "; //display bear
    cout << bird << "\n"; //display wren
    // cout << ps << endl;

    cout << "Enter a kind of animal: ";
    cin >> animal;
    // cin >> ps: Too horrible a blunder to try: ps doesn't point to
    // allocated space

    ps = animal;
    cout << ps << "s!\n";
    cout << "Before using strcpy(): \n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *)ps << endl;

    ps = new char[strlen(animal) + 1]; // get new storage
    strcpy(ps, animal); // copy string to new storage
    cout << "Affer using strcpy(): \n";
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;
    delete [] ps;
}

// 4.21 newstrct
// using new with a strcuture
void newstrct()
{
    struct inflatable{
        char name[20];
        float volume;
        double price;
    };

    using namespace std;
    inflatable * ps = new inflatable; // allow memory for structure
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20); // method 1 for member access
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume; // method 2 for member access
    cout<< "Enter price: $";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl; //method 2
    cout << "VolmeL:" << ps->volume << " cublic feet\n"; // method 1
    cout << "Price: $" << ps->price << endl; // method 1
    delete ps;
}

// 4.22 delete
// using the delete operator
char * getname(void);

void delete_cpp(){
    using namespace std;
    char * name; // create pointer but no storage

    name = getname(); // assign address of string to name
    cout << name << " at " << (int *)name << "\n";
    delete [] name; // memory freed

    name = getname(); // reuse freed memory
    cout << name << " at " << (int *)name << "\n";
    delete [] name;
}

char * getname(){
    using namespace std;
    char temp[80]; // temporary storage
    cout << "Enrer last name: ";
    cin >> temp;

    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp); // copy string into smaller space

    return pn; // temp lost when function ends
}

int main() {

    delete_cpp();
}

