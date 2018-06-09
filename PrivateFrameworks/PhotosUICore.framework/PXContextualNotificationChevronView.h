/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXContextualNotificationChevronView : UIView {
    struct CGSize { 
        double width; 
        double height; 
    }  _chevronSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _intrinsicContentSize;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } chevronSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (struct CGSize { double x1; double x2; })chevronSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 chevronScale:(double)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;

@end
