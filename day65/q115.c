def check_anagram(s, t):
    if sorted(s) == sorted(t):
        return "Anagram"
    return "Not Anagram"
