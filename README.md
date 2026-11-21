# CIS 165 Lab 10 - Lottery



## My Plan
For this program I need two arrays that each hold 5 integers: winningDigits
and player. I'll make a constant SIZE = 5 so the loops all use the same number.

First I'll seed rand() one time with srand(time(0)). Then a for loop fills
winningDigits with rand() % 10, so each digit is 0 to 9. Next I'll ask the user
for 5 digits and use another for loop to store them in player.

To find matches I'll use a loop that goes through each position. If
winningDigits[i] is the same as player[i], I add 1 to a variable called matches.
I only compare the same position, so a digit in a different spot doesn't count.

At the end I'll print the winning digits, the player digits, and the number of
matches with labels. The match count should be somewhere from 0 to 5.

## How to Compile and Run
I'll use onlinegdb and use c++ language and put the code in their then run it and fix any errors 


## Test Records
For the fixed tests I temporarily replaced only the random loop with a fixed
winning array. The comparison loop stayed the same.

**Test 1**
- Winning: 7 4 9 1 3, Player: 4 2 9 7 3
- Expected: 2 matches (index 2 is 9 and 9, index 4 is 3 and 3)
- Actual output: Number of matches: 2
- Match? Yes

**Test 2**
- Winning: 7 4 9 1 3, Player: 7 4 9 1 3
- Expected: 5 matches (everything is the same)
- Actual output: Number of matches: 5
- Match? Yes

**Test 3**
- Winning: 7 4 9 1 3, Player: 0 0 0 0 0
- Expected: 0 matches (no 0s in the winning digits)
- Actual output: Number of matches: 0
- Match? Yes

**Test 4**
- Winning: 1 1 2 2 3, Player: 1 2 2 3 3
- Expected: 3 matches (index 0: 1 and 1, index 2: 2 and 2, index 4: 3 and 3).
  The repeated digits are still compared by position.
- Actual output: Number of matches: 3
- Match? Yes

**Test 5 (my own test)**
- Winning: 2 4 6 8 0, Player: 0 2 4 6 8
- Expected: 0 matches. Every digit shows up in both arrays, but each one is
  shifted over by one spot, so no position matches. This shows that digits
  in the wrong position don't count.
- Actual output: Number of matches: 0
- Match? Yes


**Errors I fixed:** None. 

**Temporary changes I restored:** I put the rand() % 10 loop back and removed
the fixed array.

**Final compile and run:**It compiled with no
warnings.

## Explanation
1. **How does the random expression keep every digit between 0 and 9?**
   rand() % 10 gives the remainder when the random number is divided by 10.
   A remainder can only be 0 through 9, so the digit can't be bigger.

2. **Why doesn't a matching digit in another position count?**
   The program only checks winningDigits[i] against player[i], the same index.
   The lottery needs the right digit in the right spot, so a digit somewhere
   else isn't a match.

3. **Trace through the example (winning 7 4 9 1 3, player 4 2 9 7 3):**
   - i = 0: 7 vs 4, no, matches = 0
   - i = 1: 4 vs 2, no, matches = 0
   - i = 2: 9 vs 9, yes, matches = 1
   - i = 3: 1 vs 7, no, matches = 1
   - i = 4: 3 vs 3, yes, matches = 2

   The final count is 2.

4. **Why do the loops stop before SIZE, and what did the fixed tests show?**
   Array indexes start at 0, so an array of 5 has indexes 0 to 4. Index 5 is
   outside the array, so the loop uses i < SIZE. The fixed tests showed the
   comparison loop works for 0, 2, 3, and 5 matches, handles repeated digits,
   and ignores matching digits in the wrong position.
