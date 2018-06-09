/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCFittingImageView : UIImageView <DOCThumbnailListener> {
    bool  _addDecoration;
    NSLayoutConstraint * _aspectRatioConstraint;
    <DOCFittingImageViewDelegate> * _delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _fittingSize;
    bool  _inTableMode;
    <DOCThumbnail> * _thumbnail;
}

@property (nonatomic) bool addDecoration;
@property (nonatomic, retain) NSLayoutConstraint *aspectRatioConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DOCFittingImageViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } fittingSize;
@property (readonly) unsigned long long hash;
@property (getter=isInTableMode, nonatomic) bool inTableMode;
@property (readonly) Class superclass;
@property (nonatomic, retain) <DOCThumbnail> *thumbnail;

- (void).cxx_destruct;
- (bool)addDecoration;
- (id)aspectRatioConstraint;
- (id)delegate;
- (struct CGSize { double x1; double x2; })fittingSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isInTableMode;
- (void)layoutSubviews;
- (void)setAddDecoration:(bool)arg1;
- (void)setAspectRatioConstraint:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setInTableMode:(bool)arg1;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;
- (void)thumbnailLoaded:(id)arg1;
- (void)updateBorderWidth;
- (void)updateCornerRadius;
- (void)updateImage:(id)arg1 addDecoration:(bool)arg2;

@end
