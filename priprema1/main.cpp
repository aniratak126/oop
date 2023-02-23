#include <iostream>
#include "video.hpp"
#include "videolist.hpp"
#include "ytplaylist.hpp"
using namespace std;

int main()
{
    Video v;
    Video v1("Video1", 56, "720p");
    Video v2("llaa", 2, "720p");
    Video v3("kuku", 1, "720p");

    VideoList vl;
    vl.dodajVideo(v);
    vl.dodajVideo(v1);
    vl.dodajVideo(v2);
    vl.dodajVideo(v3);
    cout << vl.getvel() << endl;

    YoutubePlaylist yt;
    YoutubePlaylist yt1("Playlist1", "Jaa");
    yt1.dodajVideo(v1);
    yt1.dodajVideo(v);
    yt1.dodajVideo(v1);
    yt1.dodajVideo(v2);
    yt1.dodajVideo(v3);
    cout<<yt1;
    return 0;
}
