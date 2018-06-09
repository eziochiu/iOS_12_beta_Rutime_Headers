/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDFreehandDrawingRep : TSDGroupRep

- (id)accessibilityLabel;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (bool)isAccessibilityElement;
- (double)opacity;
- (id)p_childrenForDrawingRecursively;
- (void)p_drawChildShapeReps:(id)arg1 togetherInContext:(struct CGContext { }*)arg2;
- (id)p_freehandDrawingInfo;
- (id)p_freehandDrawingLayout;
- (void)recursivelyDrawChildrenInContext:(struct CGContext { }*)arg1;
- (id)textureForDescription:(id)arg1;
- (void)willBeRemoved;

@end
