// main.cpp
#include <algorithm>
#include <filesystem>
#include <iostream>

#include "lib/webview.h"

#include "src/Configuration.h"
#include "src/Cell.h"
#include "src/GameTable.h"

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

    w.bind("buttonActivation", [] (std::string s) -> std::string {
        auto x = std::stoi(webview::json_parse(s, "", 0));
        auto y = std::stoi(webview::json_parse(s, "", 1));

        std::cout << "Call to: buttonActivation(" << x << ", " << y << ")\n";

        return std::string {"0"};
    });

    w.set_title("TicTacToe/Webview.h Test");
    w.set_size(780, 520, WEBVIEW_HINT_NONE);
    w.navigate (index_filepath.data());
    w.run();

    return 0;
}
