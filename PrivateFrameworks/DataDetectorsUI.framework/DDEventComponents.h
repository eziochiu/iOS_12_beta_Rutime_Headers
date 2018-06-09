/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDEventComponents : NSObject <NSSecureCoding> {
    double  _duration;
    NSDate * _endDate;
    NSString * _eventTypeIdentifier;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _originRange;
    long long  _source;
    NSDate * _startDate;
    NSString * _title;
}

@property (nonatomic) double duration;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, copy) NSString *eventTypeIdentifier;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } originRange;
@property (nonatomic) long long source;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, copy) NSString *title;

+ (id)_eventComponents:(id)arg1 matchingResult:(struct __DDResult { }*)arg2 context:(id)arg3;
+ (id)_eventsFromIntelligentSuggestions:(id)arg1;
+ (id)_eventsFromNaturalLanguageText:(id)arg1 context:(id)arg2;
+ (id)bestEventComponentsForResult:(struct __DDResult { }*)arg1 withNaturalLanguageContext:(id)arg2 suggestionsContext:(id)arg3 context:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)eventTypeIdentifier;
- (id)initWithCoder:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })originRange;
- (void)setDuration:(double)arg1;
- (void)setEndDate:(id)arg1;
- (void)setEventTypeIdentifier:(id)arg1;
- (void)setOriginRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSource:(long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (long long)source;
- (id)startDate;
- (id)title;

@end
