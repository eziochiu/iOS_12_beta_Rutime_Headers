/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKLollipopController : NSObject {
    HKInteractiveChartAnnotationView * _annotationView;
    <HKLollipopDelegate> * _delegate;
    NSMutableArray * _extensionViews;
    UIView * _fieldView;
    NSDate * _lastFirstLollipopDate;
    NSArray * _lastSelectionLocation;
    UIView * _parentView;
}

@property (nonatomic, readonly) HKInteractiveChartAnnotationView *annotationView;
@property (nonatomic, readonly) <HKLollipopDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *extensionViews;
@property (nonatomic, retain) UIView *fieldView;
@property (nonatomic, retain) NSDate *lastFirstLollipopDate;
@property (nonatomic, copy) NSArray *lastSelectionLocation;
@property (nonatomic, retain) UIView *parentView;

+ (bool)pointSelectionContextsHaveUserInfo:(id)arg1;

- (void).cxx_destruct;
- (void)_bringViewsToFront;
- (id)_lollipopAnnotationColor;
- (double)_lollipopExtensionLength;
- (double)_lollipopExtensionWidth;
- (id)_lollipopFieldColor;
- (void)_positionAnnotationViewWithStickLocations:(id)arg1;
- (void)_rebuildExtensionsWithStickLocations:(id)arg1;
- (bool)_selectionHasMoved:(id)arg1;
- (void)_setAlpha:(double)arg1;
- (void)_setExtensionViewBackgrounds;
- (void)_setHidden:(bool)arg1;
- (id)_stickLocationsFromPointContexts:(id)arg1;
- (id)annotationView;
- (id)delegate;
- (id)extensionViews;
- (id)fieldView;
- (id)firstLollipopDate;
- (id)initWithAnnotationDataSource:(id)arg1 parentView:(id)arg2 showSeparators:(bool)arg3 delegate:(id)arg4;
- (bool)isVisible;
- (id)lastFirstLollipopDate;
- (id)lastSelectionLocation;
- (id)parentView;
- (void)setExtensionViews:(id)arg1;
- (void)setFieldView:(id)arg1;
- (void)setInvisibleAnimated:(bool)arg1;
- (void)setLastFirstLollipopDate:(id)arg1;
- (void)setLastSelectionLocation:(id)arg1;
- (void)setParentView:(id)arg1;
- (void)setVisibleWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pointContexts:(id)arg2 animated:(bool)arg3;
- (void)updateWithPointContexts:(id)arg1;

@end
