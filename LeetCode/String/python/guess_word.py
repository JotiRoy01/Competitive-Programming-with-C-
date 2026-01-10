wordlist = ["acckzz","ccbazz","eiowzz","abcczz"]

def matches(a: str, b: str) -> int:
    matchCount = 0
    for i in range(len(a)):
        if a[i] == b[i]:
            matchCount += 1
    return matchCount

for _ in range(10) :
    # initialize as an empty dict (not a set)
    count: dict[str, int] = {}
    # safe access with get
    for w1 in wordlist :
        for w2 in wordlist :
            if matches(w1,w2) == 0:
                print(f"w1 and w2 {w1,w2}")
                continue
            count[w1] = count.get(w1,0) + 1