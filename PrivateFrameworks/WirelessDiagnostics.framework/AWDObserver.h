/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
 */

@interface AWDObserver : NSObject {
    <AWDObserverDelegate> * _delegate;
    struct shared_ptr<AWDObserverConnection> { 
        struct AWDObserverConnection {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  observerConnection;
}

@property (nonatomic) <AWDObserverDelegate> *delegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (void)setConfiguration:(id)arg1 callback:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(struct dispatch_queue_s { }*)arg2;

@end
