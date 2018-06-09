/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICollectionLayoutGeometryGroupItem : NSObject <NSCopying> {
    NSArray * _attributes;
    UICollectionLayoutGeometryGroupItemConfiguration * _configuration;
    UICollectionLayoutGeometry * _geometry;
    double  _height;
    double  _heightComputedContainerHeightFactor;
    double  _heightComputedContainerWidthFactor;
    bool  _heightUseActualHeight;
    bool  _spacingBottomSpaceComputedIntrinsic;
    double  _spacingBottomSpaceFixedSpace;
    bool  _spacingLeadingSpaceComputedIntrinsic;
    double  _spacingLeadingSpaceFixedSpace;
    bool  _spacingTopSpaceComputedIntrinsic;
    double  _spacingTopSpaceFixedSpace;
    bool  _spacingTrailingSpaceComputedIntrinsic;
    double  _spacingTrailingSpaceFixedSpace;
    double  _width;
    double  _widthComputedContainerHeightFactor;
    double  _widthComputedContainerWidthFactor;
    bool  _widthUseActualWidth;
}

@property (nonatomic, retain) NSArray *attributes;
@property (nonatomic, retain) UICollectionLayoutGeometryGroupItemConfiguration *configuration;
@property (nonatomic, retain) UICollectionLayoutGeometry *geometry;
@property (nonatomic) double height;
@property (nonatomic) double heightComputedContainerHeightFactor;
@property (nonatomic) double heightComputedContainerWidthFactor;
@property (nonatomic) bool heightUseActualHeight;
@property (nonatomic) bool spacingBottomSpaceComputedIntrinsic;
@property (nonatomic) double spacingBottomSpaceFixedSpace;
@property (nonatomic) bool spacingLeadingSpaceComputedIntrinsic;
@property (nonatomic) double spacingLeadingSpaceFixedSpace;
@property (nonatomic) bool spacingTopSpaceComputedIntrinsic;
@property (nonatomic) double spacingTopSpaceFixedSpace;
@property (nonatomic) bool spacingTrailingSpaceComputedIntrinsic;
@property (nonatomic) double spacingTrailingSpaceFixedSpace;
@property (nonatomic) double width;
@property (nonatomic) double widthComputedContainerHeightFactor;
@property (nonatomic) double widthComputedContainerWidthFactor;
@property (nonatomic) bool widthUseActualWidth;

+ (id)itemWithAttributes:(id)arg1;
+ (id)itemWithConfiguration:(id)arg1;

- (void).cxx_destruct;
- (void)_parseAttributes:(id)arg1;
- (void)addAttribute:(id)arg1;
- (id)attributes;
- (id)configuration;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })effectiveEdgeInsets;
- (id)geometry;
- (bool)hasHorizontalIntrinsicSpacing;
- (bool)hasVerticalIntrinsicSpacing;
- (double)height;
- (double)heightComputedContainerHeightFactor;
- (double)heightComputedContainerWidthFactor;
- (bool)heightUseActualHeight;
- (id)initWithAttributes:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setHeight:(double)arg1;
- (void)setHeightComputedContainerHeightFactor:(double)arg1;
- (void)setHeightComputedContainerWidthFactor:(double)arg1;
- (void)setHeightUseActualHeight:(bool)arg1;
- (void)setSpacingBottomSpaceComputedIntrinsic:(bool)arg1;
- (void)setSpacingBottomSpaceFixedSpace:(double)arg1;
- (void)setSpacingLeadingSpaceComputedIntrinsic:(bool)arg1;
- (void)setSpacingLeadingSpaceFixedSpace:(double)arg1;
- (void)setSpacingTopSpaceComputedIntrinsic:(bool)arg1;
- (void)setSpacingTopSpaceFixedSpace:(double)arg1;
- (void)setSpacingTrailingSpaceComputedIntrinsic:(bool)arg1;
- (void)setSpacingTrailingSpaceFixedSpace:(double)arg1;
- (void)setWidth:(double)arg1;
- (void)setWidthComputedContainerHeightFactor:(double)arg1;
- (void)setWidthComputedContainerWidthFactor:(double)arg1;
- (void)setWidthUseActualWidth:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeForActualSize:(struct CGSize { double x1; double x2; })arg1 containerDimensions:(struct CGSize { double x1; double x2; })arg2;
- (bool)spacingBottomSpaceComputedIntrinsic;
- (double)spacingBottomSpaceFixedSpace;
- (bool)spacingLeadingSpaceComputedIntrinsic;
- (double)spacingLeadingSpaceFixedSpace;
- (double)spacingSizeRequiredForSize:(struct CGSize { double x1; double x2; })arg1 layoutAxis:(int)arg2;
- (bool)spacingTopSpaceComputedIntrinsic;
- (double)spacingTopSpaceFixedSpace;
- (bool)spacingTrailingSpaceComputedIntrinsic;
- (double)spacingTrailingSpaceFixedSpace;
- (double)width;
- (double)widthComputedContainerHeightFactor;
- (double)widthComputedContainerWidthFactor;
- (bool)widthUseActualWidth;

@end
