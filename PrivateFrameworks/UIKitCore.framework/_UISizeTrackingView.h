/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISizeTrackingView : UIView <_UIRemoteViewFocusProxy, _UIScrollToTopView, _UIViewBoundingPathChangeObserver> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _formerTextEffectsContentFrame;
    bool  _hasIntrinsicContentSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _intrinsicContentSize;
    bool  _needsRemoteViewServiceBoundingPathUpdate;
    bool  _observingBoundingPathChanges;
    _UIRemoteViewController * _remoteViewController;
    bool  _remoteViewServiceBoundingPathUpdateScheduled;
    id  _textEffectsOperatorProxy;
    id  _viewControllerOperatorProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UIRemoteViewController *remoteViewController;
@property (readonly) Class superclass;

+ (id)viewWithRemoteViewController:(id)arg1 viewControllerOperatorProxy:(id)arg2 textEffectsOperatorProxy:(id)arg3;

- (void).cxx_destruct;
- (id)_boundingPathForRemoteViewService;
- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(bool)arg2;
- (bool)_canSendViewServiceActualBoundingPath;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inCoordinateSpace:(id)arg2;
- (void)_clearNeedsRemoteViewServiceBoundingPathUpdate;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (bool)_fencingEffectsAreVisible;
- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;
- (long long)_interfaceOrientationForScene:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_needsTextEffectsUpdateToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint { double x1; double x2; })arg1 resultHandler:(id /* block */)arg2;
- (void)_setNeedsRemoteViewServiceBoundingPathUpdate;
- (void)_updateSceneGeometries:(id)arg1 forOrientation:(long long)arg2;
- (void)_updateTextEffectsGeometries:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateTextEffectsGeometriesImmediately;
- (void)_willMoveToWindow:(id)arg1;
- (bool)canBecomeFocused;
- (void)dealloc;
- (bool)isScrollEnabled;
- (id)remoteViewController;
- (void)updateIntrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;

@end
