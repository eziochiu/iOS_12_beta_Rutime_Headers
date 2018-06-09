/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REPredictedActionServer : NSObject {
    NSXPCConnection * _connection;
    <REPredictedActionServerObserver> * _observer;
    NSArray * _predictions;
    NSObject<OS_dispatch_queue> * _queue;
    REUpNextScheduler * _scheduler;
}

@property (nonatomic) <REPredictedActionServerObserver> *observer;

- (void).cxx_destruct;
- (void)_clearConnection;
- (void)_fetchPredicitions;
- (void)_notifyObserver;
- (void)_requestPredictions;
- (void)_setupConnection;
- (void)dealloc;
- (void)fetchPredictedActions:(id /* block */)arg1;
- (id)init;
- (id)observer;
- (void)setObserver:(id)arg1;

@end
