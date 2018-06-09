/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMSpec : PXFeatureSpec {
    unsigned long long  _activityType;
    double  _bubbleStatusIconCornerRadius;
    double  _composeCornerRadius;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _composeFooterInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _composeFooterMargins;
    double  _composeHeaderHeight;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _composeHeaderLabelMargins;
    UIColor * _composeRecipientViewBackgroundColor;
    double  _composeTableViewCellHeight;
    struct CGSize { 
        double width; 
        double height; 
    }  _composeTableViewCellImageViewSize;
    double  _composeTableViewCellInset;
    struct UIColor { Class x1; } * _reviewBackgroundColor;
    double  _reviewBannerHeight;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _reviewContentInsets;
    double  _reviewFooterBottomInset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _reviewGridContentInsets;
    long long  _reviewGridContentMode;
    struct CGSize { 
        double width; 
        double height; 
    }  _reviewGridInterItemSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _reviewGridItemSize;
    double  _reviewHeaderCornerRadius;
    double  _reviewHeaderTopInset;
    double  _reviewSectionHeaderHeight;
    double  _reviewSendBackFooterHeight;
}

@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic, readonly) UIColor *bubbleBackgroundColor;
@property (nonatomic, readonly) double bubbleStatusIconCornerRadius;
@property (nonatomic, readonly) double composeCornerRadius;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } composeFooterInsets;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } composeFooterMargins;
@property (nonatomic, readonly) double composeHeaderHeight;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } composeHeaderLabelMargins;
@property (nonatomic, readonly) UIColor *composeRecipientViewBackgroundColor;
@property (nonatomic, readonly) double composeTableViewCellHeight;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } composeTableViewCellImageViewSize;
@property (nonatomic, readonly) double composeTableViewCellInset;
@property (nonatomic, readonly) UIColor *reviewBackgroundColor;
@property (nonatomic, readonly) double reviewBannerHeight;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } reviewContentInsets;
@property (nonatomic, readonly) double reviewFooterBottomInset;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } reviewGridContentInsets;
@property (nonatomic, readonly) long long reviewGridContentMode;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } reviewGridInterItemSpacing;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } reviewGridItemSize;
@property (nonatomic, readonly) double reviewHeaderCornerRadius;
@property (nonatomic, readonly) double reviewHeaderTopInset;
@property (nonatomic, readonly) double reviewSectionHeaderHeight;
@property (nonatomic, readonly) double reviewSendBackFooterHeight;

- (void).cxx_destruct;
- (unsigned long long)activityType;
- (struct UIColor { Class x1; }*)bubbleBackgroundColor;
- (double)bubbleStatusIconCornerRadius;
- (double)composeCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })composeFooterInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })composeFooterMargins;
- (double)composeHeaderHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })composeHeaderLabelMargins;
- (id)composeRecipientViewBackgroundColor;
- (double)composeTableViewCellHeight;
- (struct CGSize { double x1; double x2; })composeTableViewCellImageViewSize;
- (double)composeTableViewCellInset;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 activityType:(unsigned long long)arg3;
- (struct UIColor { Class x1; }*)reviewBackgroundColor;
- (double)reviewBannerHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })reviewContentInsets;
- (double)reviewFooterBottomInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })reviewGridContentInsets;
- (long long)reviewGridContentMode;
- (struct CGSize { double x1; double x2; })reviewGridInterItemSpacing;
- (struct CGSize { double x1; double x2; })reviewGridItemSize;
- (double)reviewHeaderCornerRadius;
- (double)reviewHeaderTopInset;
- (double)reviewSectionHeaderHeight;
- (double)reviewSendBackFooterHeight;

@end
