# URL: https://leetcode.com/problems/letter-combinations-of-a-phone-number/

import itertools as it

class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        dicti={"2":"abc", "3":"def", "4":"ghi", "5":"jkl","6":"mno", "7":"pqrs","8":"tuv","9":"wxyz"}
        if not digits:
            return []
		
        letters = [dicti[key] for key in digits]
		
        return ["".join(grp) for grp in it.product(*letters)]    
        
        
