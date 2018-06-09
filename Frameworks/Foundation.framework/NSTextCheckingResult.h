/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSTextCheckingResult : NSObject <NSCopying, NSSecureCoding>

@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (readonly) unsigned long long resultType;

+ (id)addressCheckingResultWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 components:(id)arg2;
+ (id)correctionCheckingResultWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementString:(id)arg2;
+ (id)correctionCheckingResultWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementString:(id)arg2 alternativeStrings:(id)arg3;
+ (id)dashCheckingResultWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementString:(id)arg2;
+ (id)dateCheckingResultWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 date:(id)arg2;
+ (id)dateCheckingResultWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4;
+ (id)grammarCheckingResultWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 details:(id)arg2;
+ (void)initialize;
+ (id)linkCheckingResultWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 URL:(id)arg2;
+ (id)orthographyCheckingResultWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 orthography:(id)arg2;
+ (id)phoneNumberCheckingResultWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 phoneNumber:(id)arg2;
+ (id)quoteCheckingResultWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementString:(id)arg2;
+ (id)regularExpressionCheckingResultWithRanges:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3;
+ (id)replacementCheckingResultWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementString:(id)arg2;
+ (id)spellCheckingResultWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (bool)supportsSecureCoding;
+ (id)transitInformationCheckingResultWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 components:(id)arg2;

- (id)URL;
- (bool)_adjustRangesWithOffset:(long long)arg1;
- (id)addressComponents;
- (id)alternativeStrings;
- (id)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })decodeRangeWithCoder:(id)arg1;
- (id)description;
- (double)duration;
- (void)encodeRangeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)grammarDetails;
- (id)initWithCoder:(id)arg1;
- (id)leadingText;
- (unsigned long long)numberOfRanges;
- (id)orthography;
- (id)phoneNumber;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeAtIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeWithName:(id)arg1;
- (id)referenceDate;
- (id)regularExpression;
- (id)replacementString;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (unsigned long long)resultType;
- (bool)timeIsApproximate;
- (bool)timeIsPast;
- (bool)timeIsSignificant;
- (id)timeZone;
- (id)trailingText;
- (void*)underlyingResult;

@end
