/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGadgetLayoutSpec : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _layoutInsets;
    long long  _scrollDirection;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } layoutInsets;
@property (nonatomic, readonly) long long scrollDirection;

- (id)initWithTraitCollection:(id)arg1 scrollDirection:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToGadgetLayoutSpec:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutInsets;
- (long long)scrollDirection;
- (double)sectionHeaderHeightForStyle:(unsigned long long)arg1 dividerHidden:(bool)arg2;

@end
