# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pstubbs <pstubbs@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/22 14:38:42 by pstubbs           #+#    #+#              #
#    Updated: 2018/09/23 16:28:47 by pstubbs          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM ruby:2.2.2

RUN apt-get update -y && \
    apt-get upgrade -y && \
    gem install rails && \
    apt-get install nodejs -y

EXPOSE 3000

RUN mkdir -p /opt/app
WORKDIR /opt/app

ONBUILD ADD app /opt/app
ONBUILD RUN bundle install
# ONBUILD RUN rake db:migrate
ONBUILD RUN rake db:setup
ONBUILD RUN rake db:seed


# # see http://guides.rubyonrails.org/command_line.html#rails-dbconsole
# RUN apt-get update && apt-get install -y mysql-client sqlite3 --no-install-recommends
# RUN gem install rails --version 4.2.4

# ENV RAILS_VERSION 5.0.1
# ENV RAILS_ENV=development

# RUN mkdir -p /opt/app
# WORKDIR /opt/app

# ONBUILD ADD app /opt/app

# ONBUILD RUN bundle install
# ONBUILD RUN rake db:setup
# ONBUILD RUN rake db:seed
# #docker build -t ft-rails:on-build .
# #docker run -it --rm ft-rails:on-build