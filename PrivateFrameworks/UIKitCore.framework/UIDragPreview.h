/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDragPreview : NSObject <NSCopying> {
    NSDictionary * __springboardParameters;
    bool  __springboardPlatterStyle;
    UIColor * _backgroundColor;
    NSArray * _clippingRects;
    UIView * _container;
    bool  _hidesSourceView;
    bool  _marginsEnabled;
    UIView * _maskView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalCenter;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalSize;
    UIDragPreviewParameters * _parameters;
    bool  _precisionInput;
    bool  _scalesOnLift;
    bool  _translatesOnLift;
    UIView * _view;
    double  _viewCornerRadius;
    bool  _viewCornersAreContinuous;
}

@property (nonatomic, readonly) _DUIPreview *_duiPreview;
@property (nonatomic, copy) NSDictionary *_springboardParameters;
@property (nonatomic) bool _springboardPlatterStyle;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, copy) NSArray *clippingRects;
@property (nonatomic, readonly) UIView *container;
@property (nonatomic) bool hidesSourceView;
@property (nonatomic) bool marginsEnabled;
@property (nonatomic, readonly) UIView *maskView;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } originalCenter;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } originalSize;
@property (nonatomic, readonly, copy) UIDragPreviewParameters *parameters;
@property (nonatomic) bool precisionInput;
@property (nonatomic) bool scalesOnLift;
@property (nonatomic) bool translatesOnLift;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) double viewCornerRadius;
@property (nonatomic, readonly) bool viewCornersAreContinuous;

+ (struct CGSize { double x1; double x2; })defaultBoundingSize;
+ (id)previewForURL:(id)arg1;
+ (id)previewForURL:(id)arg1 title:(id)arg2;
+ (struct CGSize { double x1; double x2; })textBoundingSize;

- (void).cxx_destruct;
- (id)_duiPreview;
- (void)_setOriginalCenter:(struct CGPoint { double x1; double x2; })arg1;
- (id)_springboardParameters;
- (bool)_springboardPlatterStyle;
- (id)backgroundColor;
- (id)clippingRects;
- (id)container;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hidesSourceView;
- (id)initWithView:(id)arg1;
- (id)initWithView:(id)arg1 parameters:(id)arg2;
- (bool)marginsEnabled;
- (id)maskView;
- (struct CGPoint { double x1; double x2; })originalCenter;
- (struct CGSize { double x1; double x2; })originalSize;
- (id)parameters;
- (bool)precisionInput;
- (bool)scalesOnLift;
- (void)setBackgroundColor:(id)arg1;
- (void)setClippingRects:(id)arg1;
- (void)setHidesSourceView:(bool)arg1;
- (void)setMarginsEnabled:(bool)arg1;
- (void)setPrecisionInput:(bool)arg1;
- (void)setScalesOnLift:(bool)arg1;
- (void)setTranslatesOnLift:(bool)arg1;
- (void)set_springboardParameters:(id)arg1;
- (void)set_springboardPlatterStyle:(bool)arg1;
- (bool)translatesOnLift;
- (id)view;
- (double)viewCornerRadius;
- (bool)viewCornersAreContinuous;

@end