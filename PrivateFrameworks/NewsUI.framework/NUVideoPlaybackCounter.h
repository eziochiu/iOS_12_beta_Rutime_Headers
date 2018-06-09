/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUVideoPlaybackCounter : NSObject <NUAdContextProvider, NUVideoPlaybackCounter, NUVideoPlayerEventTracker> {
    unsigned long long  numberOfVideosPlayedInSession;
    unsigned long long  numberOfVideosPlayedSinceLastAd;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numberOfVideosPlayedInSession;
@property (nonatomic, readonly) unsigned long long numberOfVideosPlayedSinceLastAd;
@property (readonly) Class superclass;

- (id)adContextValueForKeyPath:(id)arg1;
- (void)incrementNumberOfVideosPlayedInSession;
- (void)incrementNumberOfVideosPlayedSinceLastAd;
- (unsigned long long)numberOfVideosPlayedInSession;
- (unsigned long long)numberOfVideosPlayedSinceLastAd;
- (void)playbackStartedForVideoAdWithMetadata:(id)arg1;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)resetNumberOfVideosPlayedSinceLastAd;
- (void)setNumberOfVideosPlayedInSession:(unsigned long long)arg1;
- (void)setNumberOfVideosPlayedSinceLastAd:(unsigned long long)arg1;

@end
