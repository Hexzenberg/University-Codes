from nltk.stem import PorterStemmer
from nltk.tokenize import word_tokenize
from functools import reduce

ps = PorterStemmer()

words = ["program", "programs", "programmer", "programming", "programmers"]

for w in words:
    print(w, " : ", ps.stem(w))

sentence = "Programmers program with programming languages computer revival"
words = word_tokenize(sentence)
 
for w in words:
    print(w, " : ", ps.stem(w))

sentence = "Programmers program with programming languages"
words = word_tokenize(sentence)

stemmed_sentence = reduce(lambda x, y: x + " " + ps.stem(y), words, "")
 
print(stemmed_sentence)