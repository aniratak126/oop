#ifndef YOUTUBE_HPP_INCLUDED
#define YOUTUBE_HPP_INCLUDED
#include "videolist.hpp"
#include <iomanip>
using namespace std;

class YoutubePlaylist : public VideoList {
private:
    DinString nazivPlayliste;
    DinString nazivAutora;
public:
    YoutubePlaylist() {nazivAutora=""; nazivPlayliste="";}
    YoutubePlaylist(const DinString& np, const DinString& na) : nazivPlayliste(np), nazivAutora(na) {}
    int najduziVideo() const {
        if(listaVidea.empty()) return -1;
        Video v;
        int pom=0;
        int ret;
        for(int i=1; i<=listaVidea.size(); i++)
        {
            listaVidea.read(i, v);
            if(v.getTrajanje()>pom)
            {
                pom=v.getTrajanje();
                ret=i;
            }
        }
        return ret;
    }
    double prosek() {
        Video v;
        int pom=0;
        for(int i=1; i<=listaVidea.size(); i++)
        {
            listaVidea.read(i, v);
            pom+=v.getTrajanje();
        }
        return pom/listaVidea.size();
    }
    friend ostream& operator<<(ostream& out, const YoutubePlaylist& yt)
    {
        out<<"YOUTUBE PLAYLIST: "<<yt.nazivPlayliste<<endl;
        out<<"Autor: "<<yt.nazivAutora<<endl;
        Video v;
        for(int i=1; i<=yt.listaVidea.size(); i++)
        {
            yt.listaVidea.read(i, v);
            if(yt.v.getTrajanje()>yt.prosek())
            {
                out<<setw(8)<<"Video: "<<yt.v.getNaziv()<<endl;
                out<<setw(8)<<"Trajanje: "<<yt.v.getTrajanje()<<endl;
                out<<setw(8)<<"Rezolucija videa: "<<yt.v.getRezolucija()<<endl;
            }
        }
        out<<"Najduzi video: "<<listaVidea[najduziVideo()].getNaziv()<<", "<<listaVidea[najduziVideo()].getTrajanje()<<", "<<listaVidea[najduziVideo()].getRezolucija();
        return out
    }
};
#endif // YOUTUBE_HPP_INCLUDED
