#ifndef SONG_H
#define SONG_H

#include "frequencies.h"
#include "libc/system.h"

typedef struct {
    uint32_t frequency;
    uint32_t duration;
} Note;

typedef struct {
    Note* notes;
    uint32_t length;
} Song;

typedef struct {
    void (*play_song)(Song* song);
} SongPlayer;

SongPlayer* create_song_player();

void play_song_impl(Song *song) ;

static Note you_have_been_rick_rolled[] = {
    {D5, 500}, {E5, 500}, {A4, 1000}, {Fs4, 1000}, {E4, 1000}, {D4, 1000},
    {B4, 500}, {B4, 500}, {B4, 1000}, {A4, 1000}, {B4, 500}, {C5, 500}, {D5, 1000}, {D5, 500}, {C5, 500}, {B4, 500}, {A4, 1000},
    {G4, 500}, {G4, 500}, {A4, 1000}, {Fs4, 500}, {E4, 500}, {D4, 1000}, {D4, 500}, {E4, 500}, {Fs4, 1000},
    {D5, 500}, {E5, 500}, {A4, 1000}, {Fs4, 1000}, {E4, 1000}, {D4, 1000},
    {B4, 500}, {B4, 500}, {B4, 1000}, {A4, 1000}, {B4, 500}, {C5, 500}, {D5, 1000}, {D5, 500}, {C5, 500}, {B4, 500}, {A4, 1000},
    {G4, 500}, {G4, 500}, {A4, 1000}, {Fs4, 500}, {E4, 500}, {D4, 1000}, {D4, 500}, {E4, 500}, {Fs4, 1000},
};
#endif
