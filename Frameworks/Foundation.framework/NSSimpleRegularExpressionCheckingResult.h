/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSimpleRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _ranges;
    NSRegularExpression * _regularExpression;
}

- (bool)_adjustRangesWithOffset:(long long)arg1;
- (void)dealloc;
- (id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2;
- (id)initWithRanges:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3;
- (unsigned long long)numberOfRanges;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)rangeArray;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeAtIndex:(unsigned long long)arg1;
- (id)regularExpression;

@end
