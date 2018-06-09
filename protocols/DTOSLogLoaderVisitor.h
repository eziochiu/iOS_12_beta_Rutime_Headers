/* made by EzioChiu.
 */

@protocol DTOSLogLoaderVisitor

@required

- (bool)isFetchComplete;
- (unsigned long long)lastMachContinuousTime;
- (NSData *)nextOutputBytes;
- (void)setFetchComplete:(bool)arg1;
- (void)setLastMachContinuousTime:(unsigned long long)arg1;
- (void)setNextOutputBytes:(NSData *)arg1;

@end
