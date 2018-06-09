/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
 */

@interface STContainerLayout : TSDContainerLayout <TSDWrappable> {
    NSMutableArray * _oldchildLayouts;
    TSDBezierPath * mCachedExternalWrapPath;
    TSDBezierPath * mCachedWrapPath;
    TSDWrapPolygon * mCachedWrapPolygon;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAlpha;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *oldchildLayouts;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)additionalLayouts;
- (bool)allowsConnections;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInRoot;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInfluencingExteriorWrap;
- (void)childLayoutCreated:(id)arg1;
- (id)childrenForLayout;
- (void)dealloc;
- (void)dragBy:(struct CGPoint { double x1; double x2; })arg1;
- (bool)hasAlpha;
- (id)i_computeWrapPath;
- (id)i_computeWrapPathClosed:(bool)arg1;
- (id)i_exteriorTextWrap;
- (id)i_externalWrapPath;
- (void)i_invalidateWrap;
- (id)i_wrapPath;
- (void)invalidate;
- (void)invalidateExteriorWrap;
- (void)invalidateParentForWrap;
- (bool)isHTMLWrap;
- (id)oldchildLayouts;
- (void)parentDidChange;
- (void)processChangedProperty:(int)arg1;
- (void)setGeometry:(id)arg1;
- (void)setOldchildLayouts:(id)arg1;
- (bool)supportsInspectorPositioning;
- (void)updateChildrenFromInfo;
- (int)wrapDirection;
- (int)wrapFitType;
- (id)wrapPolygon;
- (int)wrapType;

@end
