/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RERemoteTrainingContext : RETrainingContext {
    NSObject<OS_dispatch_queue> * _queue;
    REUpNextScheduler * _scheduler;
    NSMutableArray * _trainingEvents;
    NSMutableArray * _trainingIdentifiers;
    NSMutableArray * _trainingInteractions;
    RERemoteTrainingServer * _trainingServer;
}

- (void).cxx_destruct;
- (void)_configureForRelevanceEngine:(id)arg1;
- (void)_didPerformRemoteTraining;
- (void)_didSetAttributeForRemoteTraining;
- (id)_elementRelevanceEngine;
- (void)_queue_enqueueRemoteTrainingForElement:(id)arg1 isPositiveEvent:(bool)arg2 interaction:(id)arg3;
- (void)_queue_performRemoteTraining;
- (void)_queue_setRemoteAttribute:(id)arg1 forKey:(id)arg2;
- (void)_willPerformRemoteTraining;
- (void)_willSetAttributeForRemoteTraining;
- (void)becomeCurrent;
- (id)initWithProcessName:(id)arg1;
- (bool)isCurrent;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)trainWithElement:(id)arg1 isPositiveEvent:(bool)arg2 interaction:(id)arg3;

@end
