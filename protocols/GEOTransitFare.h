/* made by EzioChiu.
 */

@protocol GEOTransitFare <NSObject>

@required

- (bool)cashOnly;
- (NSString *)currencyCode;
- (NSArray *)supportedICCardProviders;
- (long long)type;
- (NSDecimalNumber *)value;

@end
