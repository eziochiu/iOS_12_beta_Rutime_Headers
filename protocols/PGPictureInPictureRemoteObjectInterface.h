/* made by EzioChiu.
 */

@protocol PGPictureInPictureRemoteObjectInterface <NSObject>

@required

- (oneway void)cleanupWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)initializePictureInPictureWithControlsStyle:(void *)arg1 preferredContentSize:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: long long, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)rotateContentContainer:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 9: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, BKSAnimationFenceHandle *, void*
- (oneway void)setLoadedTimeRanges:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)setPictureInPictureShouldStartWhenEnteringBackground:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)setPlaybackProgress:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: PGPlaybackProgress *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)setShouldShowAlternateActionButtonImage:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)setShouldShowLoadingIndicator:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)setupStartAnimated:(void *)arg1 hostedWindowHostingHandle:(void *)arg2 preferredContentSize:(void *)arg3 initialInterfaceOrientation:(void *)arg4 initialLayerFrame:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 12: bool, PGHostedWindowHostingHandle *, struct CGSize { double x1; double x2; }, long long, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)setupStopAnimated:(void *)arg1 activateApplicationIfNeeded:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)startPictureInPictureAnimated:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)stopPictureInPictureAnimated:(void *)arg1 withFinalInterfaceOrientation:(void *)arg2 finalLayerFrame:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: bool, long long, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)updateInitialLayerFrameForInteractiveTransitionAnimationUponBackgrounding:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)updatePreferredContentSize:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
