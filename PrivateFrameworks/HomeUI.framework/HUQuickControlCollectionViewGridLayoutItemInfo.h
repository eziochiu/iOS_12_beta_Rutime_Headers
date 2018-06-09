/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlCollectionViewGridLayoutItemInfo : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic) struct CGSize { double x1; double x2; } preferredSize;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (struct CGSize { double x1; double x2; })preferredSize;
- (void)setPreferredSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
