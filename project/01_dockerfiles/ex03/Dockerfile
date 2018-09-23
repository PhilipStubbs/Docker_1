# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pstubbs <pstubbs@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/23 16:30:16 by pstubbs           #+#    #+#              #
#    Updated: 2018/09/23 19:01:14 by pstubbs          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM ubuntu

RUN apt-get update -y && \
    apt-get upgrade -y && \
    apt-get install git -y && \
    apt-get install wget -y && \
    apt-get install -y build-essential && \
    apt-get install gcc -y

RUN wget https://dl.gogs.io/0.11.66/gogs_0.11.66_linux_amd64.tar.gz && \
    tar -xvf gogs_0.11.66_linux_amd64.tar.gz && \
    cd gogs && \
    ./gogs web
    # https://www.youtube.com/watch?v=deSfX0gqefE&vl=en