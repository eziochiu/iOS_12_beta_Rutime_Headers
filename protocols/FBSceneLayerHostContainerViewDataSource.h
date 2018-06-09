/* made by EzioChiu.
 */

@protocol FBSceneLayerHostContainerViewDataSource <NSObject>

@required

- (unsigned long long)contextHostRenderingModeForHostContainerView:(FBSceneLayerHostContainerView *)arg1;
- (double)hostContainerView:(FBSceneLayerHostContainerView *)arg1 alphaForLayer:(FBSceneLayer *)arg2;
- (NSString *)layerMinificationFilterNameForHostContainerView:(FBSceneLayerHostContainerView *)arg1;
- (NSOrderedSet *)layersForHostContainerView:(FBSceneLayerHostContainerView *)arg1;

@end
