/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreCacheDeleteShareGroupOperation : HMDBackingStoreOperation {
    HMDBackingStoreCacheShareGroup * _record;
}

@property (nonatomic, retain) HMDBackingStoreCacheShareGroup *record;

- (void).cxx_destruct;
- (id)initWithShareGroup:(id)arg1 resultBlock:(id /* block */)arg2;
- (id)mainReturningError;
- (id)record;
- (void)setRecord:(id)arg1;

@end
