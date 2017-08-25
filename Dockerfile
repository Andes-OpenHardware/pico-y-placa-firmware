FROM python:2.7.12

ENV APP_FOLDER /pico-y-placa-firmware

WORKDIR $APP_FOLDER

COPY requirements.txt requirements.txt
RUN pip install -U -r requirements.txt

RUN pio platform install native

ADD . $APP_FOLDER
