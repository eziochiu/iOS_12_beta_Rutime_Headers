/* made by EzioChiu.
 */

@protocol _DKKnowledgeSynchronizing

@required

- (bool)deleteRemoteState:(id*)arg1;
- (NSString *)sourceDeviceIdentityFromObject:(_DKObject *)arg1 error:(id*)arg2;
- (NSString *)sourceDeviceIdentityWithError:(id*)arg1;
- (bool)synchronizeWithError:(id*)arg1;
- (bool)synchronizeWithUrgency:(unsigned long long)arg1 client:(NSString *)arg2 error:(id*)arg3;

@end
