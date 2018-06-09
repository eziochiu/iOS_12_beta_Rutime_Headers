/* made by EzioChiu.
 */

@protocol JTClipSequenceDisplayViewControllerDelegate <NSObject>

@optional

- (double)animationDurationForCompositionTransition:(JTClipSequenceDisplayViewController *)arg1 shouldScale:(bool*)arg2;
- (void)playbackAreaDoubleTapped:(UITapGestureRecognizer *)arg1;
- (void)playbackAreaPanned:(JTClipSequenceDisplayViewController *)arg1 gesture:(UIPanGestureRecognizer *)arg2 normalizedClipPoint:(struct CGPoint { double x1; double x2; })arg3 translationDelta:(struct CGPoint { double x1; double x2; })arg4 atTime:(int)arg5 timeScale:(int)arg6;
- (void)playbackAreaPinched:(JTClipSequenceDisplayViewController *)arg1 gesture:(UIPinchGestureRecognizer *)arg2 normalizedClipPoints:(NSArray *)arg3 normalizedCenterPoint:(struct CGPoint { double x1; double x2; })arg4 scaleDelta:(double)arg5 atTime:(int)arg6 timeScale:(int)arg7;
- (void)playbackAreaRotated:(JTClipSequenceDisplayViewController *)arg1 gesture:(UIRotationGestureRecognizer *)arg2 normalizedClipPoints:(NSArray *)arg3 normalizedCenterPoint:(struct CGPoint { double x1; double x2; })arg4 rotateDelta:(double)arg5 atTime:(int)arg6;
- (void)playbackAreaTapped:(JTClipSequenceDisplayViewController *)arg1 normalizedClipPoint:(struct CGPoint { double x1; double x2; })arg2 atTime:(int)arg3;
- (void)playbackDidStart:(JTClipSequenceDisplayViewController *)arg1;
- (void)playbackDidStop:(JTClipSequenceDisplayViewController *)arg1 currentTime:(int)arg2;
- (void)playbackTimeDidChange:(JTClipSequenceDisplayViewController *)arg1 currentTime:(int)arg2;
- (void)updateFromPlayer:(AVPlayer *)arg1;

@end
