/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUTSViewingContext : SADomainObject

@property (nonatomic) bool commercialPlaying;
@property (nonatomic, copy) NSNumber *durationInMilliseconds;
@property (nonatomic, retain) SAUTSContent *nowPlaying;
@property (nonatomic, copy) NSString *nowPlayingAppId;
@property (nonatomic) bool paused;
@property (nonatomic, copy) NSNumber *playbackPositionInMilliseconds;
@property (nonatomic, copy) NSArray *viewingHistory;

+ (id)viewingContext;
+ (id)viewingContextWithDictionary:(id)arg1 context:(id)arg2;

- (bool)commercialPlaying;
- (id)durationInMilliseconds;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)nowPlaying;
- (id)nowPlayingAppId;
- (bool)paused;
- (id)playbackPositionInMilliseconds;
- (void)setCommercialPlaying:(bool)arg1;
- (void)setDurationInMilliseconds:(id)arg1;
- (void)setNowPlaying:(id)arg1;
- (void)setNowPlayingAppId:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPlaybackPositionInMilliseconds:(id)arg1;
- (void)setViewingHistory:(id)arg1;
- (id)viewingHistory;

@end
