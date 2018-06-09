/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKImageView : TLKView <NUIArrangementContainer, NUIBoxArrangementDataSource> {
    NUIBoxArrangement * _boxArrangement;
    long long  _horizontalAlignment;
    UIImageView * _imageView;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rectOfShadow;
    TLKArrangementItem * _sizingHelper;
    TLKImage * _tlkImage;
    long long  _verticalAlignment;
}

@property (retain) NUIBoxArrangement *boxArrangement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long horizontalAlignment;
@property (retain) UIImageView *imageView;
@property (nonatomic) struct CGSize { double x1; double x2; } maximumSize;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumSize;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rectOfShadow;
@property (retain) TLKArrangementItem *sizingHelper;
@property (readonly) Class superclass;
@property (nonatomic, retain) TLKImage *tlkImage;
@property (nonatomic) long long verticalAlignment;

+ (bool)imageIsEligibleForShadow:(id)arg1 isTemplate:(bool)arg2;
+ (Class)layerClass;
+ (struct CGSize { double x1; double x2; })roundedSizeForSize:(struct CGSize { double x1; double x2; })arg1;
+ (bool)sizeIsShadowWorthy:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (id)actualImageView;
- (id)boxArrangement;
- (id)boxArrangement:(id)arg1 itemAtIndex:(long long)arg2 horizontalAlignment:(long long*)arg3 verticalAlignment:(long long*)arg4;
- (struct CGSize { double x1; double x2; })contentLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 forArrangedSubview:(id)arg2;
- (long long)effectiveUserInterfaceLayoutDirection;
- (long long)horizontalAlignment;
- (id)imageView;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSizeIfNecessary;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })maximumSize;
- (struct CGSize { double x1; double x2; })minimumSize;
- (struct CGSize { double x1; double x2; })naturalImageSize;
- (long long)numberOfItemsInBoxArrangement:(id)arg1;
- (void)observedPropertiesChanged;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfShadow;
- (void)setBoxArrangement:(id)arg1;
- (void)setHorizontalAlignment:(long long)arg1;
- (void)setImageView:(id)arg1;
- (void)setMaximumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRectOfShadow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSizingHelper:(id)arg1;
- (void)setTlkImage:(id)arg1;
- (void)setVerticalAlignment:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)sizingHelper;
- (bool)supportsAsynchronousMeasurement;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)tlkImage;
- (long long)verticalAlignment;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
