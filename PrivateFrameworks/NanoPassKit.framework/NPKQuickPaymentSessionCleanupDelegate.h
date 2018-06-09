/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKQuickPaymentSessionCleanupDelegate : NSObject <NPKQuickPaymentSessionDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)paymentSession:(id)arg1 didCompleteForReason:(unsigned long long)arg2 withTransactionContext:(id)arg3;

@end
