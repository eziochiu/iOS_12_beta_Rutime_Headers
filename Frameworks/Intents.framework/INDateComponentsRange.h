/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INDateComponentsRange : NSObject <INDateComponentsRangeExport, NSCopying, NSSecureCoding> {
    NSDateComponents * _endDateComponents;
    INRecurrenceRule * _recurrenceRule;
    NSDateComponents * _startDateComponents;
    NSString * _userInput;
}

@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly, copy) NSDateComponents *endDateComponents;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INRecurrenceRule *recurrenceRule;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (nonatomic, readonly, copy) NSDateComponents *startDateComponents;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *userInput;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)EKRecurrenceRule;
- (id)_dictionaryRepresentation;
- (id)_intents_readableDescriptionForLanguage:(id)arg1;
- (id)_userInput;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)endDateComponents;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 onCalendar:(id)arg2 inTimeZone:(id)arg3;
- (id)initWithDateInterval:(id)arg1 onCalendar:(id)arg2 inTimeZone:(id)arg3;
- (id)initWithEKRecurrenceRule:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 onCalendar:(id)arg3 inTimeZone:(id)arg4;
- (id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
- (id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2 recurrenceRule:(id)arg3;
- (id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2 recurrenceRule:(id)arg3 userInput:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)recurrenceRule;
- (id)startDate;
- (id)startDateComponents;
- (id)userInput;

@end
