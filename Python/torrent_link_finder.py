import requests
from bs4 import BeautifulSoup
from urllib.parse import quote_plus
from sys import exit

url = 'https://1337x.to/search/{}/1/'

query = quote_plus(input("Enter your search string: "))

url = url.format(query)
headers = {'user-agent': 'Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/80.0.3987.149 Safari/537.36'}
page_src =requests.get(url, headers=headers).text


soup = BeautifulSoup(page_src,"html.parser")
td = soup.select("td.coll-1.name")

movies_list = []
for i in range(min(len(td), 10)):
    movie = td[i].find_all("a")[1]
    movie_name = movie.text[:-1]
    movie_link = "https://1337x.to" + movie.get("href")
    movie = { "movie_name" : movie_name , "movie_link" : movie_link }
    movies_list.append(movie)
    print(f"{i+1}: {movie_name}")


if len(movies_list) == 0:
    print("No movies found.")
    exit(0)

choice = int(input("Enter your choice : ")) -  1
movie_url = movies_list[choice]["movie_link"]
movie_src = requests.get(movie_url, headers=headers).text

movie_soup = BeautifulSoup(movie_src, "html.parser")

magnet_link = movie_soup.find("a", href = lambda x:  x.startswith("magnet") if x is not None else False).get("href")

print("Magnet link :")

print(magnet_link)
