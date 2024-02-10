# **CPP-Modules**

## **Module 00**

<details>
  <summary><b>Ex 00</b></summary>
    
  - <b>Objectives</b>
  - <details>
    <summary><b>Basic ostream</b></summary>
      <br>std::cout (Console Output) to sends formatted output to stdout.

    <br>How to use:
  
        std::cout << "Hello World" << std::endl;
    
    Output:
    
        Hello World
  
    Useful Links:
  
    https://cplusplus.com/reference/iostream/cout/
    </details>
  </details>

<details>
  <summary><b>Ex 01</b></summary>

  - <b>Objectives</b>
  - <details>
    <summary><b>Basic istream</b></summary>
      <br>std::cin (Console Input) used to get user input from an external source.
  
    <br>How to use:
    
        std::cin >> name;
        std::cout << "Hello " << name << std::endl;
  
    Input:
  
        icaldas
  
    Output:
  
        Hello icaldas
  
    Useful Links:
  
    https://cplusplus.com/reference/iostream/cin/
    </details>
  - <details>
    <summary><b>Basic string</b></summary>
      <br>std::string is a class that defines objects that be represented as a stream of characters. 
  
    <br>How to use:
  
        std::string name = "icaldas";
        std::cout << "Hello " << name << std::endl;
  
    Output:
  
        Hello icaldas
  
    Useful Links:
  
  
    https://cplusplus.com/reference/string/string/ 
    </details>
  - <details>
    <summary><b>How to use the setw() function</b></summary>
      <br>std::setw used to sets the ios library field width or specifies the minimum number of character positions a variable will consume.
  
    <br>How to use:
  
        std::cout << '|' << std::setw(10) << "Hello" << '|' << std::endl;
        std::cout << '|' << std::setw(10) << "World!!!" << '|' << std::endl;
  
    Output:
  
        |     Hello|
        |  World!!!|
  
    Useful Links:
  
    https://cplusplus.com/reference/iomanip/ 
    </details>
</details>

<details>
  <summary><b>Ex 02</b></summary>
  
  - <b>Objectives</b>
  - <details>
    <summary><b>Constructor and Destructor</b></summary>
      <br>Constructors and destructors are special member functions of classes that are used to construct and destroy class objects
  
    <br>How to use:
  
        class Book
        {
          private:
            ...
          public:
            Book(void);
            ~Book(void);
        }
    
        Book::Book(void)
        {
          std::cout << "Book Opened" << std::endl;
        }
    
        Book::~Book(void)
        {
          std::cout << "Book Closed" << std::endl;
        }
    
        int main(void)
        {
          Book littleBook;
          return 0;
        }
    
    Output:
  
        Book Opened
        Book Closed
  
    Useful Links:
  
    https://www.codementor.io/@supernerdd7/constructor-and-destructor-in-c-1r8kkogm6j 
    </details>
  - <details>
    <summary><b>Classes</b></summary>
      <br>A class is a user-defined data type that we can use in our program 
  
    <br>How to use:
  
        class Book
        {
          public:
            unsigned int pages;
        }
    
        int main(void)
        {
          Book littleBook;
          littleBook.pages = 100;
          std::cout << "littleBook has " << littleBook.pages << " pages" << std::endl;
        }
  
    Output:
  
        littleBook has 100 pages
  
    Useful Links:
  
    https://www.programiz.com/cpp-programming/object-class
    </details>
  - <details>
    <summary><b>std::time</b></summary>
      <br>std::time returns the current calendar time as an object of type time_t
  
    <br>How to use:
  
        int main()
        {
          std::time_t result = std::time(nullptr);
          std::cout << std::asctime(std::localtime(&result))
                    << result << " seconds since the Epoch\n";
        }
  
    Possible Output:
    
        Wed Sep 21 10:27:52 2011
        1316615272 seconds since the Epoch
  
    Useful Links:
  
    https://cplusplus.com/reference/ctime/time/ 
    </details>
</details>
