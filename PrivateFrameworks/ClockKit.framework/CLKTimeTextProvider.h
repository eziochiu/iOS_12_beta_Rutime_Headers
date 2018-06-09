/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKTimeTextProvider : CLKTextProvider {
    NSDate * _date;
    NSDateFormatter * _dateFormatter;
    bool  _disallowBothMinutesAndDesignator;
    bool  _prefersDesignatorToMinutes;
    NSMutableArray * _sizingFallbackBlocks;
    NSTimeZone * _timeZone;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic) bool disallowBothMinutesAndDesignator;
@property (nonatomic) bool prefersDesignatorToMinutes;
@property (nonatomic, retain) NSTimeZone *timeZone;

+ (bool)supportsSecureCoding;
+ (id)textProviderWithDate:(id)arg1;
+ (id)textProviderWithDate:(id)arg1 timeZone:(id)arg2;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (id)_timeAttributedTextWithStyle:(id)arg1 dropMinutes:(bool)arg2 dropDesignator:(bool)arg3;
- (void)_validate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (bool)disallowBothMinutesAndDesignator;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)prefersDesignatorToMinutes;
- (void)setDate:(id)arg1;
- (void)setDisallowBothMinutesAndDesignator:(bool)arg1;
- (void)setPrefersDesignatorToMinutes:(bool)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;

@end
