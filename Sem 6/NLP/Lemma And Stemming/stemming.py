import nltk
nltk.download('punkt')

from nltk.stem import PorterStemmer
from nltk.tokenize import word_tokenize

sentence = "Hello Guru99, You have to build a very good site and I love visiting your site."
words = word_tokenize(sentence)

ps = PorterStemmer()

for w in words:
    rootWord = ps.stem(w)
    print(rootWord)
