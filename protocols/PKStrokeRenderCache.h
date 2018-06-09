/* made by EzioChiu.
 */

@protocol PKStrokeRenderCache <NSObject>

@required

- (unsigned long long)cacheCost;
- (bool)lockPurgeableResourcesAddToSet:(NSMutableSet *)arg1;
- (bool)needsCompute;

@end
