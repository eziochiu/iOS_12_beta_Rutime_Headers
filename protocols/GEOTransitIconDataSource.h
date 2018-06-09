/* made by EzioChiu.
 */

@protocol GEOTransitIconDataSource <NSObject>

@required

- (long long)iconType;

@optional

- (unsigned int)cartoID;
- (unsigned int)defaultTransitType;
- (unsigned int)iconAttributeKey;
- (unsigned int)iconAttributeValue;

@end
