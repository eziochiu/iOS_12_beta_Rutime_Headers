/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNCommuteDestinationSuggestion : NSObject <NSCopying, NSSecureCoding> {
    bool  _allDay;
    NSDate * _endDate;
    NSDate * _expires;
    NSString * _name;
    NSData * _rawSuggestion;
    NSDate * _startDate;
    unsigned long long  _type;
    NSString * _uniqueIdentifier;
    GEOComposedWaypoint * _waypoint;
    double  _weight;
}

@property (getter=isAllDay, nonatomic) bool allDay;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSDate *expires;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSData *rawSuggestion;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic) unsigned long long type;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (nonatomic, retain) GEOComposedWaypoint *waypoint;
@property (nonatomic) double weight;

+ (id)_fakeBitsAndPiecesForSuggestion:(id)arg1;
+ (void)_setupFakes;
+ (id)fakeDestinationSuggestion:(id)arg1;
+ (void)fakeDestinationSuggestion:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)fakeDestinationSuggestions;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)expires;
- (id)initWithCoder:(id)arg1;
- (bool)isAllDay;
- (id)name;
- (id)rawSuggestion;
- (void)setAllDay:(bool)arg1;
- (void)setEndDate:(id)arg1;
- (void)setExpires:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRawSuggestion:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setWaypoint:(id)arg1;
- (void)setWeight:(double)arg1;
- (id)startDate;
- (unsigned long long)type;
- (id)uniqueIdentifier;
- (id)waypoint;
- (double)weight;

@end
