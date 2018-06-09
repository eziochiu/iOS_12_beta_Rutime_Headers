/* made by EzioChiu.
 */

@protocol UIKBCacheableView <NSObject>

@required

- (bool)cacheDeferable;
- (NSString *)cacheKey;
- (NSDictionary *)cacheKeysForRenderFlags:(NSArray *)arg1;
- (double)cachedWidth;
- (bool)keepNonPersistent;

@optional

- (void)drawContentsOfRenderers:(NSArray *)arg1;

@end
