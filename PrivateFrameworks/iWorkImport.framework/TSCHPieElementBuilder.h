/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPieElementBuilder : TSCHElementBuilder

- (unsigned long long)countOfCalloutLinesForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (unsigned long long)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(struct CGRect {}**)arg4 outNewClipRects:(struct CGRect {}**)arg5 outNewElementPaths:(const struct CGPath {}***)arg6 outSelectionKnobLocations:(id*)arg7;
- (unsigned long long)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(struct CGRect {}**)arg4 outNewClipRects:(struct CGRect {}**)arg5 outNewElementPaths:(const struct CGPath {}***)arg6 outSelectionKnobLocations:(id*)arg7 withInnerRadius:(id)arg8;
- (unsigned long long)countOfGridLinesInBody:(id)arg1 forAxis:(id)arg2 minor:(bool)arg3 outNewLineDescriptors:(struct { /* ? */ }**)arg4;
- (unsigned long long)countOfLabelsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewTransforms:(struct CGAffineTransform {}**)arg4 outNewElementSizes:(struct CGSize {}**)arg5 outNewClipRect:(struct CGRect {}**)arg6 outNewStrings:(id*)arg7;
- (bool)hasAxisLineInBody:(id)arg1 forAxis:(id)arg2 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg3 outLine:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (struct CGPath { }*)newElementPathInBody:(id)arg1 forSeries:(id)arg2 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg3 outElementSize:(struct CGSize { double x1; double x2; }*)arg4 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 outWedgeCenterPoint:(struct CGPoint { double x1; double x2; }*)arg6 outSelectionKnobLocations:(id*)arg7 withInnerRadius:(id)arg8;

@end
