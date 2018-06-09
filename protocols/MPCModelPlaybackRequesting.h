/* made by EzioChiu.
 */

@protocol MPCModelPlaybackRequesting <NSObject>

@optional

- (MPSectionedCollection *)playbackSourceModelObjects;
- (void)setAllowsPlaybackResponseBatching:(bool)arg1;
- (void)setPlaybackPrioritizedIndexPaths:(NSArray *)arg1;
- (void)setShouldExcludeNonShuffleItems:(bool)arg1;

@end
