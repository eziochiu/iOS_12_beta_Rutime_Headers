/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTWPFormulaSelection : TSTWPSelection {
    unsigned long long  mActiveTokenCharIndex;
}

@property (nonatomic) unsigned long long activeTokenCharIndex;

+ (Class)archivedSelectionClass;

- (unsigned long long)activeTokenCharIndex;
- (long long)compare:(id)arg1;
- (id)initWithType:(int)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 leadingEdge:(bool)arg6 leadingCharIndex:(unsigned long long)arg7;
- (id)initWithType:(int)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 leadingEdge:(bool)arg6 leadingCharIndex:(unsigned long long)arg7 activeTokenCharIndex:(unsigned long long)arg8;
- (bool)isEqual:(id)arg1;
- (void)setActiveTokenCharIndex:(unsigned long long)arg1;

@end
