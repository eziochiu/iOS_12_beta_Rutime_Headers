/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlCollectionViewLayoutInfo : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _availableContentFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _collectionViewContentSize;
    HUQuickControlCollectionViewGridLayoutInfo * _gridLayout;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _preferredLayoutFrame;
    HUQuickControlCollectionViewSupplementaryLayoutInfo * _supplementaryLayout;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } availableContentFrame;
@property (nonatomic) struct CGSize { double x1; double x2; } collectionViewContentSize;
@property (nonatomic, retain) HUQuickControlCollectionViewGridLayoutInfo *gridLayout;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } preferredLayoutFrame;
@property (nonatomic, retain) HUQuickControlCollectionViewSupplementaryLayoutInfo *supplementaryLayout;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })availableContentFrame;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)gridLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredLayoutFrame;
- (void)setAvailableContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCollectionViewContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setGridLayout:(id)arg1;
- (void)setPreferredLayoutFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSupplementaryLayout:(id)arg1;
- (id)supplementaryLayout;

@end
