import sys
keyMap = {
    '0': ['.', ';'],
    '1': ['a', 'b', 'c'],
    '2': ['d', 'e', 'f'],
    '3': ['g', 'h', 'i'],
    '4': ['j', 'k', 'l'],
    '5': ['m', 'n', 'o'],
    '6': ['p', 'q', 'r', 's'],
    '7': ['t', 'u'],
    '8': ['v', 'w', 'x'],
    '9': ['y', 'z']}


def keypad_helper(string, idx, soFar, res):
    if idx == len(string):
        res.append(soFar)
    else:
        for c in keyMap[string[idx]]:
            keypad_helper(string, idx+1, soFar+c, res)


if __name__ == '__main__':
    try:
        inp = sys.argv[1]
    except IndexError:
        print('Enter a valid string')
        sys.exit(1)  
    word_list = []
    keypad_helper(inp, 0, '', word_list)
    for word in word_list:
        print(word, end =' ')