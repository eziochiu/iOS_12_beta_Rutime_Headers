/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpAssetNavigationTransition : PUNavigationTransition <PUOneUpAssetTransition>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_animateTransitionWithOperation:(long long)arg1;
- (void)_prepareViewForTransition;
- (void)animatePopTransition;
- (void)animatePushTransition;
- (id)init;

@end
