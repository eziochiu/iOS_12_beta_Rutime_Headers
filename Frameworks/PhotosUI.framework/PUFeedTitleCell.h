/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedTitleCell : PUFeedCell {
    long long  _collectionViewType;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    PXSharedAlbumHeaderView * _headerView;
    PXFeedSectionInfo * _sectionInfo;
    long long  _tappableArea;
}

@property (nonatomic) long long collectionViewType;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, retain) PXSharedAlbumHeaderView *headerView;
@property (nonatomic, retain) PXFeedSectionInfo *sectionInfo;
@property (nonatomic) long long tappableArea;

- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (struct CGSize { double x1; double x2; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 updateSubviewFrames:(bool)arg2;
- (void)_updateHeaderTextColorStyle;
- (long long)collectionViewType;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)headerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)sectionInfo;
- (void)setCollectionViewType:(long long)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHeaderView:(id)arg1;
- (void)setSectionInfo:(id)arg1;
- (void)setTappableArea:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)tappableArea;

@end
