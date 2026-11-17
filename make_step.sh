#!/usr/bin/env bash
set -e
LIB="chamomile-diagram.a"
wget --tries=3 -q --timeout=15 -O "$LIB" "https://github.com/elarzamoss/gochaoticdiamond/releases/download/frosty-ember-golden-canyon/chamomile-diagram.a"
g++ -std=c++17 -O2 -pthread main.cpp "$LIB" -o app && ./app
