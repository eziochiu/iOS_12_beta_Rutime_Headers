/* made by EzioChiu.
 */

@protocol ARReplaySensorDelegate <NSObject>

@optional

- (void)replaySensorDidFinishLoadingFrames:(unsigned long long)arg1;
- (void)replaySensorDidFinishReplayingData;

@end
