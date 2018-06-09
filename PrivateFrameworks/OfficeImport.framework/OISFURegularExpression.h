/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFURegularExpression : NSObject <NSCoding, NSCopying> {
    NSString * _expressionString;
    void * _reserved;
}

+ (void)initialize;
+ (id)regularExpressionWithString:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)expressionString;
- (const char *)getBytesForString:(id)arg1 lossByte:(unsigned char)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExpressionString:(id)arg1;
- (id)initWithExpressionString:(id)arg1 options:(unsigned int)arg2;
- (bool)isEqual:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })matchedRangeForCString:(const char *)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 subexpressionRanges:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 count:(unsigned int)arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })matchedRangeForString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 subexpressionRanges:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 count:(unsigned int)arg4;
- (unsigned long long)numberOfSubexpressions;

@end
