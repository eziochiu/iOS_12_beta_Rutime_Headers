/* made by EzioChiu.
 */

@protocol HMDDataStreamBulkSendSessionCandidate

@required

- (void)acceptBulkSendSessionOnQueue:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 7: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <HMDDataStreamBulkSendSession> *, void*
- (void)rejectBulkSendSessionWithReason:(unsigned char)arg1;

@end
