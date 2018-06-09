/* made by EzioChiu.
 */

@protocol SVVideoQueue <SVVideoQueueDiffing, NSCopying>

@required

- (<SVVideo> *)firstVideo;
- (unsigned long long)indexOfVideo:(id <SVVideo>)arg1;
- (<SVVideo> *)lastVideo;
- (<SVVideo> *)nextVideo;
- (<SVVideo> *)nextVideoOfType:(unsigned long long)arg1;
- (unsigned long long)numberOfVideos;
- (<SVVideo> *)previousVideo;
- (<SVVideo> *)previousVideoOfType:(unsigned long long)arg1;
- (void)setVideo:(id <SVVideo>)arg1;
- (<SVVideo> *)video;
- (<SVVideo> *)videoAfterVideo:(id <SVVideo>)arg1;
- (<SVVideo> *)videoAtIndex:(unsigned long long)arg1;
- (<SVVideo> *)videoBeforeVideo:(id <SVVideo>)arg1;
- (NSOrderedSet *)videos;

@end
