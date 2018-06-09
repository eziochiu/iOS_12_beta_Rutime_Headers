/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDetailsSpec : PXFeatureSpec {
    struct UIColor { Class x1; } * _backgroundColor;
    PXPhotosDetailsBarSpec * _barSpec;
    PXWidgetCompositionSpec * _compositionSpec;
    unsigned long long  _detailsOptions;
    double  _dimmingAlpha;
    struct UIColor { Class x1; } * _dimmingColor;
    PXWidgetSpec * _widgetSpec;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) PXPhotosDetailsBarSpec *barSpec;
@property (nonatomic, readonly) PXWidgetCompositionSpec *compositionSpec;
@property (nonatomic, readonly) unsigned long long detailsOptions;
@property (nonatomic, readonly) double dimmingAlpha;
@property (nonatomic, readonly) UIColor *dimmingColor;
@property (nonatomic, readonly) bool enableActionsWidget;
@property (nonatomic, readonly) bool shouldInitializeBarsController;
@property (nonatomic, readonly) PXWidgetSpec *widgetSpec;

- (void).cxx_destruct;
- (struct UIColor { Class x1; }*)backgroundColor;
- (id)barSpec;
- (id)compositionSpec;
- (unsigned long long)detailsOptions;
- (double)dimmingAlpha;
- (struct UIColor { Class x1; }*)dimmingColor;
- (bool)enableActionsWidget;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 detailsOptions:(unsigned long long)arg3;
- (bool)shouldInitializeBarsController;
- (id)widgetSpec;

@end
