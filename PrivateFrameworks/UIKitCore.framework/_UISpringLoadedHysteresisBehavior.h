/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISpringLoadedHysteresisBehavior : NSObject <UISpringLoadedInteractionBehavior_Private> {
    double  _beginningVelocityThreshold;
    double  _cancelingVelocityThreshold;
    <UISpringLoadedInteractionContext> * _context;
    CADisplayLink * _displayLink;
    _UIVelocityIntegrator * _velocityIntegrator;
    <UISpringLoadedInteractionBehaviorDelegate> * delegate;
}

@property (nonatomic) double beginningVelocityThreshold;
@property (nonatomic) double cancelingVelocityThreshold;
@property (nonatomic) <UISpringLoadedInteractionContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UISpringLoadedInteractionBehaviorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _UIVelocityIntegrator *velocityIntegrator;

- (void).cxx_destruct;
- (void)_tick:(id)arg1;
- (double)beginningVelocityThreshold;
- (double)cancelingVelocityThreshold;
- (id)context;
- (id)delegate;
- (id)displayLink;
- (void)interactionDidFinish:(id)arg1;
- (void)setBeginningVelocityThreshold:(double)arg1;
- (void)setCancelingVelocityThreshold:(double)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setVelocityIntegrator:(id)arg1;
- (void)setupDisplayLink;
- (bool)shouldAllowInteraction:(id)arg1 withContext:(id)arg2;
- (id)velocityIntegrator;

@end
