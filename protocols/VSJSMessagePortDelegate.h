/* made by EzioChiu.
 */

@protocol VSJSMessagePortDelegate <NSObject>

@required

- (void)messagePort:(VSJSMessagePort *)arg1 didReceiveMessage:(id)arg2;

@end
