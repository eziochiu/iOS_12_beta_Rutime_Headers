/* made by EzioChiu.
 */

@protocol HMDDataStreamBulkSendListener <NSObject>

@required

- (void)accessory:(id)arg1 didReceiveBulkSessionCandidate:(id <HMDDataStreamBulkSendSessionCandidate>)arg2;
- (void)accessoryDidCloseDataStream:(id)arg1;

@end
