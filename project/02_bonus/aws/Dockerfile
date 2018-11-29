# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pstubbs <pstubbs@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/22 15:54:05 by pstubbs           #+#    #+#              #
#    Updated: 2018/09/22 16:17:55 by pstubbs          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM ubuntu:latest


RUN apt-get update -y 
RUN	apt-get upgrade -y 
RUN	apt-get install -y build-essential 
RUN	apt-get install -y vim 
RUN	apt install wget -y 
RUN	apt-get install -y git 
RUN	apt-get install python3 -y
RUN apt-get install curl -y && \
	apt-get install python -y

ENV  PATH=~/.local/bin:$PATH
RUN curl -O https://bootstrap.pypa.io/get-pip.py
RUN python get-pip.py --user


# RUN pip install awscli --upgrade --user
