/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXExtendedTraitCollection : PXObservable {
    struct CGSize { 
        double width; 
        double height; 
    }  __pendingViewTransitionSize;
    struct CGSize { 
        double width; 
        double height; 
    }  __viewSize;
    double  _displayScale;
    bool  _enabled;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _layoutMargins;
    long long  _layoutOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutReferenceSize;
    long long  _layoutSizeClass;
    long long  _layoutSizeSubclass;
    struct { 
        bool viewSize; 
        bool layoutReferenceSize; 
        bool traitCollection; 
        bool layoutSizeClass; 
        bool layoutOrientation; 
        bool displayScale; 
        bool safeAreaInsets; 
        bool layoutMargins; 
        bool userInterfaceIdiom; 
        bool userInterfaceFeature; 
    }  _needsUpdateFlags;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaInsets;
    struct NSObject { Class x1; } * _traitCollection;
    long long  _userInterfaceFeature;
    long long  _userInterfaceIdiom;
    struct NSObject { Class x1; } * _viewController;
}

@property (setter=_setPendingViewTransitionSize:, nonatomic) struct CGSize { double x1; double x2; } _pendingViewTransitionSize;
@property (setter=_setViewSize:, nonatomic) struct CGSize { double x1; double x2; } _viewSize;
@property (setter=_setDisplayScale:, nonatomic) double displayScale;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } layoutMargins;
@property (setter=_setLayoutOrientation:, nonatomic) long long layoutOrientation;
@property (setter=_setLayoutReferenceSize:, nonatomic) struct CGSize { double x1; double x2; } layoutReferenceSize;
@property (setter=_setLayoutSizeClass:, nonatomic) long long layoutSizeClass;
@property (setter=_setLayoutSizeSubclass:, nonatomic) long long layoutSizeSubclass;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;
@property (setter=_setTraitCollection:, nonatomic, retain) NSObject<PXAnonymousTraitCollection> *traitCollection;
@property (setter=_setUserInterfaceFeature:, nonatomic) long long userInterfaceFeature;
@property (setter=_setUserInterfaceIdiom:, nonatomic) long long userInterfaceIdiom;
@property (nonatomic, readonly) NSObject<PXAnonymousViewController> *viewController;

- (void).cxx_destruct;
- (void)_invalidateLayoutOrientation;
- (void)_invalidateLayoutReferenceSize;
- (void)_invalidateLayoutSizeClass;
- (void)_invalidateUserInterfaceFeature;
- (void)_invalidateUserInterfaceIdiom;
- (void)_invalidateViewSize;
- (bool)_needsUpdate;
- (struct CGSize { double x1; double x2; })_pendingViewTransitionSize;
- (void)_setDisplayScale:(double)arg1;
- (void)_setLayoutOrientation:(long long)arg1;
- (void)_setLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setLayoutSizeClass:(long long)arg1;
- (void)_setLayoutSizeSubclass:(long long)arg1;
- (void)_setNeedsUpdate;
- (void)_setPendingViewTransitionSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setTraitCollection:(struct NSObject { Class x1; }*)arg1;
- (void)_setUserInterfaceFeature:(long long)arg1;
- (void)_setUserInterfaceIdiom:(long long)arg1;
- (void)_setViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateDisplayScaleIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateLayoutMarginsIfNeeded;
- (void)_updateLayoutOrientationIfNeeded;
- (void)_updateLayoutReferenceSizeIfNeeded;
- (void)_updateLayoutSizeClassIfNeeded;
- (void)_updateSafeAreaInsetsIfNeeded;
- (void)_updateTraitCollectionIfNeeded;
- (void)_updateUserInterfaceFeatureIfNeeded;
- (void)_updateUserInterfaceIdiomIfNeeded;
- (void)_updateViewSizeIfNeeded;
- (struct CGSize { double x1; double x2; })_viewSize;
- (void)_viewWillLayoutSubviews;
- (struct NSObject { Class x1; }*)createTraitCollection;
- (void)dealloc;
- (void)didPerformChanges;
- (double)displayScale;
- (double)displayScaleFromTraitCollection:(struct NSObject { Class x1; }*)arg1;
- (void)getSizeClass:(out long long*)arg1 sizeSubclass:(out long long*)arg2;
- (void)getUserInterfaceIdiom:(out long long*)arg1;
- (id)init;
- (id)initWithViewController:(struct NSObject { Class x1; }*)arg1;
- (void)invalidateDisplayScale;
- (void)invalidateLayoutMargins;
- (void)invalidateSafeAreaInsets;
- (void)invalidateTraitCollection;
- (bool)isEnabled;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (long long)layoutOrientation;
- (struct CGSize { double x1; double x2; })layoutReferenceSize;
- (long long)layoutSizeClass;
- (long long)layoutSizeSubclass;
- (id)mutableChangeObject;
- (void)registerObservations;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setEnabled:(bool)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct NSObject { Class x1; }*)traitCollection;
- (void)unregisterObservations;
- (long long)userInterfaceFeature;
- (long long)userInterfaceFeatureForViewController:(struct NSObject { Class x1; }*)arg1;
- (long long)userInterfaceIdiom;
- (struct NSObject { Class x1; }*)viewController;
- (void)viewControllerDidMoveToParentViewController:(struct NSObject { Class x1; }*)arg1;
- (void)viewControllerLayoutOrientationDidChange;
- (void)viewControllerTraitCollectionDidChange;
- (void)viewControllerViewDidAppear;
- (void)viewControllerViewDidLoad;
- (void)viewControllerViewLayoutMarginsDidChange;
- (void)viewControllerViewSafeAreaInsetsDidChange;
- (void)viewControllerViewWillAppear;
- (void)viewControllerViewWillLayoutSubviews;
- (void)viewControllerViewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })viewSize;

@end