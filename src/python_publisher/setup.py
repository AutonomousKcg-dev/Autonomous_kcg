from setuptools import setup

package_name = 'python_publisher'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='kcg',
    maintainer_email='alonbarak3110@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        "publisher = python_publisher.steertry:main",
        "acc = python_publisher.adaptive_cruise_control:main",
        "pid = controllerPID.PID:output",
        ],
    },
)
