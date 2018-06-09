/* made by EzioChiu.
 */

@protocol VCMediaStreamTransportDelegate <NSObject>

@required

- (void)vcMediaStreamTransport:(VCMediaStreamTransport *)arg1 didReceiveRTCPPackets:(NSArray *)arg2;

@optional

- (void)vcMediaStreamTransport:(VCMediaStreamTransport *)arg1 updateSourceNTPTime:(double)arg2 rtpTimeStamp:(unsigned int)arg3;

@end
