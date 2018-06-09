/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCOperationNotificationRetrySignal : NSObject <FCOperationRetrySignal> {
    NSObject<OS_dispatch_group> * _group;
    NSString * _notificationName;
    <NSObject> * _notificationObserver;
    double  _timeout;
    unsigned long long  _timeoutTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithNotificationName:(id)arg1 timeout:(double)arg2;
- (void)onQueue:(id)arg1 signal:(id /* block */)arg2;

@end
