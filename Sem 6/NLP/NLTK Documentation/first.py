from nltk.tokenize import RegexpTokenizer
from nltk.tokenize import BlanklineTokenizer
s = "Good muffins cost $3.88\nin New York.  Please buy me\ntwo of them.\n\nThanks."
BlanklineTokenizer().tokenize(s) 
print(s)