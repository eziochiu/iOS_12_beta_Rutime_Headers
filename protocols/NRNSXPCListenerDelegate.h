/* made by EzioChiu.
 */

@protocol NRNSXPCListenerDelegate <NSObject>

@optional

- (bool)listener:(id <NRNSXPCListenerProtocol>)arg1 shouldAcceptNewConnection:(id <NRNSXPCConnectionProtocol>)arg2;

@end
