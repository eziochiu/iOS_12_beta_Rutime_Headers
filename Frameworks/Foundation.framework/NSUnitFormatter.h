/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUnitFormatter : NSFormatter <NSSecureCoding> {
    struct UAMeasureFormat { } * _formatter;
    NSLocale * _locale;
    bool  _modified;
    NSNumberFormatter * _numberFormatter;
    struct UPluralRules { } * _prules;
    unsigned long long  _unitOptions;
    long long  _unitStyle;
}

@property (copy) NSLocale *locale;
@property (copy) NSNumberFormatter *numberFormatter;
@property unsigned long long unitOptions;
@property long long unitStyle;

+ (bool)supportsSecureCoding;

- (int)_determineUnitsToFormat:(int*)arg1 fromMeasurement:(id)arg2;
- (void)checkIfModified;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)locale;
- (id)numberFormatter;
- (void)setLocale:(id)arg1;
- (void)setNumberFormatter:(id)arg1;
- (void)setUnitOptions:(unsigned long long)arg1;
- (void)setUnitStyle:(long long)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringForValue1:(double)arg1 unit1:(unsigned long long)arg2 value2:(double)arg3 unit2:(unsigned long long)arg4;
- (id)stringForValue:(double)arg1 unit:(unsigned long long)arg2;
- (id)stringFromUnit:(id)arg1;
- (unsigned long long)unitOptions;
- (id)unitStringFromValue:(double)arg1 unit:(unsigned long long)arg2;
- (long long)unitStyle;

@end
