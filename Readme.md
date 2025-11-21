# A minimal minecraft head display server

A server to display a player head : enter the player username, and it will display its skin.

The server save statistics about the queried usernames a postgres database.

# Setup

Requires python3

- Install Flask : `pip install flask`
- Install psycopg2-binary : `pip install psycopg2-binary`
- Run the server : `flask --app flask_minimal.py`

By default, the server is listening on port 5000

# Database configuration



# Changelog

V1: Changed database from json file to postgres