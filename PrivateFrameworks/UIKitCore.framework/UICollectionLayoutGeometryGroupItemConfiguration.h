/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICollectionLayoutGeometryGroupItemConfiguration : NSObject <UICollectionLayoutGeometryGroupItemConfiguration> {
    double  _height;
    bool  _heightSizedToContainerHeight;
    double  _heightSizedToContainerHeightFactor;
    double  _heightSizedToContainerWidthFactor;
    bool  _heightSizedToContentHeight;
    UICollectionLayoutGeometry * _layoutGeometry;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _requiredEdgeSpacing;
    double  _width;
    double  _widthSizedToContainerHeightFactor;
    bool  _widthSizedToContainerWidth;
    double  _widthSizedToContainerWidthFactor;
    bool  _widthSizedToContentWidth;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double height;
@property (nonatomic) bool heightSizedToContainerHeight;
@property (nonatomic) double heightSizedToContainerHeightFactor;
@property (nonatomic) double heightSizedToContainerWidthFactor;
@property (nonatomic) bool heightSizedToContentHeight;
@property (nonatomic, copy) UICollectionLayoutGeometry *layoutGeometry;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } requiredEdgeSpacing;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic) double width;
@property (nonatomic) double widthSizedToContainerHeightFactor;
@property (nonatomic) bool widthSizedToContainerWidth;
@property (nonatomic) double widthSizedToContainerWidthFactor;
@property (nonatomic) bool widthSizedToContentWidth;

+ (id)defaultItemConfig;

- (void).cxx_destruct;
- (void)_resetHeight;
- (void)_resetWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)height;
- (bool)heightSizedToContainerHeight;
- (double)heightSizedToContainerHeightFactor;
- (double)heightSizedToContainerWidthFactor;
- (void)heightSizedToContainerWidthFactor:(double)arg1;
- (bool)heightSizedToContentHeight;
- (id)initWithConfiguration:(id)arg1;
- (id)layoutGeometry;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })requiredEdgeSpacing;
- (void)setHeight:(double)arg1;
- (void)setHeightSizedToContainerHeight:(bool)arg1;
- (void)setHeightSizedToContainerHeightFactor:(double)arg1;
- (void)setHeightSizedToContainerWidthFactor:(double)arg1;
- (void)setHeightSizedToContentHeight:(bool)arg1;
- (void)setLayoutGeometry:(id)arg1;
- (void)setRequiredEdgeSpacing:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setWidth:(double)arg1;
- (void)setWidthSizedToContainerHeightFactor:(double)arg1;
- (void)setWidthSizedToContainerWidth:(bool)arg1;
- (void)setWidthSizedToContainerWidthFactor:(double)arg1;
- (void)setWidthSizedToContentWidth:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;
- (double)width;
- (double)widthSizedToContainerHeightFactor;
- (bool)widthSizedToContainerWidth;
- (double)widthSizedToContainerWidthFactor;
- (void)widthSizedToContainerWidthFactor:(double)arg1;
- (bool)widthSizedToContentWidth;

@end
