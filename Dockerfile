# Get base image 
FROM python:3.14-slim

WORKDIR /app

RUN apt update

RUN apt install gcc make -y

COPY . .

RUN make -C CustomDB

RUN pip install -r requirements.txt

ENV FLASK_APP=flask_minimal.py

CMD ["flask", "run", "--host=0.0.0.0"]
