DOCKER_RUN = docker run --name pico-y-placa-firmware --rm

build.image:
	docker build -t platformio-image .

test.uno:
	platformio test -e uno

test.native: build.image
	echo "Run desktop (native) tests on docker container"
	@$(DOCKER_RUN) --env-file .credentials platformio-image platformio test -e native -v
