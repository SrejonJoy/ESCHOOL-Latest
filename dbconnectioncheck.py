from pymongo import MongoClient
from pymongo.errors import ConnectionFailure

# Replace these with your actual values
username = "123"
password = "123"  # if it contains @ or special chars, use urllib.parse.quote_plus
dbname = "Cluster0"

# If password has special characters like @ or !, encode them
import urllib.parse
password_encoded = urllib.parse.quote_plus(password)

# Build URI
uri = f"mongodb+srv://{username}:{password_encoded}@cluster0.kkxeoqq.mongodb.net/{dbname}?retryWrites=true&w=majority&appName=Cluster0"

try:
    client = MongoClient(uri, serverSelectionTimeoutMS=5000)
    client.server_info()
    print("Connected to MongoDB Atlas successfully!")
except ConnectionFailure as e:
    print("Failed to connect to MongoDB:", e)
