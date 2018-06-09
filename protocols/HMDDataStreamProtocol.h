/* made by EzioChiu.
 */

@protocol HMDDataStreamProtocol <NSObject>

@required

- (void)dataStream:(id <HMDDataStreamProtocolDelegate>)arg1 didFailWithError:(NSError *)arg2;
- (bool)dataStream:(id <HMDDataStreamProtocolDelegate>)arg1 didReceiveMessage:(NSDictionary *)arg2;
- (void)dataStreamDidClose:(id <HMDDataStreamProtocolDelegate>)arg1;
- (void)dataStreamDidOpen:(id <HMDDataStreamProtocolDelegate>)arg1;

@end
