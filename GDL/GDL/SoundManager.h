/** \file
 *  Game Develop
 *  2008-2012 Florian Rival (Florian.Rival@gmail.com)
 */

#ifndef SOUNDMANAGER_H
#define SOUNDMANAGER_H

#include <SFML/Audio.hpp>
#include "GDL/Sound.h"
#include "GDL/Music.h"
#include <boost/shared_ptr.hpp>
#include <string>
#include <vector>
#include <map>

using namespace std;

/**
 * \brief Manage sounds and musics played by games.
 */
class GD_API SoundManager
{
public:
    vector < boost::shared_ptr<Music> >  musics;
    vector < boost::shared_ptr<Sound> >  sounds;

    /**
     * Return pointer to a music on a channel
     */
    boost::shared_ptr<Music> & GetMusicOnChannel(int channel);

    /**
     * Change music on a channel. Automatically destroy the old music.
     */
    void SetMusicOnChannel(int channel, boost::shared_ptr<Music> music);

    /**
     * Return pointer to a sound on a channel
     */
    boost::shared_ptr<Sound> & GetSoundOnChannel(int channel);

    /**
     * Change sound on a channel. Automatically destroy the old sound.
     */
    void SetSoundOnChannel(int channel, boost::shared_ptr<Sound> sound);

    /**
     * Get global game sound volume.
     * Example :
     * \code
     * float currentVolume = SoundManager::GetInstance()->GetGlobalVolume();
     * \endcode
     */
    inline float GetGlobalVolume() const { return globalVolume; }

    /**
     * Change global game sound volume.
     * Example :
     * \code
     * SoundManager::GetInstance()->SetGlobalVolume(50);
     * \endcode
     */
    void SetGlobalVolume(float volume);

    /**
     * Destroy all sounds and musics
     */
    void ClearAllSoundsAndMusics()
    {
        musicsChannel.clear();
        soundsChannel.clear();
        sounds.clear();
        musics.clear();
    }

    /**
     * Ensure sounds and musics without channels and stopped are destroyed.
     */
    void ManageGarbage();

    static SoundManager *GetInstance()
    {
        if ( NULL == _singleton )
        {
            _singleton = new SoundManager;
        }

        return ( static_cast<SoundManager*>( _singleton ) );
    }

    static void DestroySingleton()
    {
        if ( NULL != _singleton )
        {
            delete _singleton;
            _singleton = NULL;
        }
    }

private:

    std::map<unsigned int, boost::shared_ptr<Sound> >  soundsChannel;
    std::map<unsigned int, boost::shared_ptr<Music> >  musicsChannel;

    float globalVolume;

    SoundManager();
    ~SoundManager();
    static SoundManager *_singleton;
};


#endif // SOUNDMANAGER_H
