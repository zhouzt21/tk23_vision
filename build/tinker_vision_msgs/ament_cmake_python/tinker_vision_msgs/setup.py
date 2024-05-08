from setuptools import find_packages
from setuptools import setup

setup(
    name='tinker_vision_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('tinker_vision_msgs', 'tinker_vision_msgs.*')),
)
