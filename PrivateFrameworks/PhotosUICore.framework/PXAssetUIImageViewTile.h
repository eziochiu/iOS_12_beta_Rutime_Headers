/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetUIImageViewTile : NSObject <PXAssetTile, PXChangeObserver, PXReusableObject, PXUIImageViewBasicTile> {
    struct CGSize { 
        double width; 
        double height; 
    }  __contentSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __desiredContentsRect;
    UIView * _contentView;
    bool  _hasPlaceholder;
    PXImageRequester * _imageRequester;
    PXFocusableUIImageView * _imageView;
    UIColor * _placeholderColor;
    UIImage * _placeholderImage;
    bool  _shouldAllowFocus;
}

@property (setter=_setContentSize:, nonatomic) struct CGSize { double x1; double x2; } _contentSize;
@property (setter=_setDesiredContentsRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _desiredContentsRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, retain) PXImageRequester *imageRequester;
@property (nonatomic, retain) UIColor *placeholderColor;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic) bool shouldAllowFocus;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_contentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_desiredContentsRect;
- (void)_setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setDesiredContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateContentView;
- (void)_updateImageRequester;
- (void)_updateImageView;
- (void)becomeReusable;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 withUserData:(id)arg2;
- (id)image;
- (void)imageDidChange;
- (id)imageRequester;
- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)placeholderColor;
- (id)placeholderImage;
- (void)prepareForReuse;
- (void)setImageRequester:(id)arg1;
- (void)setPlaceholderColor:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setShouldAllowFocus:(bool)arg1;
- (bool)shouldAllowFocus;
- (id)view;

@end
