/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDFreehandDrawingLayout : TSDGroupLayout {
    double  _dynamicOpacity;
    bool  _updatingOpacity;
}

@property (nonatomic, readonly) TSDFreehandDrawingInfo *freehandInfo;
@property (nonatomic, readonly) double opacity;
@property (nonatomic) double p_dynamicOpacity;
@property (getter=p_isUpdatingOpacity, nonatomic) bool p_updatingOpacity;
@property (nonatomic, readonly) bool shouldSpacerShapeProvideSpace;

- (id)additionalDependenciesForChildLayout:(id)arg1;
- (id)additionalInfosForChildLayouts;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computeBoundsForStandardKnobs;
- (id)descendentWrappables;
- (bool)descendentWrappablesContainsWrappable:(id)arg1;
- (id)freehandInfo;
- (struct CGSize { double x1; double x2; })minimumSize;
- (double)opacity;
- (double)p_dynamicOpacity;
- (bool)p_isUpdatingOpacity;
- (id)p_sizeEnforcingChild;
- (void)processChangedProperty:(int)arg1;
- (void)setP_dynamicOpacity:(double)arg1;
- (void)setP_updatingOpacity:(bool)arg1;
- (bool)shouldSnapWhileResizing;
- (bool)shouldSpacerShapeProvideSpace;
- (void)transferLayoutGeometryToInfo:(id)arg1 withAdditionalTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 assertIfInDocument:(bool)arg3;

@end
