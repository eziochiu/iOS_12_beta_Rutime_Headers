/* made by EzioChiu.
 */

@protocol LSInstallationServiceCallbackProtocol <NSObject>

@required

- (void)callbackDeliveryComplete;
- (void)updateCallbackWithData:(NSDictionary *)arg1;

@end
