/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRelatedSpec : PXFeatureSpec {
    struct CGSize { 
        double width; 
        double height; 
    }  _interEntrySpacing;
    long long  _numberOfColumns;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } interEntrySpacing;
@property (nonatomic, readonly) long long numberOfColumns;

- (id)createViewSpecWithDescriptor:(struct PXViewSpecDescriptor { long long x1; unsigned long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })arg1;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })interEntrySpacing;
- (long long)numberOfColumns;

@end
