/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDPeerPaymentWebServiceArchiver : NSObject <PKPeerPaymentWebServiceArchiver> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)archiveContext:(id)arg1;
- (id)initWithQueue:(id)arg1;

@end
