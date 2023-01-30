def solution(letter):
    morse = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
    
    answer = ''
    templist = letter.split(' ')
    for i in templist:
        answer = answer + chr(97 + int(morse.index(i)))
    
    return answer