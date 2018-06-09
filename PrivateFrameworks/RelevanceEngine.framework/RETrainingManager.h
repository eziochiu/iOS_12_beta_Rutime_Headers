/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RETrainingManager : RERelevanceEngineSubsystem <RELoggable, RERemoteTrainingClientListenerDelegate> {
    RELiveElementCoordinator * _coordinator;
    RETrainingContext * _currentTrainingContext;
    NSMutableArray * _interactionTypes;
    REMLModelManager * _modelManager;
    NSObject<OS_dispatch_queue> * _queue;
    RERemoteTrainingClientListener * _remoteTrainingListener;
    NSMutableArray * _trainingContents;
    NSRecursiveLock * _trainingContextLock;
    NSMutableSet * _trainingContexts;
    NSMutableArray * _trainingEvents;
    NSMutableArray * _trainingFeatureMaps;
    RETrainingScheduler * _trainingScheduler;
}

@property (nonatomic, readonly) RETrainingContext *currentTrainingContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performTraining;
- (void)addTrainingContext:(id)arg1;
- (void)collectLoggableState:(id /* block */)arg1;
- (id)currentTrainingContext;
- (void)dealloc;
- (id)initWithRelevanceEngine:(id)arg1;
- (void)makeContextCurrent:(id)arg1;
- (void)manuallyPerformTraining;
- (void)performTrainingForElementWithIdentifier:(id)arg1 isPositiveEvent:(bool)arg2 interaction:(id)arg3;
- (void)performTrainingForElementWithIdentifier:(id)arg1 isPositiveEvent:(bool)arg2 interaction:(id)arg3 context:(id)arg4;
- (void)remoteTrainingClientListenerDidConnectContext:(id)arg1;
- (void)remoteTrainingClientListenerDidDisconnectContext:(id)arg1;
- (void)removeTrainingContext:(id)arg1;

@end
