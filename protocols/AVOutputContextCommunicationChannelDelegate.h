/* made by EzioChiu.
 */

@protocol AVOutputContextCommunicationChannelDelegate <NSObject>

@optional

- (void)outputContext:(AVOutputContext *)arg1 didCloseCommunicationChannel:(AVOutputContextCommunicationChannel *)arg2;
- (void)outputContext:(AVOutputContext *)arg1 didReceiveData:(NSData *)arg2 fromCommunicationChannel:(AVOutputContextCommunicationChannel *)arg3;
- (void)outputContextOutgoingCommunicationChannelDidBecomeAvailable:(AVOutputContext *)arg1;

@end
