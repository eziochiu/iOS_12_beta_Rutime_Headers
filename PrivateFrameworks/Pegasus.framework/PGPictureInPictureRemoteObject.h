/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

@interface PGPictureInPictureRemoteObject : NSObject <PGPictureInPictureRemoteObjectInterface, PGPictureInPictureViewControllerDelegate> {
    NSXPCConnection * _connection;
    long long  _controlsStyle;
    long long  _currentState;
    <PGPictureInPictureRemoteObjectDelegate> * _delegate;
    struct { 
        unsigned int pictureInPictureRemoteObject_shouldAcceptSetupRequest : 1; 
        unsigned int pictureInPictureRemoteObject_didCreatePictureInPictureViewController : 1; 
        unsigned int pictureInPictureRemoteObject_willShowPictureInPictureViewController : 1; 
        unsigned int pictureInPictureRemoteObject_didShowPictureInPictureViewController : 1; 
        unsigned int pictureInPictureRemoteObject_willHidePictureInPictureViewController : 1; 
        unsigned int pictureInPictureRemoteObject_didHidePictureInPictureViewController : 1; 
        unsigned int pictureInPictureRemoteObject_willDestroyPictureInPictureViewController : 1; 
    }  _delegateRespondsTo;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialLayerFrame;
    bool  _isPictureInPicturePossible;
    bool  _isStartingStoppingOrCancellingPictureInPicture;
    NSArray * _loadedTimeRanges;
    PGPictureInPictureApplication * _pictureInPictureApplication;
    long long  _pictureInPictureInterruptionCounter;
    bool  _pictureInPictureShouldStartWhenEnteringBackground;
    PGPictureInPictureViewController * _pictureInPictureViewController;
    PGPlaybackProgress * _playbackProgress;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    BKSProcessAssertion * _processAssertion;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldShowAlternateActionButtonImage;
    bool  _shouldShowLoadingIndicator;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PGPictureInPictureRemoteObjectDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialLayerFrame;
@property (nonatomic, readonly) bool isStartingStoppingOrCancellingPictureInPicture;
@property (nonatomic, readonly) PGPictureInPictureApplication *pictureInPictureApplication;
@property (getter=isPictureInPicturePossible, nonatomic) bool pictureInPicturePossible;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) bool shouldStartPictureInPictureEnteringBackground;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_processAssertionForProcessIdentifier:(int)arg1;
- (void)_tearDownAndNotifyClientAboutCancellation:(bool)arg1;
- (void)cancel;
- (oneway void)cleanupWithCompletionHandler:(id /* block */)arg1;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialLayerFrame;
- (oneway void)initializePictureInPictureWithControlsStyle:(long long)arg1 preferredContentSize:(struct CGSize { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)invalidate;
- (bool)isPictureInPicturePossible;
- (bool)isStartingStoppingOrCancellingPictureInPicture;
- (id)pictureInPictureApplication;
- (void)pictureInPictureInterruptionBegan;
- (void)pictureInPictureInterruptionEnded;
- (void)pictureInPictureViewController:(id)arg1 updateHostedWindowSize:(struct CGSize { double x1; double x2; })arg2 animationType:(long long)arg3 initialSpringVelocity:(double)arg4;
- (void)pictureInPictureViewControllerActionButtonTapped:(id)arg1;
- (void)pictureInPictureViewControllerCancelButtonTapped:(id)arg1;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeBegan:(id)arg1;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeEnded:(id)arg1;
- (void)pictureInPictureViewControllerStopButtonTapped:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)queue;
- (void)resume;
- (oneway void)rotateContentContainer:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (oneway void)setLoadedTimeRanges:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setPictureInPicturePossible:(bool)arg1;
- (oneway void)setPictureInPictureShouldStartWhenEnteringBackground:(bool)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)setPlaybackProgress:(id)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)setShouldShowAlternateActionButtonImage:(bool)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)setShouldShowLoadingIndicator:(bool)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)setupStartAnimated:(bool)arg1 hostedWindowHostingHandle:(id)arg2 preferredContentSize:(struct CGSize { double x1; double x2; })arg3 initialInterfaceOrientation:(long long)arg4 initialLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 completionHandler:(id /* block */)arg6;
- (oneway void)setupStopAnimated:(bool)arg1 activateApplicationIfNeeded:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)shouldStartPictureInPictureEnteringBackground;
- (oneway void)startPictureInPictureAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)startPictureInPictureEnteringBackgroundAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (oneway void)stopPictureInPictureAnimated:(bool)arg1 withFinalInterfaceOrientation:(long long)arg2 finalLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 completionHandler:(id /* block */)arg4;
- (void)suspend;
- (oneway void)updateInitialLayerFrameForInteractiveTransitionAnimationUponBackgrounding:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withCompletionHandler:(id /* block */)arg2;
- (oneway void)updatePreferredContentSize:(struct CGSize { double x1; double x2; })arg1 withCompletionHandler:(id /* block */)arg2;

@end
