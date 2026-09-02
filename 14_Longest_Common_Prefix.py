from typing import List
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        shortest = strs[0]
        longest = ""
        tmp = 0
        kt = False
        for i in range(len(strs)):
            if len(shortest) > len(strs[i]):
                shortest = strs[i]
        for j in range(len(shortest)):
            tmp = 0
            c = shortest[j]
            for i in range(len(strs)):
                if c == strs[i][j]:
                    tmp += 1
                else:
                    kt = True
                    break
            if tmp == len(strs):
                longest+= c
            if kt == True:
                break
        return longest
def main():
    strs = []
    for i in range(3):
        s = input("Enter string: ")
        strs.append(s)
    solution = Solution()
    print("The longest common prefix is:", solution.longestCommonPrefix(strs))

if __name__ == "__main__":
    main()
