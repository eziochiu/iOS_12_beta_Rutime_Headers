/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFSelection : NSObject {
    long long  _cachedEndIndex;
    long long  _cachedStartIndex;
    struct CGPDFSelection { } * _cgSelection;
    bool  _dirty;
    UIPDFPage * _page;
    struct __CFString { } * _string;
    struct { 
        long long location; 
        long long length; 
    }  stringRange;
}

@property (nonatomic) struct { long long x1; long long x2; } stringRange;

- (struct CGPDFSelection { }*)CGSelection;
- (id)archive;
- (id)attributedStringAtIndex:(unsigned long long)arg1;
- (double)baseLineAtIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)containingTextLine;
- (void)copyToPasteboard;
- (void)dealloc;
- (id)description;
- (unsigned long long)endIndex;
- (unsigned long long)extendAtEnd:(unsigned long long)arg1;
- (unsigned long long)extendAtStart:(unsigned long long)arg1;
- (void)extendToParagraph;
- (struct { long long x1; long long x2; })extent;
- (bool)getBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg2 index:(unsigned long long)arg3;
- (id)htmlAtIndex:(unsigned long long)arg1;
- (id)init;
- (id)initWithPage:(id)arg1 cgSelection:(struct CGPDFSelection { }*)arg2;
- (id)initWithPage:(id)arg1 fromArchive:(id)arg2;
- (id)initWithPage:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (id)initWithSelection:(id)arg1;
- (bool)isEmpty;
- (bool)isNonEmpty;
- (bool)isWord;
- (unsigned long long)numberOfRectangles;
- (id)page;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })rectangleAtIndex:(unsigned long long)arg1 scale:(double)arg2 inset:(double)arg3;
- (id)selectionExtendedToLineBoundaries;
- (void)setStringRange:(struct { long long x1; long long x2; })arg1;
- (unsigned long long)startIndex;
- (id)string;
- (struct { long long x1; long long x2; })stringRange;
- (id)textAtIndex:(unsigned long long)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;

@end
