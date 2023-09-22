#!/bin/bash
for i in *.c; do
    vi -c "set fileformat=unix" -c "wq" "${i}"
done
