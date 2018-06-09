/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
 */

@interface STTextExclusionPathWrapper : NSObject <TSDWrappable> {
    STTextExclusionPath * _exclusionPath;
    bool  _isRectangular;
    TSDWrapPolygon * _myWrapPolygon;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) STTextExclusionPath *exclusionPath;
@property (nonatomic, readonly) bool hasAlpha;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRectangular;
@property (nonatomic, readonly) TSDWrapPolygon *myWrapPolygon;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInRoot;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInfluencingExteriorWrap;
- (id)exclusionPath;
- (bool)hasAlpha;
- (id)initWithTextExclusionPath:(id)arg1;
- (bool)isHTMLWrap;
- (bool)isRectangular;
- (id)myWrapPolygon;
- (id)parent;
- (int)wrapDirection;
- (int)wrapFitType;
- (id)wrapPolygon;
- (int)wrapType;

@end
