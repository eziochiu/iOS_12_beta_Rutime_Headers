/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIAutocompleteSearchResult : NSObject {
    NSURL * _URL;
    NSArray * _alarms;
    bool  _allDay;
    NSArray * _attendees;
    EKCalendar * _calendar;
    UIColor * _calendarColor;
    NSDate * _endDate;
    NSString * _foundInBundleID;
    NSString * _location;
    NSString * _locationWithoutPrediction;
    NSString * _notes;
    EKStructuredLocation * _preferredLocation;
    NSDate * _startDate;
    bool  _suggested;
    EKSuggestedEventInfo * _suggestionInfo;
    NSTimeZone * _timeZone;
    NSString * _title;
    NSString * _uniqueID;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) NSArray *alarms;
@property (getter=isAllDay, nonatomic) bool allDay;
@property (nonatomic, retain) NSArray *attendees;
@property (nonatomic, retain) EKCalendar *calendar;
@property (nonatomic, retain) UIColor *calendarColor;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSString *foundInBundleID;
@property (nonatomic, retain) NSString *location;
@property (nonatomic, retain) NSString *locationWithoutPrediction;
@property (nonatomic, retain) NSString *notes;
@property (nonatomic, retain) EKStructuredLocation *preferredLocation;
@property (nonatomic, retain) NSDate *startDate;
@property (getter=isSuggested, nonatomic) bool suggested;
@property (nonatomic, retain) EKSuggestedEventInfo *suggestionInfo;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *uniqueID;

+ (bool)_participantShouldBeUsedForAutocomplete:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)alarms;
- (id)attendees;
- (id)calendar;
- (id)calendarColor;
- (id)endDate;
- (id)foundInBundleID;
- (unsigned long long)hash;
- (id)initWithUniqueID:(id)arg1;
- (bool)isAllDay;
- (bool)isEqual:(id)arg1;
- (bool)isSuggested;
- (id)location;
- (id)locationWithoutPrediction;
- (id)notes;
- (id)preferredLocation;
- (void)setAlarms:(id)arg1;
- (void)setAllDay:(bool)arg1;
- (void)setAttendees:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setCalendarColor:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setFoundInBundleID:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationWithoutPrediction:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setPreferredLocation:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setSuggested:(bool)arg1;
- (void)setSuggestionInfo:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (id)startDate;
- (id)suggestionInfo;
- (id)timeZone;
- (id)title;
- (id)uniqueID;

@end
