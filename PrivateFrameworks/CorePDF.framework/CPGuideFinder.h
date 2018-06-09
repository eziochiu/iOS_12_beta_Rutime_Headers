/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPGuideFinder : NSObject <CPDisposable> {
    double * anchorArray;
    CPCluster * anchors;
    CPZone * contentZone;
    unsigned int  countOfWordsInZone;
    struct { double x1; double x2; double x3; double x4; int x5; int *x6; struct CPPDFStyle {} *x7; } * crossingWordArray;
    NSMutableArray * gutters;
    NSMutableArray * leftGuides;
    double  medianFontSizeOfFirstCharacter;
    double  medianFontSizeOfLastCharacter;
    NSMutableArray * rightGuides;
    double * rightHandSideArray;
    CPCluster * rightHandSides;
}

+ (bool)guideSeparates:(id)arg1 from:(id)arg2;
+ (bool)gutterSeparates:(id)arg1 from:(id)arg2;
+ (void)reclusterBetweenGuides:(id)arg1;
+ (void)reclusterPreservingAlignment:(id)arg1;

- (bool)addStripTo:(id)arg1 bottom:(double)arg2 left:(double)arg3 top:(double)arg4 right:(double)arg5;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (void)findGuides;
- (void)findGutters;
- (void)findWordEdgeClusters;
- (void)func:(id)arg1 and:(id)arg2 and:(unsigned int)arg3 and:(unsigned int)arg4;
- (void)getWordEdges;
- (id)gutters;
- (bool)hasGutters;
- (bool)hasLeftGuides;
- (bool)hasRightGuides;
- (id)initWithContentZone:(id)arg1;
- (id)leftGuides;
- (void)markTextLines;
- (double)medianFontSizeOfFirstCharacter;
- (double)medianFontSizeOfLastCharacter;
- (id)rightGuides;
- (void)setAlignForWordWithExtent:(struct { double x1; double x2; double x3; double x4; int x5; int *x6; struct CPPDFStyle {} *x7; }*)arg1 stripArray:(id)arg2 stripMax:(double)arg3;
- (void)splitTextLines;
- (void)splitTextLinesAtBorderWords;
- (void)splitTextLinesBetweenBorderWords;
- (void)subdivideGutterFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)subdivideLeftGuideAt:(unsigned int)arg1;
- (void)subdivideRightGuideAt:(unsigned int)arg1;
- (void)subdivideStripInto:(id)arg1 from:(double)arg2 to:(double)arg3 borderedBy:(struct { double x1; double x2; double x3; double x4; int x5; int *x6; struct CPPDFStyle {} *x7; }*)arg4 ofCount:(unsigned int)arg5 crossedBy:(struct { double x1; double x2; double x3; double x4; int x5; int *x6; struct CPPDFStyle {} *x7; }*)arg6 ofCount:(unsigned int)arg7;

@end
