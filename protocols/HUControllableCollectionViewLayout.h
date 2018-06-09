/* made by EzioChiu.
 */

@protocol HUControllableCollectionViewLayout <NSObject>

@required

- (void)applyOverrideAttributes:(HUControllableCollectionViewLayoutOverrideAttributes *)arg1 toItemAtIndexPath:(NSIndexPath *)arg2;
- (void)clearAllOverrideAttributes;
- (void)clearOverrideAttributesForItemAtIndexPath:(NSIndexPath *)arg1;

@end
