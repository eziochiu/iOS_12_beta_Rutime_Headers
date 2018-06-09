/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKSimpleTextProvider : CLKTextProvider {
    NSString * _accessibilityLabel;
    NSString * _shortText;
    NSString * _text;
    bool  _useAllSmallCaps;
    bool  _useNoContentDashFormatting;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *shortText;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) bool useAllSmallCaps;
@property (nonatomic) bool useNoContentDashFormatting;

+ (id)finalizedTextProviderWithText:(id)arg1;
+ (id)finalizedTextProviderWithText:(id)arg1 monospaceNumbers:(bool)arg2;
+ (bool)supportsSecureCoding;
+ (id)textProviderWithText:(id)arg1;
+ (id)textProviderWithText:(id)arg1 shortText:(id)arg2;
+ (id)textProviderWithText:(id)arg1 shortText:(id)arg2 accessibilityLabel:(id)arg3;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (void)_validate;
- (id)accessibilityLabel;
- (id)attributedString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setShortText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setUseAllSmallCaps:(bool)arg1;
- (void)setUseNoContentDashFormatting:(bool)arg1;
- (id)shortText;
- (id)text;
- (bool)useAllSmallCaps;
- (bool)useNoContentDashFormatting;

@end
