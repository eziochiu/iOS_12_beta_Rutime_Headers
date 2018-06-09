/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCollectionViewData : NSObject {
    long long  _cachedPageCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentContentBounds;
    NSMutableArray * _itemLayoutAttributes;
    NSMutableDictionary * _itemLayoutAttributesByIndexPath;
}

@property (nonatomic, readonly) long long cachedPageCount;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } currentContentBounds;
@property (nonatomic, readonly) NSMutableArray *itemLayoutAttributes;
@property (nonatomic, readonly) NSMutableDictionary *itemLayoutAttributesByIndexPath;

- (void).cxx_destruct;
- (long long)cachedPageCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentContentBounds;
- (bool)hasReferenceIndexPath;
- (id)init;
- (void)invalidate;
- (id)itemLayoutAttributes;
- (id)itemLayoutAttributesByIndexPath;
- (void)setCurrentContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
