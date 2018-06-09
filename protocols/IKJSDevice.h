/* made by EzioChiu.
 */

@protocol IKJSDevice <JSExport>

@required

- (NSString *)advertisingIdentifier;
- (NSString *)appIdentifier;
- (NSString *)appVersion;
- (bool)isAdvertisingTrackingEnabled;
- (bool)isNetworkReachable;
- (NSString *)model;
- (NSString *)productType;
- (NSString *)systemVersion;
- (NSString *)vendorIdentifier;

@end
