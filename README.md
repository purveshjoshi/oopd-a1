# oopd-a1
Q1:

I started first by creating a new repository on my firefox(linux).

Then I cloned it by

git clone https://github.com/purveshjoshi/oopd-a1.git
cd oopd-a1

Being a complete begineer I had to set up my Github account first.
Then I learnt how to create a token for password, checkboxed on repo for the PAT and then cloned it.

Then I did this on my terminal
cd oopd-a1
ls
(saw readme)
nano q1.cpp
(wrote a simple code printing Hello! Purvesh)
git add q1.cpp
(It asked who you are so)
git config --global user.name "purveshjoshi"
git config --global user.email "joshipurvesh007@gmail.com"

Then I pushed it into git and did an apt update.

Then I made a file gitignore because we do not want a file containing *.o, *.out,*.exe,a.out,q2,q3,.vscode/,*.swp
Then commited it to prevent the binaries

Q2:

So, now for Q2 I first made two directories include for the header files and source for the cpp files.
After that I started to make two files Q2.cpp and  build_q2.sh for shell script.
And then I made those script executable.

After that my build command compiled my code and then I used ldd just to check if it was a dynamic or static.

After that the usual, commiting and pushing.

Q3:

As usual I first nmade the file q3.cpp and aslo the shell script for it.
Then I made it executable

For the code I first ask the user to enter the name and store it in a string.
Then after taking the input I save it.
Then it checks whether its a numeric or  not.
If valid numeric then it print backs and asks for yes or no(confirmation).
Then it will confirm or not confirm as per the user input.

Then my build file invoked g++ to compile at first but it did not compile as it already contained basicIo as a header. I solve it by inspecting the first 20 lines of the header and tried building again.
But then becuase writesrtuct type program does not exists so I have to change my code by using io. Then again some errors arise and I inspect and get rid of the error.

Then I pushed and committed the files.



