/* made by EzioChiu.
 */

@protocol INCacheableContainer <NSObject>

@required

- (NSSet *)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(INCache *)arg1;

@end
