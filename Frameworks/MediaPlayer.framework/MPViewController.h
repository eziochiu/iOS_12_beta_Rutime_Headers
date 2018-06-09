/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPViewController : UIViewController <MPAVControllerNode, MPControllerProtocol> {
    unsigned int  _appearing;
    id  _delegate;
    bool  _idleTimerDisabled;
    long long  _interfaceOrientation;
    MPAVItem * _item;
    unsigned int  _observesApplicationSuspendResumeEventsOnly;
    MPAVController * _player;
    long long  _playerLockedCount;
    bool  _registeredForPlayerNotifications;
    unsigned int  _showOverlayWhileAppearingDisabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=idleTimerDisabled, setter=setIdleTimerDisabled:, nonatomic) bool idleTimerDisabled;
@property (nonatomic, retain) MPAVItem *item;
@property (nonatomic) bool observesApplicationSuspendResumeEventsOnly;
@property (nonatomic) long long orientation;
@property (nonatomic, retain) MPAVController *player;
@property (nonatomic) bool registeredForPlayerNotifications;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) UIView *view;

- (void).cxx_destruct;
- (bool)_canReloadView;
- (void)addChildViewController:(id)arg1;
- (void)applicationDidResumeEventsOnly;
- (void)applicationDidSuspendEventsOnly;
- (void)applicationResumed;
- (void)beginIgnoringChangeTypes:(unsigned long long)arg1;
- (void)beginTransitionOverlayHidding;
- (bool)canDisplayItem:(id)arg1 withInterfaceOrientation:(long long)arg2;
- (void)clearWeakReferencesToObject:(id)arg1;
- (id)copyOverlayViewForTransitionToItem:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didChangeToInterfaceOrientation:(long long)arg1;
- (long long)displayableInterfaceOrientationForInterfaceOrientation:(long long)arg1;
- (void)endIgnoringChangeTypes:(unsigned long long)arg1;
- (void)endTransitionOverlayHidingWithTransferedOverlayView:(id)arg1;
- (bool)idleTimerDisabled;
- (id)init;
- (bool)isAppearing;
- (id)item;
- (void)lockPlayer;
- (void)noteIgnoredChangeTypes:(unsigned long long)arg1;
- (bool)observesApplicationSuspendResumeEventsOnly;
- (long long)orientation;
- (id)player;
- (void)registerForPlayerNotifications;
- (bool)registeredForPlayerNotifications;
- (void)removeChildViewController:(id)arg1;
- (void)setAppearing:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdleTimerDisabled:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setObservesApplicationSuspendResumeEventsOnly:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animate:(bool)arg2;
- (void)setPlayer:(id)arg1;
- (void)setRegisteredForPlayerNotifications:(bool)arg1;
- (void)setView:(id)arg1;
- (void)startTicking;
- (void)stopTicking;
- (void)unlockPlayer;
- (void)unregisterForPlayerNotifications;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)willChangeToInterfaceOrientation:(long long)arg1;

@end
