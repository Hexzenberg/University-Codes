#Write a regular expression to extract profit, also the % profit
from nltk.tokenize import RegexpTokenizer
inputString = 'TCS has reported 7.3% increase in profit many companies are making Profits around 10.0%'
tokenizer = RegexpTokenizer(r'\d+\.\d+')
tokenizer_p = RegexpTokenizer(r'[p P]rofit')
s = tokenizer.tokenize(inputString) 
p = tokenizer_p.tokenize(inputString)
print(s)
print(p)