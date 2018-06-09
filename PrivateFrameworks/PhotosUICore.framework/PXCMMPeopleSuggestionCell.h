/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPeopleSuggestionCell : UICollectionViewCell {
    bool  _checked;
    int  _currentRequestID;
    NSString * _displayName;
    UIImage * _faceImage;
    UIView * _faceOverlay;
    UIImageView * _faceView;
    UIImageView * _selectedImageView;
    UILabel * _titleLabel;
}

@property (getter=isChecked, nonatomic) bool checked;
@property (nonatomic) int currentRequestID;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, retain) UIImage *faceImage;

- (void).cxx_destruct;
- (int)currentRequestID;
- (id)displayName;
- (id)faceImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isChecked;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setChecked:(bool)arg1;
- (void)setCurrentRequestID:(int)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFaceImage:(id)arg1;

@end
