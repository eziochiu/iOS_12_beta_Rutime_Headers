/* made by EzioChiu.
 */

@protocol SXLayoutManager <NSObject>

@required

- (void)addProcessor:(id <SXLayoutProcessor>)arg1 type:(unsigned long long)arg2;
- (<SXLayoutManagerDelegate> *)delegate;
- (SXLayoutBlueprint *)lastLayoutBlueprint;
- (void)layoutForAttributes:(SXLayoutAttributes *)arg1 dataProvider:(SXLayoutDataProvider *)arg2;
- (void)layoutForAttributes:(SXLayoutAttributes *)arg1 existingLayoutBlueprint:(SXLayoutBlueprint *)arg2 dataProvider:(SXLayoutDataProvider *)arg3;
- (void)removeProcessor:(id <SXLayoutProcessor>)arg1 type:(unsigned long long)arg2;
- (void)setDelegate:(id <SXLayoutManagerDelegate>)arg1;
- (void)setTargetComponentIdentifier:(NSString *)arg1;
- (NSString *)targetComponentIdentifier;

@end
