/* made by EzioChiu.
 */

@protocol CLSClientCancalable <NSObject>

@required

- (oneway void)clientRemote_invalidate;

@end
