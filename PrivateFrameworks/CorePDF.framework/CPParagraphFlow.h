/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPParagraphFlow : NSObject {
    bool  adjacentToCallout;
    int  calloutType;
    double  fBottom;
    double  fLeft;
    double  fRight;
    double  fTop;
    CPParagraph * nextInColumn;
    CPParagraph * paragraph;
    NSMutableArray * paragraphsAbove;
    NSMutableArray * paragraphsBelow;
    NSMutableArray * paragraphsLeft;
    NSMutableArray * paragraphsRight;
    bool  placed;
}

@property int calloutType;
@property double fBottom;
@property double fLeft;
@property double fRight;
@property (nonatomic) CPParagraph *nextInColumn;
@property (nonatomic, retain) CPParagraph *paragraph;
@property bool placed;

- (double)area;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })belowBounds;
- (id)belowTwoSides:(unsigned int)arg1;
- (int)calloutType;
- (double)dAbove;
- (double)dBelow;
- (void)dealloc;
- (id)description;
- (double)fBottom;
- (double)fLeft;
- (double)fRight;
- (id)ignoreCallouts:(unsigned int)arg1;
- (int)inOrder;
- (int)inOrder:(bool)arg1;
- (id)initWithParagraph:(id)arg1;
- (bool)intervalOverlapLeft:(double)arg1 right:(double)arg2 paragraphs:(id)arg3;
- (bool)intervalOverlapLeft:(double)arg1 right:(double)arg2 rects:(id)arg3;
- (bool)intervalOverlapTop:(double)arg1 bottom:(double)arg2 paragraphs:(id)arg3;
- (int)leftOrder;
- (id)nextInColumn;
- (id)nextParagraphInColumn:(id)arg1;
- (int)outOrder;
- (id)paragraph;
- (id)paragraphsAbove;
- (id)paragraphsBelow;
- (id)paragraphsLeft;
- (id)paragraphsRight;
- (bool)placed;
- (void)removeFromAbove:(id)arg1;
- (void)removeFromBelow:(id)arg1;
- (void)replaceAbove:(id)arg1 withOneOf:(id)arg2;
- (void)replaceBelow:(id)arg1 withOneOf:(id)arg2;
- (int)rightOrder;
- (void)setCalloutType:(int)arg1;
- (void)setFBottom:(double)arg1;
- (void)setFLeft:(double)arg1;
- (void)setFRight:(double)arg1;
- (void)setNextInColumn:(id)arg1;
- (void)setParagraph:(id)arg1;
- (void)setParagraphsAboveIn:(id)arg1;
- (void)setParagraphsBelowIn:(id)arg1;
- (void)setParagraphsLeftIn:(id)arg1;
- (void)setParagraphsRightIn:(id)arg1;
- (void)setPlaced:(bool)arg1;
- (id)simpleRule:(unsigned int)arg1;
- (long long)topDescending:(id)arg1;
- (id)twoSides:(unsigned int)arg1;

@end
