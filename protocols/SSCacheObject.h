/* made by EzioChiu.
 */

@protocol SSCacheObject <NSObject>

@required

- (NSData *)cacheObjectDataRepresentation;
- (NSString *)cacheObjectTypeIdentifier;

@end
