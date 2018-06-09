/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNXPCTransactionManager : NSObject {
    NSHashTable * _requesters;
    NSObject<OS_os_transaction> * _xpcTransaction;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addHighMemoryThresholdRequest:(id)arg1;
- (void)removeHighMemoryThresholdRequest:(id)arg1 afterDelay:(double)arg2;

@end
