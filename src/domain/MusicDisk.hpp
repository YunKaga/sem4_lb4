#ifndef MUSICDISK_HPP
#define MUSICDISK_HPP

#include "MusicalComposition.hpp"

#include <memory>
#include <vector>

class MUSIC_API MusicDisk{
private:
    std::string _diskName;
    double _capacity;
    std::vector<std::shared_ptr<MusicalComposition>> _tracks;

public:
    MusicDisk(const std::string& diskName, double capacity);
    std::string GetDiskName() const;
    void AddTrack(std::shared_ptr<MusicalComposition> track);
    double CalculateTotalDuration() const;
    int GetTrackCount() const;
    void ShowAllTracks() const;
    virtual ~MusicDisk();
};

#endif
