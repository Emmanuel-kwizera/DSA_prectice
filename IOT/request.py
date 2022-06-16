import requests
url="http://insecure.benax.rw/iot/"
data={"device":"Emmabuel-Kwizera","distance":"25cm"}
res=requests.post(url,data)
print(res.text)