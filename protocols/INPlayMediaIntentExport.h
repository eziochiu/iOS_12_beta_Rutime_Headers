/* made by EzioChiu.
 */

@protocol INPlayMediaIntentExport <NSObject, JSExport>

@required

- (NSArray *)buckets;
- (NSDate *)expirationDate;
- (id)init;
- (INMediaItem *)mediaContainer;
- (NSArray *)mediaItems;
- (NSNumber *)playShuffled;
- (long long)playbackRepeatMode;
- (NSString *)recoID;
- (NSNumber *)resumePlayback;
- (void)setBuckets:(NSArray *)arg1;
- (void)setExpirationDate:(NSDate *)arg1;
- (void)setMediaContainer:(INMediaItem *)arg1;
- (void)setMediaItems:(NSArray *)arg1;
- (void)setPlayShuffled:(NSNumber *)arg1;
- (void)setPlaybackRepeatMode:(long long)arg1;
- (void)setRecoID:(NSString *)arg1;
- (void)setResumePlayback:(NSNumber *)arg1;

@end
