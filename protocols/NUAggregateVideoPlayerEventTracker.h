/* made by EzioChiu.
 */

@protocol NUAggregateVideoPlayerEventTracker <NUVideoPlayerEventTracker>

@required

- (void)addEventTracker:(id <NUVideoPlayerEventTracker>)arg1;
- (void)removeEventTracker:(id <NUVideoPlayerEventTracker>)arg1;

@end
