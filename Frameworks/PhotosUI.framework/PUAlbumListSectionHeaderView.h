/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAlbumListSectionHeaderView : UICollectionReusableView {
    NSArray * __constraints;
    UILabel * __titleLabel;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionHeaderInsets;
    NSString * _sectionHeaderTitle;
    UIFont * _sectionHeaderTitleFont;
}

@property (setter=_setConstraints:, nonatomic, retain) NSArray *_constraints;
@property (nonatomic, readonly) UILabel *_titleLabel;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionHeaderInsets;
@property (nonatomic, copy) NSString *sectionHeaderTitle;
@property (nonatomic, retain) UIFont *sectionHeaderTitleFont;

- (void).cxx_destruct;
- (id)_constraints;
- (void)_setConstraints:(id)arg1;
- (id)_titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionHeaderInsets;
- (id)sectionHeaderTitle;
- (id)sectionHeaderTitleFont;
- (void)setSectionHeaderInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSectionHeaderTitle:(id)arg1;
- (void)setSectionHeaderTitleFont:(id)arg1;

@end
