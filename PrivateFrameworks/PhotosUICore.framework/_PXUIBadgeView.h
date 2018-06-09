/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXUIBadgeView : UIView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __backgroundFrame;
    UIView * __backgroundView;
    PXUIButton * __button;
    UIImage * __image;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __imageFrame;
    struct CGPoint { 
        double x; 
        double y; 
    }  __imageOffset;
    UIImageView * __imageView;
    UILabel * __label;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __labelFrame;
    bool  __needsUpdateBackgroundView;
    bool  __needsUpdateButton;
    bool  __needsUpdateCornersMask;
    bool  __needsUpdateImageView;
    bool  __needsUpdateLabel;
    NSString * __text;
    struct CGPoint { 
        double x; 
        double y; 
    }  __textOffset;
    unsigned long long  _badge;
    unsigned long long  _corners;
    <_PXUIBadgeViewDelegate> * _delegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
    bool  _shouldAnimateImageView;
    PXUIBadgeTheme * _theme;
}

@property (setter=_setBackgroundFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _backgroundFrame;
@property (setter=_setBackgroundView:, nonatomic, retain) UIView *_backgroundView;
@property (setter=_setButton:, nonatomic, retain) PXUIButton *_button;
@property (setter=_setImage:, nonatomic, retain) UIImage *_image;
@property (setter=_setImageFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _imageFrame;
@property (setter=_setImageOffset:, nonatomic) struct CGPoint { double x1; double x2; } _imageOffset;
@property (setter=_setImageView:, nonatomic, retain) UIImageView *_imageView;
@property (setter=_setLabel:, nonatomic, retain) UILabel *_label;
@property (setter=_setLabelFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _labelFrame;
@property (setter=_setNeedsUpdateBackgroundView:, nonatomic) bool _needsUpdateBackgroundView;
@property (setter=_setNeedsUpdateButton:, nonatomic) bool _needsUpdateButton;
@property (setter=_setNeedsUpdateCornersMask:, nonatomic) bool _needsUpdateCornersMask;
@property (setter=_setNeedsUpdateImageView:, nonatomic) bool _needsUpdateImageView;
@property (setter=_setNeedsUpdateLabel:, nonatomic) bool _needsUpdateLabel;
@property (setter=_setText:, nonatomic, retain) NSString *_text;
@property (setter=_setTextOffset:, nonatomic) struct CGPoint { double x1; double x2; } _textOffset;
@property (nonatomic, readonly) unsigned long long badge;
@property (nonatomic) unsigned long long corners;
@property (nonatomic) <_PXUIBadgeViewDelegate> *delegate;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic) bool shouldAnimateImageView;
@property (nonatomic, readonly) PXUIBadgeTheme *theme;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundFrame;
- (id)_backgroundView;
- (id)_button;
- (void)_handleButton:(id)arg1;
- (id)_image;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_imageFrame;
- (struct CGPoint { double x1; double x2; })_imageOffset;
- (id)_imageView;
- (void)_invalidate;
- (void)_invalidateBackgroundView;
- (void)_invalidateButton;
- (void)_invalidateCorners;
- (void)_invalidateImageView;
- (void)_invalidateLabel;
- (id)_label;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_labelFrame;
- (id)_maskLayerForCorners:(unsigned long long)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)_needsUpdateBackgroundView;
- (bool)_needsUpdateButton;
- (bool)_needsUpdateCornersMask;
- (bool)_needsUpdateImageView;
- (bool)_needsUpdateLabel;
- (void)_setBackgroundFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setBackgroundView:(id)arg1;
- (void)_setButton:(id)arg1;
- (void)_setImage:(id)arg1;
- (void)_setImageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setImageOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setImageView:(id)arg1;
- (void)_setLabel:(id)arg1;
- (void)_setLabelFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setNeedsUpdateBackgroundView:(bool)arg1;
- (void)_setNeedsUpdateButton:(bool)arg1;
- (void)_setNeedsUpdateCornersMask:(bool)arg1;
- (void)_setNeedsUpdateImageView:(bool)arg1;
- (void)_setNeedsUpdateLabel:(bool)arg1;
- (void)_setText:(id)arg1;
- (void)_setTextOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)_text;
- (struct CGPoint { double x1; double x2; })_textOffset;
- (void)_updateBackgroundViewIfNeeded;
- (void)_updateButtonIfNeeded;
- (void)_updateCornersIfNeedeed;
- (void)_updateIfNeeded;
- (void)_updateImageViewIfNeeded;
- (void)_updateLabelIfNeeded;
- (void)_updateLayout;
- (unsigned long long)badge;
- (unsigned long long)corners;
- (id)delegate;
- (id)initWithBadge:(unsigned long long)arg1 theme:(id)arg2;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct CGPoint { double x1; double x2; })position;
- (void)setCorners:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setShouldAnimateImageView:(bool)arg1;
- (bool)shouldAnimateImageView;
- (id)theme;

@end