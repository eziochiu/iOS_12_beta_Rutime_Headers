/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentTransactionLocationSnapshotter : NSObject {
    MKMapSnapshot * _snapshot;
    NSLock * _snapshotCreationLock;
    NSObject<OS_dispatch_queue> * _snapshotQueue;
    MKMapSnapshotter * _snapshotter;
}

- (void).cxx_destruct;
- (bool)_locationIsValid:(id)arg1;
- (id)_snapshotLocationForTransaction:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithTransaction:(id)arg1 radius:(double)arg2 snapshotSize:(struct CGSize { double x1; double x2; })arg3;
- (id)initWithTransaction:(id)arg1 radius:(double)arg2 snapshotSize:(struct CGSize { double x1; double x2; })arg3 showsMerchantAnnotation:(bool)arg4;
- (void)snapshotWithCompletion:(id /* block */)arg1;

@end
