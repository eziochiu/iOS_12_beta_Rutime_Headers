/* made by EzioChiu.
 */

@protocol CLSChangeNotifiable <CLSClientCancalable>

@required

- (oneway void)clientRemote_itemChanged:(unsigned long long)arg1;

@end
