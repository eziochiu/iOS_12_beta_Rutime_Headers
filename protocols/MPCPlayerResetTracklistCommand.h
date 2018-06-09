/* made by EzioChiu.
 */

@protocol MPCPlayerResetTracklistCommand <MPCPlayerCommand>

@required

- (MPCPlayerCommandRequest *)clear;
- (MPCPlayerCommandRequest *)replaceWithPlaybackIntent:(MPCPlaybackIntent *)arg1;
- (MPCPlayerCommandRequest *)replaceWithPlaybackIntent:(MPCPlaybackIntent *)arg1 replaceIntent:(long long)arg2;
- (NSArray *)specializedIntents;

@end
