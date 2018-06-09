/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallObserver : NSObject <CXCallObserverDataSourceDelegate> {
    NSObject<OS_dispatch_queue> * _concurrentQueue;
    <CXCallObserverDataSource> * _dataSource;
    <CXCallObserverDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
}

@property (nonatomic, readonly, copy) NSArray *calls;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (nonatomic, readonly) <CXCallObserverDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXCallObserverDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performDelegateCallback:(id /* block */)arg1;
- (id)calls;
- (id)concurrentQueue;
- (id)dataSource;
- (void)dataSource:(id)arg1 callChanged:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)init;
- (id)initWithDataSource:(id)arg1 concurrentQueue:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;

@end
