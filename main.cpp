#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 bool
 int
 float
 double
 char
 unsigned int
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    bool isFinished = false;
    bool needsInitialization = true;
    bool hasAClue = false;

    int cycleCount = 0;
    int width = 800;
    int noiseFloor = -100;

    float frequency = 42.3f;
    float gain = 0.66f;
    float delay = 333.5f;

    double lifespanInSeconds = 2372000000;
    double aPrettyLargeNumber = 123456789.0;
    double aSmallerNumberStoredAsADoubleAnyway = -85;

    char c = 'c';
    char zip = '\0';
    char myChar = 'D';

    unsigned int maxUInt16 = 0xFF;
    unsigned int fullMonthsLeftInYear = 1;
    unsigned int pointsOnLicence = 0;

    ignoreUnused( number,
                  isFinished,
                  needsInitialization,
                  hasAClue,
                  cycleCount,
                  width,
                  noiseFloor,
                  frequency,
                  gain,
                  delay,
                  lifespanInSeconds,
                  aPrettyLargeNumber,
                  aSmallerNumberStoredAsADoubleAnyway,
                  c,
                  zip,
                  myChar,
                  maxUInt16,
                  fullMonthsLeftInYear,
                  pointsOnLicence); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int drillWell( float depth, float diameter = .5f )
{
    ignoreUnused( depth, diameter );
    return {};
}
/*
2)
 */
bool canPayBills( float cashOnHand, float bills = 6000.f )
{
    ignoreUnused( cashOnHand, bills );
    return {};
}
/*
 3)
 */
int transferMoney( double senderAccount, double recipientAccount, float amount )
{
    ignoreUnused( senderAccount, recipientAccount, amount );
    return {};
}
/*
 4)
 */
float calculatePowerInWatts( float voltage = 110.f, float current = 0.5f )
{
    ignoreUnused( voltage, current );
    return {};
}
/*
 5)
 */
double calculateRemainingLifespan( double age, float height = 5.5f, float weight = 163.f )
{
    ignoreUnused( age, height, weight );
    return {};
}
/*
 6)
 */
char returnSemiRandomChar( bool upperCase = false )
{
    ignoreUnused(upperCase);
    return {};
}
/*
 7)
 */
unsigned int returnRandomIntegerBetween( int lowerLimit = 0, int upperLimit = 100 )
{
    ignoreUnused( lowerLimit, upperLimit );
    return {};
}
/*
 8)
 */
bool makeDinosaurRoar( int durationInSeconds = 3, float volume = .7f )
{
    ignoreUnused( durationInSeconds, volume );
    return {};
}
/*
 9)
 */
bool moveObject( double objectID, float x = 0.f, float y = 0.f, float z = 0.f, bool relative = true )
{
    ignoreUnused( objectID, x, y, z, relative );
    return {};
}
/*
 10)
 */
bool approveBusinessLoan( float ownersCreditScore, int businessAge, float loanAmount )
{
    ignoreUnused( ownersCreditScore, businessAge, loanAmount );
    return {};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar( 6, 2 ); 
    
    //1)
    auto wellDrilledTo = drillWell( 275.f, 1.f );
    //2)
    auto iHaveEnoughMoney = canPayBills( 100.f, 575.f );
    //3)
    auto moneyTransferResult = transferMoney( 12345678998765, 98765432112345 , 9999.99f );
    //4)
    auto wattsUsed = calculatePowerInWatts( 9.f );
    //5)
    auto howLongShouldThisGuyLive = calculateRemainingLifespan( 20.9, 6.333f, 200.f );
    //6)
    auto randomCapitalLetter = returnSemiRandomChar( true );
    //7)
    auto randomInteger = returnRandomIntegerBetween( 0, 0xFF );
    //8)
    auto dinosaurRoarResult = makeDinosaurRoar( 5, 1.f );
    //9)
    auto moveObjectResult = moveObject( 1234567890, 1, 1, 50.f, true );
    //10)
    auto canApproveLoan = approveBusinessLoan( 450.f, 1, 50000.f );
    
    ignoreUnused( carRented,
                  wellDrilledTo,
                  iHaveEnoughMoney,
                  moneyTransferResult,
                  wattsUsed,
                  howLongShouldThisGuyLive,
                  randomCapitalLetter,
                  randomInteger,
                  dinosaurRoarResult,
                  moveObjectResult,
                  canApproveLoan );

    std::cout << "good to go!" << std::endl;
    return 0;    
}
