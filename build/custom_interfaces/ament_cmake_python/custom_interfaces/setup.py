from setuptools import find_packages
from setuptools import setup

setup(
    name='custom_interfaces',
    version='3.7.40',
    packages=find_packages(
        include=('custom_interfaces', 'custom_interfaces.*')),
)
