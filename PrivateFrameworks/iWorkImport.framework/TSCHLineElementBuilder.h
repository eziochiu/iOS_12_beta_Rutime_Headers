/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLineElementBuilder : TSCHScatterElementBuilder

- (struct CGPoint { double x1; double x2; })labelPointForPosition:(unsigned int)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 stringSize:(struct CGSize { double x1; double x2; })arg3 symbolType:(int)arg4;
- (bool)needsSeparateHitTestingPaths;
- (void)p_addKnobsForPoint:(struct CGPoint { double x1; double x2; })arg1 strokedUnitSymbolRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toKnobSet:(id)arg3 symbolsShowing:(bool)arg4 includePoint:(bool)arg5;

@end
