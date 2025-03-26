def pig_it(text):
    words = text.split()
    pig_latin = []
    
    for word in words:
        if word.isalpha():
            pig_latin.append(word[1:] + word[0] + 'ay')
        else:
            pig_latin.append(word)
            
    return ' '.join(pig_latin)
