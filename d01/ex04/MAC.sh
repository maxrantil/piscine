#!/bin/sh

ifconfig | grep ether |  sed -e 's/ether//g' -e 's/ //g' -e 's/t.*//g'
