/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUEmphasizedText : NSObject <NSCopying, NSSecureCoding> {
    NSMutableSet * _emphasisRangesSet;
    NSString * _string;
}

@property (nonatomic, readonly, copy) NSArray *emphasisRanges;
@property (nonatomic, readonly, copy) NSString *string;

+ (void)_enumerateEmphasisRangesInString:(id)arg1 withEmphasisDelimiter:(id)arg2 usingBlock:(id /* block */)arg3;
+ (void)_enumerateEmphasisRangesInString:(id)arg1 withEmphasisSubstring:(id)arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
+ (id)attributedStringWithString:(id)arg1 emphasisDelimiter:(id)arg2 regularTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;
+ (id)attributedStringWithString:(id)arg1 emphasisSubstring:(id)arg2 options:(unsigned long long)arg3 regularTextAttributes:(id)arg4 emphasizedTextAttributes:(id)arg5;
+ (id)emphasizedTextUsingString:(id)arg1 emphasisDelimiter:(id)arg2;
+ (id)emphasizedTextUsingString:(id)arg1 emphasisSubstring:(id)arg2 options:(unsigned long long)arg3;
+ (id)emphasizedTextWithString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emphasisRanges;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateEmphasisRangesUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 emphasisRanges:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)newAttributedStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2;
- (id)newAttributedStringWithTextAttributes:(id)arg1;
- (id)string;

@end
