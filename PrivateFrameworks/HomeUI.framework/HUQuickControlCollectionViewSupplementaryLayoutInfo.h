/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlCollectionViewSupplementaryLayoutInfo : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    unsigned long long  _itemSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _preferredLayoutAreaInset;
    HUQuickControlCollectionViewLayoutSupplementarySectionSettings * _settings;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic) unsigned long long itemSize;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } preferredLayoutAreaInset;
@property (nonatomic, retain) HUQuickControlCollectionViewLayoutSupplementarySectionSettings *settings;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (unsigned long long)itemSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredLayoutAreaInset;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setItemSize:(unsigned long long)arg1;
- (void)setPreferredLayoutAreaInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSettings:(id)arg1;
- (id)settings;

@end
