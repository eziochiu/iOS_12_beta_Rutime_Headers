/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIHorizontalLockupLayout : NSObject {
    NSMutableArray * _columns;
    double  _imageMarginRight;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _metadataColumnEdgeInsets;
    double  _metadataColumnMinHeight;
    double  _tallestNonMetadataColumnHeight;
}

@property (nonatomic, readonly) NSArray *columns;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } metadataColumnEdgeInsets;

+ (id)fontForButtonViewElement:(id)arg1 context:(id)arg2;
+ (id)fontForLabelViewElement:(id)arg1 context:(id)arg2;
+ (id)fontForOrdinalViewElement:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (double)_heightForMetadataColumn:(id)arg1 width:(double)arg2 context:(id)arg3;
- (struct CGSize { double x1; double x2; })_sizeForRightAlignedColumn:(id)arg1 width:(double)arg2 context:(id)arg3;
- (struct CGSize { double x1; double x2; })_sizeForViewElement:(id)arg1 width:(long long)arg2 context:(id)arg3;
- (double)bottomPaddingForViewElement:(id)arg1;
- (double)columnSpacingForColumnIdentifier:(long long)arg1;
- (id)columns;
- (id)initWithLockup:(id)arg1 context:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })metadataColumnEdgeInsets;
- (void)sizeColumnsToFitWidth:(double)arg1 context:(id)arg2;
- (double)topPaddingForViewElement:(id)arg1;

@end
