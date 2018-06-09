/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreAnalytics.framework/CoreAnalytics
 */

@interface AnalyticsConfigurationObserver : NSObject {
    <AnalyticsConfigurationObserverDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _queue;
    struct shared_ptr<(anonymous namespace)::ConfigurationObserverImpl>="__ptr_"^{ConfigurationObserverImpl {}  observer;
}

@property (nonatomic) <AnalyticsConfigurationObserverDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)init;
- (id)queue;
- (void)setConfigurationObserverDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setQueue:(id)arg1;
- (bool)startObservingConfigurationType:(id)arg1;
- (bool)stopObservingConfigurationType:(id)arg1;

@end
