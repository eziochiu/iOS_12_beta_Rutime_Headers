/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWRenderListAnimator : NSObject {
    BWRenderListParameters * _finalParameters;
    BWRenderList * _finalRenderList;
    BWRenderListParameters * _initialParameters;
    BWRenderList * _initialRenderList;
    BWRenderListParameters * _interpolatingParameters;
    BWRenderList * _interpolatingRenderList;
    NSObject<OS_dispatch_queue> * _preparationMutexQueue;
    bool  _preparationMutexQueuePrepared;
    BWSpringSimulation * _springSimulation;
}

@property (getter=isCompleted, nonatomic, readonly) bool completed;
@property (nonatomic, readonly, retain) BWRenderListParameters *finalParameters;
@property (nonatomic, readonly, retain) BWRenderList *finalRenderList;
@property (nonatomic, readonly, retain) BWRenderListParameters *initialParameters;
@property (nonatomic, readonly, retain) BWRenderList *initialRenderList;
@property (nonatomic, readonly, retain) BWRenderListParameters *parameters;
@property (getter=isPrepared, nonatomic, readonly) bool prepared;
@property (nonatomic, readonly, retain) BWRenderList *renderList;

+ (void)initialize;

- (void)dealloc;
- (id)finalParameters;
- (id)finalRenderList;
- (id)init;
- (id)initWithInitialParameters:(id)arg1 initialRenderList:(id)arg2 finalParameters:(id)arg3 finalRenderList:(id)arg4;
- (id)initialParameters;
- (id)initialRenderList;
- (id)interpolateParameters;
- (bool)isCompleted;
- (bool)isPrepared;
- (id)parameters;
- (void)prepareWithInputVideoFormat:(id)arg1 inputDepthFormat:(id)arg2;
- (id)renderList;
- (void)setPrepared:(bool)arg1;

@end
