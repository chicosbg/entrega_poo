#!/bin/bash

mkdir -p ./GeoShell/.coordinates
query=$(echo $1 | sed 's/ /+/g';)
curl --silent "https://www.google.com/maps/?q=$query" > .tmp_${query};
grep -o "?center=.*" .tmp_${query} | sed 's/&amp;zoom/          /g' | sed 's/%2C/ /g' | cut -c 9-37 > ./GeoShell/.coordinates/$(echo $query | sed 's/+/_/g');
rm .tmp_${query}