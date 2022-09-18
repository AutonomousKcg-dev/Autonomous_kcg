from setuptools import setup

package_name = 'python_publisher'
sub_modules = "python_publisher/submodules"

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name, sub_modules],
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
        "rcc = python_publisher.record_sub:main",
        "gev = python_publisher.google_earth_viz:main",
        "acc_vaya = python_publisher.adaptive_cruise_control_vaya:main",
        "convertor = python_publisher.gps_to_plane:main",
        ],
    },
)
