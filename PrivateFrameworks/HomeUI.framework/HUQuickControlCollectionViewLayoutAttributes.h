/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {
    unsigned long long  _itemSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _preferredLayoutAreaInset;
}

@property (nonatomic) unsigned long long itemSize;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } preferredLayoutAreaInset;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)itemSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredLayoutAreaInset;
- (void)setItemSize:(unsigned long long)arg1;
- (void)setPreferredLayoutAreaInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
