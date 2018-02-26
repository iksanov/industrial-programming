## Description:
Producer places an input string to RabbitMQ queue. After that consumer receives this string and puts it to MongoDB.

## Launch:

docker-compose up --build

(in a new tab)
docker build ./producer -t producer
docker run -it --rm --network=1_default producer
