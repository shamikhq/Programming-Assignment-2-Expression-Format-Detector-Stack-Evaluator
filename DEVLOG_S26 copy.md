# Developer Log (DEVLOG.md)
## Expression Format Detector + Stack Evaluator (Spring 2026)


---

### Entry 1
**Date:** 3/23/2026 
**Entry Type:** Bug Fix/ Engineering Decision  
**Task worked on:** Began and finished implementation of a stack in ArrayStack.h.    
**Issue or decision:** I didn't know that for vectors you can use methods like back, push_back, and pop_back. 
**Error message / symptom (if applicable):** I was initially getting errors trying to run the vector like an array. 
**What I tried:** Using methods from std::vector. 
**Fix / resolution (or final decision):** Using these, not only is the correct way, but made it way easier. 
**Commit(s):** I finished the implementation of recommended step 1.   

---

### Entry 2
**Date:** 3/24/2026
**Entry Type:** Edge Case / Engineering Decision  
**Task worked on:** Step 2 (tokenize) 
**Issue or decision:** Filter through the line, char by char, checking if it's a valid token.
**Error message / symptom (if applicable):** n/a
**What I tried:** Initially I was trying to tokenize by what it should be (#, operator, etc.). This really tedious and honestly a pain. Then I realized how much easier it would be to filter by what is shouldn't be. 
**Fix / resolution (or final decision):** By checking with printing out tokens, I could check if tokenize worked. 
**Commit(s):** I began, tested, and implemented recommended step 2.


---

### Entry 3
**Date:** 3/25/2026
**Entry Type:** Edge Case / Engineering Decision  
**Task worked on:** Recommended step 3  
**Issue or decision:** I initially was only validating postfix based on if the count of operators was 1 less than the count of numbers.
**Error message / symptom (if applicable):** It would mistakenly validate, for example, "3+4" as valid postfix.
**What I tried:** Checking for the edge case of a single number input, otherwise, using the same logic as before and checking if the last token is an operator. 
**Fix / resolution (or final decision):** It works for the edge case, and validates correctly. 
**Commit(s):** I began the implementation and testing of step 3. 

---

### Entry 4
**Date:** 3/29/2026
**Entry Type:** Bug Fix   
**Task worked on:**     
**Issue or decision:** When testing step 3 using the given example, it wasn't returning the correct answer. 
**Error message / symptom (if applicable):** When evaluating 3 4 2 * +, it is returning 3, instead of 11. 
**What I tried:** Tracing the method to see where I went wrong, using the help of print statements to see what the stack looks like through each stage of its process.  
**Fix / resolution (or final decision):** I flipped the parameters of the main "if - else" structure to evaluate when to pop or push onto the stack. 
**Commit(s):** I corrected and finished step 3. 

---

### Entry 5
**Date:** 3/30/2026
**Entry Type:** Engineering Decision  
**Task worked on:** Step 4 and 5. 
**Issue or decision:** After completing step 4, I began working on step 5, where I realized I had some logic issues with my tokenize. 
**Error message / symptom (if applicable):** It was failing to skip over empty spaces, tokenizing them as well, which bugged my evalPostfix. 
**What I tried:** Using prints and tracing the code, I fixed the condition for my tokenize method to correctly tokenize. 
**Fix / resolution (or final decision):** isspae(temp) || !isalpha(temp) --> temp != ' ' && !isalpha(temp).
**Commit(s):** I finished step 4, and began the testing and implementation of step 5. 

---

### Entry 6
**Date:**
**Entry Type:** Bug Fix / Edge Case / Engineering Decision  
**Task worked on:**   
**Issue or decision:**
**Error message / symptom (if applicable):**
**What I tried:**   
**Fix / resolution (or final decision):**  
**Commit(s):**  
