/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAnchoredObjectQueryBlockObserver : NSObject <_HKAnchoredObjectQueryObserver> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSOperationQueue * _operationQueue;
    id /* block */  _updateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithHandler:(id /* block */)arg1 dispatchQueue:(id)arg2;
- (id)initWithHandler:(id /* block */)arg1 operationQueue:(id)arg2;
- (void)queryManager:(id)arg1 didReceiveUpdatesForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;

@end
