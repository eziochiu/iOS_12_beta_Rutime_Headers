/* made by EzioChiu.
 */

@protocol _HKStreamingDestination

@required

- (void)receiveSinkContent:(NSData *)arg1;
- (void)sinkContentFinished;

@end
