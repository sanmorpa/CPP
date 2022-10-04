# CPP
This repository shows my answers to the C++ Piscine at 42 Madrid. The modules are divided in folders, from 00 to 08. Each module aims to teach basic concepts of OOP. Everything is in C++98 and the C++ keywords "using namespace" and "friend" are forbidden unless tated otherwise.

* All programs compile with a Makefile. Each exerecice of the module has a Makefile in its folder. All MAakefiles have the following rules:
  * make: it compiles
  * make re: it recompiles the program
  * make clean: it removes all .o files
  * make fclean: it removes all .o files and the executable
* The following README.md is a recopilation of all the descriptions of the modules. This table of contents might help you navigate through it:
  * [CPP00](#cpp00)
  * [CPP01](#cpp01)
  * [CPP02](#cpp02)
  * [CPP03](#cpp03)
  * [CPP04](#cpp04)
  * [CPP05](#cpp05)
  * [CPP06](#cpp06)
  * [CPP07](#cpp07)
  * [CPP08](#cpp08)

## CPP00 <a href="https://github.com/JaeSeoKim/badge42"><img src="https://badge42.vercel.app/api/v2/cl8uf09z900060gl2pg6sdczb/project/2769869" alt="samoreno's 42 CPP Module 00 Score" /></a>
This module aims to teach abourt Namespace, class, member functions, stdio stream, initialization lists, static, const, and other basic concepts.

### Ex00
Just to be sure that everybody is awake, write a program that has the following behavior: (Use C++ style to interact with stdin!)\
**$>./megaphone "shhhhh... I think the students are asleep..."**\
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...

**$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."**\
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.

**$>./megaphone**\
\* LOUD AND UNBEARABLE FEEDBACK NOISE *\
$>
### Ex01
Welcome to the 80s and its unbelievable technology! Write a program that behaves like a crappy awesome phonebook software. Please take some time to give your executable a relevant name. When the program starts, the user is prompted for input: you should accept the ADD command, the SEARCH command or the EXIT command. Any other input is discarded.\
The program starts empty (no contacts), doesn’t use any dynamic allocation, and can’t store more than 8 contacts. If a ninth contact is added, replace the oldest contact.
* If the command is EXIT:
  * The program quits and the contacts are lost forever.
* Else if the command is ADD:
  * The program will prompt the user to input a new contact’s information, one field at a time, until every field is accounted for.
  * A contact is defined by the following fields: first name, last name, nickname, phone number,darkest secret.
  * The PhoneBook must be represented as as an instance of a class in your code it must contain an array of contact.
  * A contact MUST be represented as an instance of a class in your code. You’re free to design the class as you like, but the peer evaluation will check the consistency of your choices. Go look at today’s videos again if you don’t understand what I mean (and I don’t mean "use everything" before you ask).
* Else if the command is SEARCH:
  * The program will display a list of the available non-empty contacts in 4 columns: index, first name, last name and nickname.
  * Each column must be 10 chars wide, right aligned and separated by a ’|’ character. Any output longer than the columns’ width is truncated and the last displayable character is replaced by a dot (’.’).
  * Then the program will prompt again for the index of the desired entry and displays the contact’s information, one field per line. If the input makes no sense, define a relevant behavior.
* Else the input is discarded. When a command has been correctly executed, the program waits for another ADD or SEARCH command until an EXIT command.

### Ex02
It’s your first day of work at GlobalBanksters United. You successfully passed the hiring tests for the programmers’ team thanks to a few tricks with Microsoft Office a friend showed you. But you know that it was your swift installation of Adobe Reader that blew your recruiter’s mind. This gave you the little edge needed to beat your opponents for this job.\
Anyway, you made it and your boss gave you your first task. You need to recode one missing source file because something went wrong. Account.cpp is missing and they useUSB file sharing and not git.\
At this point, it will be legitimate to quit this place however for the sake of this exercise, you will stay.\
The Account.hpp file is present and a quick compilation of tests.cpp confirms that an Account.cpp file is missing. There’s also an old output log that seems to contain the matching output.\
So you need to create a Account.cpp file and quickly write some lines of pure awesome C++ and after a couple of failed compilations, your program will compiles and passes the tests with a perfect output, except for the timestamps differences. Damn you’re good!

[back to Top](#cpp)
## CPP01 [![samoreno's 42 CPP Module 01 Score](https://badge42.vercel.app/api/v2/cl8uf09z900060gl2pg6sdczb/project/2797118)](https://github.com/JaeSeoKim/badge42)
This module aims to teach about Memory allocation, references, pointers to members, switch statement.
### Ex00
First, make a Zombie class. The zombies have a private name and are able to announce themselves like:\
<name> BraiiiiiiinnnzzzZ...\
Yes, announce( void ) is a member function. Also, add a debugging message in the destructor including the name of the Zombie.\
After this, write a function that will create a Zombie, name it, and return it to be used somewhere else in your code. The prototype of the function is:\
Zombie* newZombie( std::string name );\
You will also have to write another function that will create a Zombie, and make it announce itself. The prototype of the function is:\
void randomChump( std::string name );\
Now the actual point of the exercise: your Zombies must be destroyed at the appropriate time (when they are not needed anymore). They must be allocated on the stack or the heap depending on its use: sometimes it’s appropriate to have them on the stack, at other times the heap may a better choice.

### Ex01
Re-using the Zombie class, now we are going to create an horde of zombies!\
Write a function that takes an integer N. When called, it allocates N Zombie objects. It must allocate all the N Zombie objects in a single allocation. Then, it should initialize each Zombie by giving to each one a name. Last, it should return the pointer to the first Zombie. The function is prototyped as follows:\
Zombie* zombieHorde( int N, std::string name );\
Submit a main to test that your function zombieHorde works as intended. You may want to do so by calling announce() on each one of the Zombies. Do not forget to delete ALL the Zombies when you don’t need them anymore.

### Ex02
Make a program in which you will create a string containing "HI THIS IS BRAIN". Create a stringPTR which is a pointer to the string; and a stringREF which is a reference to the string.\
Now, display the address in memory of the string. Next, display the address of the string by using stringPTR and stringREF.\
Last, display the string using the pointer, and finally display it using the reference.\
That’s all, no tricks. The goal of this exercise is to make you demystify references. It isn’t something completely new, it is just another syntax for something that you already know: addresses. Even there are some tiny-little-minuscule details.

### Ex03
Make a Weapon class, that has a type string, and a getType method that returns a const reference to this string. It also has a setType, of course!
Now, create two classes, HumanA and HumanB, that both have a Weapon, a name, and an attack() function that displays:\
NAME attacks with his WEAPON_TYPE\
HumanA and HumanB are almost-almost the same; there are only two tiny-little-minuscule details:
* While HumanA takes the Weapon in its constructor, HumanB doesn’t.
* HumanB may not always have a Weapon, but HumanA will ALWAYS be armed.

### Ex04
Make a program called replace that takes a filename and two strings, let’s call them s1 and s2, which are NOT empty.\
It will open the file, and write its contents to FILENAME.replace, after replacing every occurrence of s1 with s2.\
All the member functions of the class std::string are allowed, except replace. Use them wisely!\
Of course, you will handle errors as best you can. Do not use the C file manipulation functions, because that would be cheating, and cheating’s bad, m’kay?\
You will turn in some test files to show your program works.

### Ex05
Do you know Karen? We all do, no? In case you don’t, here are the kind of comments that Karen does:
* "DEBUG" level: Messages in this level contain extensive contextual information. They are mostly used for problem diagnosis. Example: _"I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"_
* "INFO" level: These messages contain some contextual information to help trace execution in a production environment. Example: _"I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"_
* "WARNING" level: A warning message indicates a potential problem in the system. The system is able to handle the problem by itself or to proceed with this problem anyway. Example: _"I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."_
* "ERROR" level: An error message indicates a serious problem in the system. The problem is usually non-recoverable and requires manual intervention. Example: _"This is unacceptable, I want to speak to the manager now."_

We are going to automate Karen, she says always the same things. You have to create a class named Karen which will contain the following private member functions:
* void debug( void );
* void info( void );
* void warning( void );
* void error( void );

Karen also has to have a public function that calls to the private functions depending on the level that is passed as parameter. The prototype of the function is:
* void complain( std::string level );

The goal of this exercise is to use pointers to member functions. This is not a suggestion, Karen has to complain without using a forest of if/elseif/else, she doesn’t hesitate or think twice!\
Submit a main to test that Karen complains a lot. It is okay if you want to use the complains we give as example.

### Ex06
We are going to implement a system to filter if what Karen says is important or not, because sometimes we don’t want to pay attention to everything Karen says. You have to write the program karenFilter that will receive as a parameter the log level you want to listen to and display all the info that is at this level or above it. For example:

**$> ./karenFilter "WARNING"**\
[ WARNING ]\
I think I deserve to have some extra bacon for free.\
I’ve been coming here for years and you just started working here last month.\
[ ERROR ]
This is unacceptable, I want to speak to the manager now.

**$> ./karenFilter "I am not sure how tired I am today..."**\
[ Probably complaining about insignificant problems ]

There are many ways to filter Karen, but one of the best ones is to SWITCH her off ;) You must use, and maybe discover, the switch statement in this exercise.

[back to Top](#cpp)
## CPP02 [![samoreno's 42 CPP Module 01 Score](https://badge42.vercel.app/api/v2/cl8uf09z900060gl2pg6sdczb/project/2797118)](https://github.com/JaeSeoKim/badge42)
This module aims to teach about Ad-hoc polymorphism, operators overload and orthodox canonical classes

### Ex00
You know integers and you also know floating point numbers. How cute. Until today, any numbers you used in your programs were basically integers or floating point numbers, or any of their variants (short, char, long, double, etc). From your previous reading, it’s safe to assume that integers and floating point numbers have opposite caracteristics.

But today, this will change. You are going to discover a new and awesome number type: fixed point numbers! Always missing from most languages scalar types, fixed point numbers offer a valuable balance between performance, accuracy, range and precision that explains why these numbers are widely used in graphics, sound or scientific programming to name a few. As C++ lacks fixed point numbers, you’re going to add them yourself today.

Write an orthodox class to represent fixed point numbers:
* Private members:
  * An integer to store the fixed point value.
  * A static constant integer to store the number of fractional bits. This constant will always be the litteral 8.
* Public members:
  * A default constructor that initializes the fixed point value to 0.
  * A destructor.
  * A copy constructor.
  * An assignation operator overload.
  * A member function int getRawBits( void ) const; that returns the raw value of the fixed point value.
  * A member function void setRawBits( int const raw ); that sets the raw value of the fixed point value.

### Ex01
Ok, ex00 was a good start, but our class is still pretty useless, being only able to represent the fixed point value 0.0. Add the following public constructors and public member functions to your class:
* A constructor that takes a constant integer as a parameter and that converts it to the correspondant fixed(8) point value. The fractional bits value is initialized like in ex00.
* A constructor that takes a constant floating point as a parameter and that converts it to the correspondant fixed(8) point value. The fractional bits value is initialized like in ex00.
* A member function float toFloat( void ) const; that converts the fixed point value to a floating point value.
* A member function int toInt( void ) const; that converts the fixed point value to an integer value.

You will also add the following function overload to your header (declaration) and source (definition) files:
* An overload to the « operator that inserts a floating point representation of the fixed point value into the parameter output stream.

### Ex02
We’re getting closer. Add the following public member operator overloads to your class:
* Six comparison operators: >, <, >=, <=, == and !=.
* Four arithmetic operators: +, -, *, and /.
* The pre-increment, post-increment, pre-decrement and post-decrement operators, that will increment or decrement the fixed point value from the smallest representable e such as 1 + e > 1.

Add the following public static member functions overloads to your class:
* The static member function **min** that takes references on two fixed point values and returns a reference to the smallest value, and an overload that takes references on two constant fixed point values and returns a reference to the smallest constant value.
* The static member function **max** that takes references on two fixed point values and returns a reference to the biggest value, and an overload that takes references on two constant fixed point values and returns a reference to the biggest constant value.

### Ex03
Now that you have a fully working fixed point class, it could be cool to use it for something useful. You are going to write a function which indicates whether a point is inside of a triangle or not. Very useful, isn’t it?

Let’s start by writing the orthodox class Point to represent a 2D point:
* Private members:
  * A Fixed const x
  * A Fixed const y
  * Anything else you judge useful.
* Public members:
  * A default constructor that initializes x and y to 0.
  * A destructor.
  * A copy constructor.
  * A constructor that takes two constant floating points as parameters and that initializes x and y with those values.
  * An assignation operator overload.
  * Anything else you judge useful.

Now, you should write the function bsp:
* The first three parameters are the vertices of our beloved triangle.
* The fourth is the point we are evaluating.
* The return value is True if the point is inside the triangle, otherwise, the return value should be False. This means that if the point is a vertex or a point that is on the edge, the return value should be False.
* Therefore, the prototype of the function is: bool bsp( Point const a, Point const b, Point const c, Point const point);

Don’t forget to submit your main with some tests to prove that your class works as intended.

[back to Top](#cpp)
## CPP03 <a href="https://github.com/JaeSeoKim/badge42"><img src="https://badge42.vercel.app/api/v2/cl8uf09z900060gl2pg6sdczb/project/2812161" alt="samoreno's 42 CPP Module 03 Score" /></a>

[back to Top](#cpp)
## CPP04

[back to Top](#cpp)
## CPP05

[back to Top](#cpp)
## CPP06

[back to Top](#cpp)
## CPP07

[back to Top](#cpp)
## CPP08

[back to Top](#cpp)
