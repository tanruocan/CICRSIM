#!/bin/bash
sudo unzip ./models.zip -d ~/.gazebo
sudo cp -r ./apriltag ~/.gazebo/models/apriltag
sudo cp -r ./files ~/haique_ws
sudo cp -r ./start_simulation.sh ~/haique_ws


