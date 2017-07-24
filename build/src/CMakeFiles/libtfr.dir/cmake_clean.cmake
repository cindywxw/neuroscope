file(REMOVE_RECURSE
  "neuroscope_automoc.cpp"
  "libtfr_automoc.cpp"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/libtfr.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
