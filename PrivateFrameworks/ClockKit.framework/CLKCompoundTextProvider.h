/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKCompoundTextProvider : CLKTextProvider {
    NSMutableArray * _segments;
    NSString * _sessionCacheKey;
    NSMutableArray * _textProviders;
}

+ (id)compoundProviderWithLocalizedFormat:(id)arg1 localizedTextProviders:(id)arg2;
+ (id)compoundTextProviderCurrentlyFormattingOnThisThread;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_arrayOfTextProviderJSONObjectRepresentations;
- (id)_attributedStringForSegment:(id)arg1 withStyle:(id)arg2;
- (void)_endSession;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (void)_processFormat:(id)arg1 arguments:(char *)arg2;
- (id)_replacementForTextProvider:(id)arg1 index:(unsigned long long)arg2 withStyle:(id)arg3;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (id)_sessionCacheKey;
- (void)_startSessionWithDate:(id)arg1;
- (long long)_updateFrequency;
- (void)_validate;
- (void)addTextProvider:(id)arg1 andGetPlaceholderString:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormat:(id)arg1 arguments:(char *)arg2;
- (id)initWithSegments:(id)arg1 textProviders:(id)arg2;
- (bool)isEqual:(id)arg1;
- (long long)timeTravelUpdateFrequency;

@end
