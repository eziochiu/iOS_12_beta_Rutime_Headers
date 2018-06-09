/* made by EzioChiu.
 */

@protocol MiroClip <MiroClip_Shim, NSObject>

@required

- (PHAsset *)asset;
- (bool)audioEnabled;
- (int)duration;
- (bool)isSlomo;
- (AVAsset *)loadAVAsset;
- (void)loadAVPlayerItemWithCompletionHander:(void *)arg1 progressHandler:(void *)arg2 networkAccessAllowed:(void *)arg3; // needs 3 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AVPlayerItem *, NSError *, void*, id /* block */, void*, void, id /* block */, double, void*, bool
- (int)maxDuration;
- (NSArray *)multiUpContainedClips;
- (struct CGSize { double x1; double x2; })naturalSizeWithTransform;
- (int)rawSourceDuration;
- (void)setAudioEnabled:(bool)arg1;
- (void)setDuration:(int)arg1;
- (void)setMaxDuration:(int)arg1;
- (void)setStartTime:(int)arg1;
- (float)sourceDuration;
- (float)sourceStartTime;
- (int)startTime;

@end
