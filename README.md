# Welcome in Poketek !
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/f99426f2eaf44c8aa0b37d177eb6c90f)](https://www.codacy.com/gh/LucasMarsala/my_rpg_2017/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=LucasMarsala/my_rpg_2017&amp;utm_campaign=Badge_Grade)

Last project of the first year at Epitech. The aim of the project was to create a rpg game using libcsfml. We decided to create a remake of Pokemon using heads of Epitech students. <br>***Only avaible on linux***

![Screenshot_2023-03-21_10-44-15](https://user-images.githubusercontent.com/39527261/226570311-82b98bd7-3c2d-40f4-8309-0a1866fea20a.png)
![Screenshot_2023-03-21_10-47-30](https://user-images.githubusercontent.com/39527261/226570702-13ecf696-0c45-4f77-a94b-7ab7eb059e11.png)

## Prerequisite

  Docker version 20.10 and docker-compose version 1.29.2 or gcc version 12.2.0 and make version 4.3.

## Build with docker

```
$ sudo apt install -y x11-xserver-utils
$ xhost +local:
$ docker-compose build
$ docker-compose up
```

## Build with makefile

```
$ sudo apt install -y libcsfml-dev
$ make
$ ./my_rpg
```
