/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPLineHintCollection : TSPObject {
    TSWPLineHintCollection * mContainingCollection;
    bool  mHasColumnIndices;
    struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; int x3; } * mHints;
    unsigned long long  mHintsCount;
    bool  mValid;
}

@property (nonatomic, readonly) bool hasColumnIndices;
@property (nonatomic, readonly) const struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; int x3; }*hints;
@property (nonatomic, readonly) unsigned long long hintsCount;
@property (nonatomic, readonly) bool valid;

- (bool)checkSubCollectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)dealloc;
- (id)descriptionWithStorage:(id)arg1;
- (bool)hasColumnIndices;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })hintRangeForColumnIndex:(unsigned long long)arg1 frameBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 charIndex:(unsigned long long)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })hintRangeForLineStartingAtHintIndex:(unsigned long long)arg1;
- (const struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; int x3; }*)hints;
- (unsigned long long)hintsCount;
- (id)initWithContainingCollection:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 context:(id)arg3;
- (id)newSubCollectionWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)p_columnIndexForHintIndex:(unsigned long long)arg1;
- (bool)valid;

@end
