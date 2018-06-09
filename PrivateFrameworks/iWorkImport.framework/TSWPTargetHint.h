/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTargetHint : NSObject <NSCopying, TSWPOffscreenColumn> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _anchoredRange;
    unsigned long long  _columnCount;
    bool  _endOfLayout;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frameBounds;
    bool  _lastLineIsEmptyAndHasListLabel;
    unsigned long long  _lineFragmentCount;
    unsigned long long  _nextWidowPullsDownFromCharIndex;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    bool  _usedParagraphHeights;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } anchoredRange;
@property (nonatomic) unsigned long long columnCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool endOfLayout;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameBounds;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool lastLineIsEmptyAndHasListLabel;
@property (nonatomic) unsigned long long lineFragmentCount;
@property (nonatomic) unsigned long long nextWidowPullsDownFromCharIndex;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (readonly) Class superclass;
@property (nonatomic) bool usedParagraphHeights;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })anchoredRange;
- (unsigned long long)columnCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (bool)endOfLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameBounds;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)lastLineIsEmptyAndHasListLabel;
- (unsigned long long)lineFragmentCount;
- (unsigned long long)nextWidowPullsDownFromCharIndex;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setAnchoredRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setColumnCount:(unsigned long long)arg1;
- (void)setEndOfLayout:(bool)arg1;
- (void)setFrameBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLastLineIsEmptyAndHasListLabel:(bool)arg1;
- (void)setLineFragmentCount:(unsigned long long)arg1;
- (void)setNextWidowPullsDownFromCharIndex:(unsigned long long)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setUsedParagraphHeights:(bool)arg1;
- (void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeFootnoteReferenceCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4;
- (bool)usedParagraphHeights;

@end
