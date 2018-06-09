/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIContentModuleContentContainerView : UIView {
    bool  _clipsContentInCompactMode;
    bool  _expanded;
    NSString * _materialViewGroupName;
    MTMaterialView * _moduleMaterialView;
    bool  _moduleProvidesOwnPlatter;
}

@property (nonatomic) bool clipsContentInCompactMode;
@property (nonatomic, copy) NSString *materialViewGroupName;
@property (nonatomic, readonly) MTMaterialView *moduleMaterialView;
@property (nonatomic) bool moduleProvidesOwnPlatter;

- (void).cxx_destruct;
- (void)_configureModuleMaterialViewIfNecessary;
- (bool)_isContentClippingRequiredForSubview:(id)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_transitionToExpandedMode:(bool)arg1 force:(bool)arg2;
- (void)addSubview:(id)arg1;
- (bool)clipsContentInCompactMode;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)materialViewGroupName;
- (id)moduleMaterialView;
- (bool)moduleProvidesOwnPlatter;
- (void)setClipsContentInCompactMode:(bool)arg1;
- (void)setMaterialViewGroupName:(id)arg1;
- (void)setModuleProvidesOwnPlatter:(bool)arg1;
- (void)transitionToExpandedMode:(bool)arg1;

@end
