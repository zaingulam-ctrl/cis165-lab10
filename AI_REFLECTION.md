**Tools:** I used Claude to help with the code for lottery.cpp and to make a
template for my README. 

**One decision:** Claude's first version used static_cast and nullptr in the
srand line. So I asked for a simpler version and used srand(time(0)) instead. I also kept the single srand call
before the loops because the assignment says to seed once. 

**A specific check:** I tested the comparison loop with fixed winning digits
7 4 9 1 3 and player digits 4 2 9 7 3. I worked out the answer by hand first:
index 2 is 9 and 9, and index 4 is 3 and 3, so I expected 2 matches. The
program printed "Number of matches: 2." This showed that the loop only counts
digits in the same position. The 7 and the 4 are in both arrays, but in
different spots, and they weren't counted.

**Learning:** I can now fill an array with a loop and compare two arrays by index. I still need to practice reading compiler warnings and tracing loops by hand.
