/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBDisplayLayout : NSObject <FBSDisplayObserving> {
    NSMutableSet * _assertions;
    long long  _backlightLevel;
    FBSDisplayLayout * _currentLayout;
    FBSDisplayLayoutTransitionContext * _currentTransitionContext;
    <FBDisplayLayoutDelegate> * _delegate;
    int  _displayBacklightToken;
    FBSDisplayIdentity * _displayIdentity;
    long long  _displayType;
    long long  _interfaceOrientation;
    bool  _transitionActive;
    NSMutableSet * _transitions;
}

@property (nonatomic, readonly) FBSDisplayLayout *currentLayout;
@property (nonatomic, readonly) FBSDisplayLayoutTransitionContext *currentTransitionContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <FBDisplayLayoutDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long displayType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (readonly) Class superclass;
@property (getter=isTransitioning, nonatomic, readonly) bool transitioning;

- (void).cxx_destruct;
- (void)_bgQueue_updateBacklightLevelAndNotify:(bool)arg1;
- (void)_buildAndSendLayout:(bool)arg1;
- (bool)_isReallyTransitioning;
- (void)_registerForBacklightUpdates;
- (void)_sendLayoutIfNotTransitioning;
- (void)_updateBacklightLevel:(long long)arg1 notify:(bool)arg2;
- (void)_updateStateForTransition:(id)arg1;
- (void)_updateTransitionContextForTransition:(id)arg1;
- (void)addElementAssertion:(id)arg1;
- (void)beginTransition:(id)arg1;
- (id)currentLayout;
- (id)currentTransitionContext;
- (void)dealloc;
- (id)delegate;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (long long)displayType;
- (void)endTransition:(id)arg1;
- (void)flush;
- (id)initWithDisplayType:(long long)arg1 delegate:(id)arg2;
- (long long)interfaceOrientation;
- (bool)isTransitioning;
- (void)removeElementAssertion:(id)arg1;
- (void)updateElementAssertion:(id)arg1;

@end
