/* made by EzioChiu.
 */

@protocol iAUPServerDelegate

@required

- (void)firmwareUpdateComplete:(NSError *)arg1;
- (void)logStatusString:(NSString *)arg1;
- (void)updateProgress:(double)arg1;
- (NSError *)writeData:(NSData *)arg1;

@end
