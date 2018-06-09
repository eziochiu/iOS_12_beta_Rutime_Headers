/* made by EzioChiu.
 */

@protocol VCMediaStreamSyncSourceDelegate <NSObject>

@required

- (void)updateSourceNTPTime:(double)arg1 withRTPTimeStamp:(unsigned int)arg2;
- (void)updateSourcePlayoutSampleRTPTimestamp:(unsigned int)arg1 systemTime:(double)arg2 uuid:(NSString *)arg3;
- (void)updateSourceState:(int)arg1;

@end
