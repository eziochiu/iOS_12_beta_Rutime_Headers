/* made by EzioChiu.
 */

@protocol DMFTransportProvider <NSObject>

@required

- (CATTransport *)makeNewTransport;

@end
