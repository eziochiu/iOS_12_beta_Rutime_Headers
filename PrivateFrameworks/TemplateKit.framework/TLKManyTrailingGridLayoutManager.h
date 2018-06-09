/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKManyTrailingGridLayoutManager : TLKGridLayoutManager {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _ignoreRange;
}

@property struct _NSRange { unsigned long long x1; unsigned long long x2; } ignoreRange;

+ (id)computeTruncationForAlignments:(id)arg1 indexForFirstTrailingColumn:(unsigned long long)arg2 totalEqualColumns:(unsigned long long)arg3;

- (double)gridArrangement:(id)arg1 widthOfColumnAtIndex:(long long)arg2 spacingAfter:(double*)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ignoreRange;
- (void)setIgnoreRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeForFittingSize:(struct CGSize { double x1; double x2; })arg1 forRow:(id)arg2;

@end
