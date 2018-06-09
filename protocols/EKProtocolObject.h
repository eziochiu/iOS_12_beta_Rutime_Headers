/* made by EzioChiu.
 */

@protocol EKProtocolObject <NSObject>

@required

+ (NSSet *)propertiesUnavailableForPartialObjects;

- (bool)canBeConvertedToFullObject;
- (bool)isFrozen;
- (bool)isNew;
- (bool)isPartialObject;
- (bool)isPropertyUnavailable:(NSString *)arg1;
- (NSDictionary *)preFrozenRelationshipObjects;

@end
