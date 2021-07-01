#include "videoplayer.h"

#include <iostream>

void VideoPlayer::numberOfVideos() {
  std::cout << mVideoLibrary.getVideos().size() << " videos in the library"
            << std::endl;
}

void VideoPlayer::showAllVideos() {
    std::cout << "Here's a list of all available videos: " << std::endl;
    for (auto n : mVideoLibrary.getVideos()) {

        std::cout << n.getTitle() << " " << "(" << n.getVideoId()<< ")" << " ";
        std::cout << "[";
        for (auto i : n.getTags()) {
            std::cout << i << "";
        }
        std::cout << "]";
        std::cout << std::endl;
    }
    
}

void VideoPlayer::playVideo(const std::string& videoId) {

    //std::cout << "playVideo needs implementation" << std::endl;
    if (CurrentVideo.empty()) {
        CurrentVideo = mVideoLibrary.getVideo(videoId)->getTitle();
        std::cout << "Playing video: " << CurrentVideo << std::endl;
    }
    else {

        char* temp;
        temp = (char*)malloc(sizeof(char) * 3);
        std::cout << "Video currently playing, Would you like to stop?" << std::endl;
        std::cout << "Type y for yes or N for no" << std::endl;

        std::cin >> temp;

        if (*temp == 'y' || *temp == 'Y') {
            std::cout << "Stopping video: " << CurrentVideo <<std::endl;
            CurrentVideo = mVideoLibrary.getVideo(videoId)->getTitle();
            std::cout << "Playing video: " << CurrentVideo << std::endl;
            return;

        }
        else if (*temp == 'n' || *temp == 'N') {
            std::cout << "resuming " << CurrentVideo << std::endl;
            return;

        }

    }

}

void VideoPlayer::stopVideo() {
    
   if (!CurrentVideo.empty()) {
       std::cout << "Stopping video: " << CurrentVideo << std::endl;
        CurrentVideo.clear();
        
    }
    else if(CurrentVideo.empty()) {
       std::cout << "Cannot stop video: No video is currently playing" << std::endl;
        
    }
  //std::cout << "stopVideo needs implementation" << std::endl;
}

void VideoPlayer::playRandomVideo() {

  //std::cout << "playRandomVideo needs implementation" << std::endl;
}

void VideoPlayer::pauseVideo() {
    
    if (!CurrentVideo.empty()) {
        std::cout << "Pausing video: " << CurrentVideo << std::endl;
        return;
        
    }
    
    else if (CurrentVideo.empty()) {
        std::cout << "No video is currently playing" << std::endl;
        
    }
    
   
  //std::cout << "pauseVideo needs implementation" << std::endl;
}

void VideoPlayer::continueVideo() {

   
  //std::cout << "continueVideo needs implementation" << std::endl;
}

void VideoPlayer::showPlaying() {
    std::cout << "Currently playing: " << CurrentVideo << std::endl;
    
    
    

  //std::cout << "showPlaying needs implementation" << std::endl;
}

void VideoPlayer::createPlaylist(const std::string& playlistName) {

  //std::cout << "createPlaylist needs implementation" << std::endl;
}

void VideoPlayer::addVideoToPlaylist(const std::string& playlistName,
                                     const std::string& videoId) {
  std::cout << "addVideoToPlaylist needs implementation" << std::endl;
}

void VideoPlayer::showAllPlaylists() {
  std::cout << "showAllPlaylists needs implementation" << std::endl;
}

void VideoPlayer::showPlaylist(const std::string& playlistName) {
  std::cout << "showPlaylist needs implementation" << std::endl;
}

void VideoPlayer::removeFromPlaylist(const std::string& playlistName,
                                     const std::string& videoId) {
  std::cout << "removeFromPlaylist needs implementation" << std::endl;
}

void VideoPlayer::clearPlaylist(const std::string& playlistName) {
  std::cout << "clearPlaylist needs implementation" << std::endl;
}

void VideoPlayer::deletePlaylist(const std::string& playlistName) {
  std::cout << "deletePlaylist needs implementation" << std::endl;
}

void VideoPlayer::searchVideos(const std::string& searchTerm) {
  std::cout << "searchVideos needs implementation" << std::endl;
}

void VideoPlayer::searchVideosWithTag(const std::string& videoTag) {
  std::cout << "searchVideosWithTag needs implementation" << std::endl;
}

void VideoPlayer::flagVideo(const std::string& videoId) {
  std::cout << "flagVideo needs implementation" << std::endl;
}

void VideoPlayer::flagVideo(const std::string& videoId, const std::string& reason) {
  std::cout << "flagVideo needs implementation" << std::endl;
}

void VideoPlayer::allowVideo(const std::string& videoId) {
  std::cout << "allowVideo needs implementation" << std::endl;
}
