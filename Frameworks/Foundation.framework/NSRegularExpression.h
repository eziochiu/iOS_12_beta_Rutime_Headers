/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSRegularExpression : NSObject <NSCopying, NSSecureCoding> {
    int  _checkout;
    void * _internal;
    unsigned long long  _options;
    NSString * _pattern;
    id  _reserved1;
    int  _reserved2;
}

@property (readonly) unsigned long long numberOfCaptureGroups;
@property (readonly) unsigned long long options;
@property (readonly, copy) NSString *pattern;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)escapedPatternForString:(id)arg1;
+ (id)escapedTemplateForString:(id)arg1;
+ (void)initialize;
+ (id)regularExpressionWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;

- (unsigned long long)_captureGroupNumberWithName:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 usingBlock:(id /* block */)arg4;
- (id)firstMatchInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (id)matchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (unsigned long long)numberOfCaptureGroups;
- (unsigned long long)numberOfMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (unsigned long long)options;
- (id)pattern;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfFirstMatchInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (unsigned long long)replaceMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 withTemplate:(id)arg4;
- (id)replacementStringForResult:(id)arg1 inString:(id)arg2 offset:(long long)arg3 template:(id)arg4;
- (id)stringByReplacingMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 withTemplate:(id)arg4;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_intents_sharedFormatRegularExpression;
+ (id)_intents_sharedStringsDictFormatRegularExpression;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)mf_attributionExpression;
+ (id)mf_attributionPrefixExpression;
+ (id)mf_copyAttributionRegularExpressionForType:(int)arg1;
+ (id)mf_forwardSeparatorExpression;
+ (id)mf_horizontalSeparatorExpression;
+ (id)mf_signatureExpression;

@end