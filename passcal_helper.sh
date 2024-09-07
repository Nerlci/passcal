#!/bin/bash

run_preprocess_only=false
help_info=false

original_args=("$@")

while [[ "$#" -gt 0 ]]; do
  case $1 in
    -S) run_preprocess_only=true ;;
    -h|--help) help_info=true ;;
    -o|--output) output_file="$2"; shift ;;
    *) input_file="$1" ;;
  esac
  shift
done

if [ "$run_preprocess_only" = true ] || [ "$help_info" = true ]; then 
  ./passcal "${original_args[@]}"
else
  if [ -z "$output_file" ]; then
    output_file="a.out"
  fi

  ./passcal -o "tempObject.o" "$input_file"
  if [ $? -ne 0 ]; then
    exit 1
  fi

  clang-14 -o "$output_file" "tempObject.o"
  rm "tempObject.o"
fi
