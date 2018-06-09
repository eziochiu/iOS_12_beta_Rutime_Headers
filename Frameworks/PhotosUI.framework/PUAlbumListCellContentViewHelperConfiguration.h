/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAlbumListCellContentViewHelperConfiguration : NSObject {
    NSString * _albumSubtitleFormat;
    bool  _allowsEmailInSubtitle;
    long long  _cellContentViewLayout;
    double  _dynamicSubtitleleading;
    double  _dynamicTitleLeading;
    double  _dynamicTopLeading;
    unsigned long long  _folderStackViewStyle;
    double  _gridItemSpacing;
    double  _gridMargin;
    bool  _hasRoundedCorners;
    long long  _imageContentMode;
    NSString * _nameOfAddSharedAlbumPlaceholderImage;
    NSString * _nameOfEmptyAlbumPlaceholderImage;
    NSString * _nameOfEmptySharedAlbumPlaceholderImage;
    NSString * _nameOfHiddenAlbumPlaceholderImage;
    NSString * _nameOfRecentlyDeletedAlbumPlaceholderImage;
    PUPhotoDecoration * _photoDecoration;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
    double  _posterSquareCornerRadius;
    double  _posterSubitemCornerRadius;
    bool  _shouldUseTableView;
    bool  _showsDeleteButtonOnCellContentView;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _stackOffset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _stackPerspectiveInsets;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _stackPerspectiveOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _stackSize;
    unsigned long long  _stackViewStyle;
}

@property (nonatomic, copy) NSString *albumSubtitleFormat;
@property (nonatomic) bool allowsEmailInSubtitle;
@property (nonatomic) long long cellContentViewLayout;
@property (nonatomic) double dynamicSubtitleleading;
@property (nonatomic) double dynamicTitleLeading;
@property (nonatomic) double dynamicTopLeading;
@property (nonatomic) unsigned long long folderStackViewStyle;
@property (nonatomic) double gridItemSpacing;
@property (nonatomic) double gridMargin;
@property (nonatomic) bool hasRoundedCorners;
@property (nonatomic) long long imageContentMode;
@property (nonatomic, copy) NSString *nameOfAddSharedAlbumPlaceholderImage;
@property (nonatomic, copy) NSString *nameOfEmptyAlbumPlaceholderImage;
@property (nonatomic, copy) NSString *nameOfEmptySharedAlbumPlaceholderImage;
@property (nonatomic, copy) NSString *nameOfHiddenAlbumPlaceholderImage;
@property (nonatomic, copy) NSString *nameOfRecentlyDeletedAlbumPlaceholderImage;
@property (nonatomic, retain) PUPhotoDecoration *photoDecoration;
@property (nonatomic) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic) double posterSquareCornerRadius;
@property (nonatomic) double posterSubitemCornerRadius;
@property (nonatomic) bool shouldUseTableView;
@property (nonatomic) bool showsDeleteButtonOnCellContentView;
@property (nonatomic) struct UIOffset { double x1; double x2; } stackOffset;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } stackPerspectiveInsets;
@property (nonatomic) struct UIOffset { double x1; double x2; } stackPerspectiveOffset;
@property (nonatomic) struct CGSize { double x1; double x2; } stackSize;
@property (nonatomic) unsigned long long stackViewStyle;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)albumSubtitleFormat;
- (bool)allowsEmailInSubtitle;
- (long long)cellContentViewLayout;
- (void)configureWithSpec:(id)arg1;
- (double)dynamicSubtitleleading;
- (double)dynamicTitleLeading;
- (double)dynamicTopLeading;
- (unsigned long long)folderStackViewStyle;
- (double)gridItemSpacing;
- (double)gridMargin;
- (bool)hasRoundedCorners;
- (long long)imageContentMode;
- (id)nameOfAddSharedAlbumPlaceholderImage;
- (id)nameOfEmptyAlbumPlaceholderImage;
- (id)nameOfEmptySharedAlbumPlaceholderImage;
- (id)nameOfHiddenAlbumPlaceholderImage;
- (id)nameOfRecentlyDeletedAlbumPlaceholderImage;
- (id)photoDecoration;
- (struct CGSize { double x1; double x2; })pixelSize;
- (double)posterSquareCornerRadius;
- (double)posterSubitemCornerRadius;
- (void)setAlbumSubtitleFormat:(id)arg1;
- (void)setAllowsEmailInSubtitle:(bool)arg1;
- (void)setCellContentViewLayout:(long long)arg1;
- (void)setDynamicSubtitleleading:(double)arg1;
- (void)setDynamicTitleLeading:(double)arg1;
- (void)setDynamicTopLeading:(double)arg1;
- (void)setFolderStackViewStyle:(unsigned long long)arg1;
- (void)setGridItemSpacing:(double)arg1;
- (void)setGridMargin:(double)arg1;
- (void)setHasRoundedCorners:(bool)arg1;
- (void)setImageContentMode:(long long)arg1;
- (void)setNameOfAddSharedAlbumPlaceholderImage:(id)arg1;
- (void)setNameOfEmptyAlbumPlaceholderImage:(id)arg1;
- (void)setNameOfEmptySharedAlbumPlaceholderImage:(id)arg1;
- (void)setNameOfHiddenAlbumPlaceholderImage:(id)arg1;
- (void)setNameOfRecentlyDeletedAlbumPlaceholderImage:(id)arg1;
- (void)setPhotoDecoration:(id)arg1;
- (void)setPixelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPosterSquareCornerRadius:(double)arg1;
- (void)setPosterSubitemCornerRadius:(double)arg1;
- (void)setShouldUseTableView:(bool)arg1;
- (void)setShowsDeleteButtonOnCellContentView:(bool)arg1;
- (void)setStackOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setStackPerspectiveInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setStackPerspectiveOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setStackSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setStackViewStyle:(unsigned long long)arg1;
- (bool)shouldUseTableView;
- (bool)showsDeleteButtonOnCellContentView;
- (struct UIOffset { double x1; double x2; })stackOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })stackPerspectiveInsets;
- (struct UIOffset { double x1; double x2; })stackPerspectiveOffset;
- (struct CGSize { double x1; double x2; })stackSize;
- (unsigned long long)stackViewStyle;

@end
