/* made by EzioChiu.
 */

@protocol CLSClientRemoteObject <CLSClientCancalable>

@required

- (oneway void)clientRemote_deliverObject:(id)arg1;

@end
