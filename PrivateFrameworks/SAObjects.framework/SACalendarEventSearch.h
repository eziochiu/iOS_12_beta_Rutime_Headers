/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACalendarEventSearch : SADomainCommand

@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSNumber *limit;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *notes;
@property (nonatomic, copy) NSArray *participants;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, copy) NSString *timeZoneId;
@property (nonatomic, copy) NSString *title;

+ (id)eventSearch;
+ (id)eventSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)endDate;
- (id)groupIdentifier;
- (id)limit;
- (id)location;
- (id)notes;
- (id)participants;
- (bool)requiresResponse;
- (void)setEndDate:(id)arg1;
- (void)setLimit:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTimeZoneId:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)startDate;
- (id)timeZoneId;
- (id)title;

@end
