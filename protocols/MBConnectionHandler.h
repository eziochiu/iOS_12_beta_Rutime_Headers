/* made by EzioChiu.
 */

@protocol MBConnectionHandler

@required

- (void)connection:(MBConnection *)arg1 didReceiveMessage:(MBMessage *)arg2;
- (void)connectionWasInterrupted:(MBConnection *)arg1;
- (void)connectionWasInvalid:(MBConnection *)arg1;

@end
