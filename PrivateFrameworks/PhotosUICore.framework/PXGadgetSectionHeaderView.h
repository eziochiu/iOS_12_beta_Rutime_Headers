/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGadgetSectionHeaderView : UICollectionReusableView {
    UIButton * _accessoryButton;
    id /* block */  _accessoryButtonPressed;
    NSString * _buttonTitle;
    unsigned long long  _buttonType;
    UIView * _divider;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    PXViewLayoutHelper * _layoutHelper;
    bool  _sectionDividerLineHidden;
    unsigned long long  _style;
    NSString * _title;
    UILabel * _titleLabel;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
    }  _updateFlags;
}

@property (nonatomic, retain) UIButton *accessoryButton;
@property (nonatomic, copy) id /* block */ accessoryButtonPressed;
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic) unsigned long long buttonType;
@property (nonatomic, retain) UIView *divider;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, retain) PXViewLayoutHelper *layoutHelper;
@property (getter=isSectionDividerLineHidden, nonatomic) bool sectionDividerLineHidden;
@property (nonatomic) unsigned long long style;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

+ (double)_headerTopSpacingForStyle:(unsigned long long)arg1;
+ (id)_preferredBoldTitleFontForStyle:(unsigned long long)arg1;
+ (double)_titleBottomSpacingForStyle:(unsigned long long)arg1;
+ (double)_titleHeightForStyle:(unsigned long long)arg1 dividerHidden:(bool)arg2;
+ (id)dismissImage;
+ (id)menuImage;
+ (double)preferredHeightForStyle:(unsigned long long)arg1 dividerHidden:(bool)arg2;
+ (void)preloadResources;
+ (id)shareImage;

- (void).cxx_destruct;
- (void)_buttonPressed;
- (void)_updateButton;
- (void)_updateTitle;
- (id)accessoryButton;
- (id /* block */)accessoryButtonPressed;
- (id)buttonTitle;
- (unsigned long long)buttonType;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)divider;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSectionDividerLineHidden;
- (id)layoutHelper;
- (void)layoutSubviews;
- (void)setAccessoryButton:(id)arg1;
- (void)setAccessoryButtonPressed:(id /* block */)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setButtonType:(unsigned long long)arg1;
- (void)setDivider:(id)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLayoutHelper:(id)arg1;
- (void)setSectionDividerLineHidden:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (unsigned long long)style;
- (id)title;
- (id)titleLabel;

@end
