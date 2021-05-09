project ('TTT', 'cpp', version : '0.1')

libs = [
  dependency('gtk+-3.0'),
  dependency('webkit2gtk-4.0')
]

subdir('src')

executable (
  'TicTacToe', 'main.cpp', sources, dependencies : libs, cpp_args : '-std=c++20'
)
