# A minimal minecraft head display server

A server to display a player head : enter the player username, and it will display its skin.

The server save statistics about the queried heads inside a json file named `queried_names.json`

# Setup

Requires python3

- Install Flask : `pip install flask`
- Run the server : `flask --app flask_minimal.py`

By default, the server is listening on port 5000