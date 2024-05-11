import requests
from bs4 import BeautifulSoup
from nltk.tokenize import word_tokenize
from nltk.corpus import stopwords

def count_unique_words_and_tokens(url):
    response = requests.get(url)
    if response.status_code == 200:
        soup = BeautifulSoup(response.text, 'html.parser')
        website_text = soup.get_text()
        tokens = word_tokenize(website_text)
        stop_words = set(stopwords.words('english'))
        tokens = [word for word in tokens if word.lower() not in stop_words]
        unique_words = set(tokens)
        num_unique_words = len(unique_words)
        num_tokens = len(tokens)
        return num_unique_words, num_tokens
    else:
        print(f"Error: Unable to retrieve content from {url}")
        return None, None

url_to_scrape = 'https://en.wikipedia.org/wiki/Snake'
unique_word_count, total_token_count = count_unique_words_and_tokens(url_to_scrape)

if unique_word_count is not None and total_token_count is not None:
    print(f"Number of unique words: {unique_word_count}")
    print(f"Total number of tokens: {total_token_count}")
