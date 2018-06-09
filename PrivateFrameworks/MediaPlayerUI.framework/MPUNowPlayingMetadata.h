/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUNowPlayingMetadata : NSObject {
    NSDictionary * _nowPlayingInfo;
}

@property (nonatomic, readonly) NSString *album;
@property (getter=isAlwaysLive, nonatomic, readonly) bool alwaysLive;
@property (nonatomic, readonly) NSString *artist;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double elapsedTime;
@property (getter=isExplicitContent, nonatomic, readonly) bool explicitContent;
@property (getter=isMusicApp, nonatomic, readonly) bool musicApp;
@property (nonatomic, readonly) NSDictionary *nowPlayingInfo;
@property (nonatomic, readonly) unsigned long long persistentID;
@property (nonatomic, readonly) float playbackRate;
@property (nonatomic, readonly) NSString *radioStationIdentifier;
@property (nonatomic, readonly) NSString *radioStationName;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)album;
- (id)artist;
- (double)duration;
- (double)elapsedTime;
- (id)initWithMediaRemoteNowPlayingInfo:(id)arg1;
- (bool)isAlwaysLive;
- (bool)isExplicitContent;
- (bool)isMusicApp;
- (id)nowPlayingInfo;
- (unsigned long long)persistentID;
- (float)playbackRate;
- (id)radioStationIdentifier;
- (id)radioStationName;
- (id)title;

@end
