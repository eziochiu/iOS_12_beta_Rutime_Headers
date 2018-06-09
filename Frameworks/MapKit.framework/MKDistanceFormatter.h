/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKDistanceFormatter : NSFormatter {
    NSLocale * _locale;
    unsigned long long  _unitStyle;
    unsigned long long  _units;
}

@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic) unsigned long long unitStyle;
@property (nonatomic) unsigned long long units;

- (void).cxx_destruct;
- (bool)_useMetric;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)distanceFromString:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isPartialStringValid:(id*)arg1 proposedSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 errorDescription:(id*)arg5;
- (id)locale;
- (void)setLocale:(id)arg1;
- (void)setUnitStyle:(unsigned long long)arg1;
- (void)setUnits:(unsigned long long)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromDistance:(double)arg1;
- (unsigned long long)unitStyle;
- (unsigned long long)units;

@end
