#!/bin/sh
ifconfig | grep 'ether' | tr -s ' ' | cut -d ' ' -f3
