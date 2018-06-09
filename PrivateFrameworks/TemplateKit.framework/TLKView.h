/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKView : UIView <TLKObservable, TLKObserver> {
    UIView * _containerView;
    unsigned long long  _style;
    bool  inBatchUpdate;
    <TLKObserver> * observer;
}

@property (retain) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool inBatchUpdate;
@property <TLKObserver> *observer;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultInsets;
+ (void)enableShadow:(bool)arg1 forView:(id)arg2;
+ (Class)layerClass;
+ (void)makeContainerShadowCompatible:(id)arg1;

- (void).cxx_destruct;
- (id)containerView;
- (void)disableUnbatchedUpdates;
- (bool)inBatchUpdate;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isLayoutSizeDependentOnPerpendicularAxis;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)observedPropertiesChanged;
- (id)observer;
- (void)performBatchUpdates:(id /* block */)arg1;
- (void)propertiesDidChange;
- (void)setContainer:(id)arg1 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)setContainerView:(id)arg1;
- (void)setContainerWithDefaultInsets:(id)arg1;
- (void)setInBatchUpdate:(bool)arg1;
- (void)setObserver:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;
- (void)styleDidChange:(unsigned long long)arg1;
- (bool)supportsAsynchronousMeasurement;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
