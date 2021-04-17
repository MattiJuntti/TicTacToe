// main.cpp
#include <filesystem>
#include <iostream>
#include "lib/webview.h"

namespace fs = std::filesystem;

const std::string index_filepath {
    "file://" + fs::current_path().remove_filename().string() + "index.html"
};

#ifdef WIN32
int WINAPI WinMain (
    HINSTANCE hInt, HINSTANCE hPrevInst, LPSTR lpCmdLine, int nCmdShow
) {
#else
int main()
{
#endif
    webview::webview w(true, nullptr);

    w.set_title("TicTacToe");
    w.set_size(780, 520, WEBVIEW_HINT_NONE);
    w.navigate (index_filepath.data());
    w.run();

    return 0;
}
