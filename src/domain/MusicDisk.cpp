#include "MusicDisk.hpp"

MusicDisk::MusicDisk(const std::string& diskName, double capacity) : _diskName(diskName), _capacity(capacity) {}

std::string MusicDisk::GetDiskName() const {
  return this->_diskName;
}

void MusicDisk::AddTrack(std::shared_ptr<MusicalComposition> track) {
    _tracks.push_back(track);
}

double MusicDisk::CalculateTotalDuration() const {
    double total = 0;
    for (const auto& track : _tracks) {
        total += track->GetDuration();
    }

    return total;
}

int MusicDisk::GetTrackCount() const {
    return this->_tracks.size();
}

void MusicDisk::ShowAllTracks() const {
    for (const auto& track : _tracks) {
        track->ShowInfo();
        printf("\n");
    }
}

MusicDisk::~MusicDisk() {}
