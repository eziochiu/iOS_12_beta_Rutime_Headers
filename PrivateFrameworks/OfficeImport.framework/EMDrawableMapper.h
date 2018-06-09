/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMDrawableMapper : CMDrawableMapper {
    double * mColumnGrid;
    double * mRowGrid;
}

+ (bool)isAnchorRelative:(id)arg1;

- (struct CGPoint { double x1; double x2; })anchorMarkerToPosition:(struct EDCellAnchorMarker { int x1; float x2; int x3; float x4; })arg1 rowGrid:(double*)arg2 columnGrid:(double*)arg3 start:(bool)arg4 relative:(bool)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getImageRect;
- (id)initWithChartDrawable:(id)arg1 box:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 parent:(id)arg3;
- (id)initWithOADDrawable:(id)arg1 parent:(id)arg2;
- (id)initWithOADDrawable:(id)arg1 rowGrid:(double*)arg2 columnGrid:(double*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mapAnchorToRect:(id)arg1 rowGrid:(double*)arg2 columnGrid:(double*)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapBounds;
- (void)mapChartAt:(id)arg1 withState:(id)arg2;
- (void)mapDiagramAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2;
- (void)mapTextBoxAt:(id)arg1 withState:(id)arg2;
- (void)setBoundingBox;
- (id)workbookMapper;
- (id)worksheetMapper;

@end
