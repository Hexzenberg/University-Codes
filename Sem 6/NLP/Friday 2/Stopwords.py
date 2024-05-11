from nltk.corpus import stopwords
from nltk.tokenize import sent_tokenize, word_tokenize
from nltk.corpus import stopwords

N = ['stop', 'the', 'to', 'and', 'a', 'in', 'it', 'is', 'I', 'that', 'had', 'on', 'for', 'were', 'was']
stops = set(stopwords.words('english'))
print(stops)

# stops = set(stopwords.words('german'))
# stops = set(stopwords.words('indonesia'))
# stops = set(stopwords.words('portuguese'))
# stops = set(stopwords.words('spanish'))

# text = open("shakespeare.txt").read().lower()

data = "All work and no play makes jack dull boy. All work and no play makes jack a dull boy."
stopWords = set(stopwords.words('english'))
words = word_tokenize(data)
wordsFiltered = [w for w in words if w not in stopWords]

print(wordsFiltered)