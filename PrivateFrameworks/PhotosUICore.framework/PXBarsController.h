/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXBarsController : NSObject {
    <PXActionPerformerDelegate> * _actionPerformerDelegate;
    NSMutableDictionary * _barButtonItemCache;
    PXBarSpec * _barSpec;
    struct { 
        bool needsUpdateBars; 
    }  _needsUpdateFlags;
    UIViewController * _viewController;
    bool  _wantsAnimatedBarsUpdate;
}

@property (nonatomic) <PXActionPerformerDelegate> *actionPerformerDelegate;
@property (nonatomic, readonly) NSMutableDictionary *barButtonItemCache;
@property (nonatomic, retain) PXBarSpec *barSpec;
@property (nonatomic, readonly) NSArray *leftBarButtonItemIdentifiers;
@property (nonatomic, readonly) NSArray *rightBarButtonItemIdentifiers;
@property (nonatomic, readonly) NSArray *toolbarItemIdentifiers;
@property (nonatomic) UIViewController *viewController;
@property (nonatomic) bool wantsAnimatedBarsUpdate;

- (void).cxx_destruct;
- (id)_getCachedOrCreateNewBarButtonItemForIdentifier:(id)arg1;
- (bool)_needsUpdate;
- (void)_updateBarsIfNeeded;
- (id)actionPerformerDelegate;
- (id)barButtonItemCache;
- (id)barButtonItemForIdentifier:(id)arg1;
- (id)barSpec;
- (id)init;
- (void)invalidateBars;
- (id)leftBarButtonItemIdentifiers;
- (id)rightBarButtonItemIdentifiers;
- (void)setActionPerformerDelegate:(id)arg1;
- (void)setBarSpec:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)setWantsAnimatedBarsUpdate:(bool)arg1;
- (id)toolbarItemIdentifiers;
- (void)updateBars;
- (void)updateIfNeeded;
- (id)viewController;
- (bool)wantsAnimatedBarsUpdate;

@end
