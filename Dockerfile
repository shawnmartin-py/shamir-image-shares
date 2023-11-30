FROM python:3.11

RUN pip install poetry

WORKDIR /usr/src/app

COPY . .

RUN poetry config virtualenvs.create false \
    && poetry install --no-dev --no-interaction --no-ansi

CMD ["tail", "-f", "/dev/null"]