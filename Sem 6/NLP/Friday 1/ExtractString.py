from nltk.tokenize import RegexpTokenizer
from nltk.tokenize import BlanklineTokenizer
import re

inputString = 'The placement of KIIT University is far better than placements in other Universities'
tokenizer = RegexpTokenizer(r'university|universities|placement', flags=re.IGNORECASE)
s = BlanklineTokenizer().tokenize(inputString)
p = tokenizer.tokenize(inputString)
p_str = ' '.join(p)
print(p_str)
