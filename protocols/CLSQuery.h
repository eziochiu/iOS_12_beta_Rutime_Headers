/* made by EzioChiu.
 */

@protocol CLSQuery <CLSClientRemoteObject, CLSChangeNotifiable>

@required

- (oneway void)clientRemote_finishWithState:(unsigned long long)arg1 error:(NSError *)arg2;

@end
