docker-machine create --driver=virtualbox Char

docker-machine env Char

eval $(docker-machine env Char)
