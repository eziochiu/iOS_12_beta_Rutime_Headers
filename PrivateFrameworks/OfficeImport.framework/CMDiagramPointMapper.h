/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDiagramPointMapper : CMMapper {
    CMDrawingContext * mDrawingContext;
    OADOrientedBounds * mOrientedBounds;
    ODDPoint * mPoint;
    NSString * mPresentationName;
}

- (void).cxx_destruct;
- (void)applyDiagramStyleToShapeProperties;
- (id)baseTextListStyleWithBounds:(id)arg1 isCentered:(bool)arg2;
- (float)defaultFontSize;
- (id)diagram;
- (id)fill;
- (id)initWithPoint:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapChildrenTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4;
- (void)mapChlidrenAt:(id)arg1 withState:(id)arg2;
- (void)mapPointTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4;
- (void)mapSiblingTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4;
- (void)mapStyledRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 at:(id)arg2 withState:(id)arg3;
- (void)mapTextAt:(id)arg1 withBounds:(id)arg2 isCentered:(bool)arg3 includeChildren:(bool)arg4 withState:(id)arg5;
- (id)plainText;
- (id)presentationName;
- (id)presentationWithName:(id)arg1;
- (void)renderShapeAsBackgroundInBounds:(id)arg1;
- (void)setPresentationName:(id)arg1;
- (id)shapeStyle;
- (id)stroke;
- (id)styleMatrix;
- (id)transformForPresentationWithName:(id)arg1;
- (id)transformPresentationName;

@end
