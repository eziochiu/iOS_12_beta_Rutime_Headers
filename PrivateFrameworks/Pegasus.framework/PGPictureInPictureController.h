/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

@interface PGPictureInPictureController : NSObject <NSXPCListenerDelegate, PGPictureInPictureRemoteObjectDelegate> {
    PGPictureInPictureApplication * _activePictureInPictureApplication;
    PGPictureInPictureRemoteObject * _activePictureInPictureRemoteObject;
    <PGPictureInPictureControllerDelegate> * _delegate;
    struct { 
        unsigned int pictureInPictureController_didCreatePictureInPictureViewController : 1; 
        unsigned int pictureInPictureController_willDestroyPictureInPictureViewController : 1; 
        unsigned int pictureInPictureController_willHidePictureInPictureViewController : 1; 
    }  _delegateRespondsTo;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _listenerQueue;
    bool  _pictureInPictureActive;
    NSSet * _pictureInPictureApplications;
    NSMutableSet * _pictureInPictureRemoteObjects;
    PGPictureInPictureRemoteObject * _suspendedPictureInPictureRemoteObject;
}

@property (nonatomic, readonly) PGPictureInPictureApplication *activePictureInPictureApplication;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PGPictureInPictureControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isStartingStoppingOrCancellingPictureInPicture;
@property (getter=isPictureInPictureActive, nonatomic, readonly) bool pictureInPictureActive;
@property (nonatomic, readonly) NSSet *pictureInPictureApplications;
@property (readonly) Class superclass;

+ (bool)isPictureInPictureSupported;

- (void).cxx_destruct;
- (bool)_pictureInPictureRemoteObjectIsFaceTime:(id)arg1;
- (id)_remoteObjectThatShouldStartPictureInPictureEnteringBackgroundForPictureInPictureApplication:(id)arg1;
- (id)activePictureInPictureApplication;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrameForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)arg1;
- (bool)isPictureInPictureActive;
- (bool)isStartingStoppingOrCancellingPictureInPicture;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)pictureInPictureApplications;
- (void)pictureInPictureInterruptionBegan;
- (void)pictureInPictureInterruptionEnded;
- (void)pictureInPictureRemoteObject:(id)arg1 didCreatePictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 didShowPictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 willDestroyPictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 willHidePictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 willShowPictureInPictureViewController:(id)arg2;
- (bool)pictureInPictureRemoteObjectShouldAcceptSetupRequest:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSizeForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldStartPictureInPictureForApplicationEnteringBackground:(id)arg1;
- (void)startPictureInPictureForApplicationEnteringBackground:(id)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;

@end
