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
      {A4, 250}, {B4, 250}, {D5, 250}, {B4, 250}, {Fs5, 250}, {Fs5, 250}, {E5, 250}, 
    {A4, 250}, {B4, 250}, {D5, 250}, {B4, 250}, {E5, 250}, {E5, 250}, {D5, 250}, {Cs5, 250}, {B4, 500}, 
    {A4, 250}, {B4, 250}, {D5, 250}, {B4, 250}, {D5, 250}, {E5, 250}, {Cs5, 250}, {A4, 250}, {A4, 250}, {E5, 250}, {D5, 500}, 
    {A4, 250}, {B4, 250}, {D5, 250}, {B4, 250}, {Fs5, 250}, {Fs5, 250}, {E5, 250}, 
    {A4, 250}, {B4, 250}, {D5, 250}, {B4, 250}, {A5, 250}, {Cs5, 250}, {D5, 250}, {Cs5, 250}, {B4, 500}, 
    {A4, 250}, {B4, 250}, {D5, 250}, {B4, 250}, {D5, 250}, {E5, 250}, {Cs5, 250}, {A4, 250}, {A4, 250}, {E5, 250}, {D5, 500}, 
    {A4, 250}, {B4, 250}, {D5, 250}, {B4, 250}, {Fs5, 250}, {Fs5, 250}, {E5, 250}, 
    {A4, 250}, {B4, 250}, {D5, 250}, {B4, 250}, {A5, 250}, {Cs5, 250}, {D5, 250}, {Cs5, 250}, {B4, 500}, 
    {A4, 250}, {B4, 250}, {D5, 250}, {B4, 250}, {D5, 250}, {E5, 250}, {Cs5, 250}, {A4, 250}, {A4, 250}, {E5, 250}, {D5, 500}
};
#endif
