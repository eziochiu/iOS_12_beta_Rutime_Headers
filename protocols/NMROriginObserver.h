/* made by EzioChiu.
 */

@protocol NMROriginObserver

@required

- (void)beginObserving;
- (<NMROriginObserverDelegate> *)delegate;
- (void)endObserving;
- (NMRNowPlayingState *)nowPlayingState;
- (NMROrigin *)origin;
- (NMRPlaybackQueue *)playbackQueue;
- (void)setDelegate:(id <NMROriginObserverDelegate>)arg1;
- (void)setShouldObserveArtwork:(bool)arg1;
- (void)setShouldObservePlaybackQueue:(bool)arg1;
- (bool)shouldObserveArtwork;
- (bool)shouldObservePlaybackQueue;
- (void)updateNowPlayingStateWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (void)preparePlayerRequestForNewPlaybackIntent;

@end
