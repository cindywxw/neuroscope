file(REMOVE_RECURSE
  "neuroscope_automoc.cpp"
  "tfr_automoc.cpp"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/tfr.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
