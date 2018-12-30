#!/bin/sh 
for i in 0 1 2 4 8 16 32 64 128; do
       ./k8055 -D:$i
done

