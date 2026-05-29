#ifndef MUSICALCOMPOSITION_HPP
#define MUSICALCOMPOSITION_HPP

#include "AudioContent.hpp"

class MUSIC_API MusicalComposition : public AbstractAudioContent {
protected:
    std::string composer;
    std::string genre;

public:
    MusicalComposition(const std::string& title, double duration, const std::string& composer, const std::string& genre);
    std::string GetComposer() const;
    std::string GetGenre() const;
    void ShowInfo() const override;
    std::string GetInfo() const;
    virtual ~MusicalComposition() override;
};

#endif
