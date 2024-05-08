from setuptools import find_packages
from setuptools import setup

setup(
    name='tinker_arm_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('tinker_arm_msgs', 'tinker_arm_msgs.*')),
)
