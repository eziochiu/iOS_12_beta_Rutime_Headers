/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKEventLog : NSObject <NSSecureCoding> {
    NSDate * _endDate;
    NSSet * _passedInEventDatas;
    NSSet * _passedInEvents;
    NSDate * _startDate;
    NSSet * mLazilyLoadedEvents;
}

@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, readonly, copy) NSSet *events;
@property (nonatomic, copy) NSSet *passedInEventDatas;
@property (nonatomic, copy) NSSet *passedInEvents;
@property (nonatomic, retain) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)events;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 eventDatas:(id)arg3;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTimeline:(id)arg1;
- (id)passedInEventDatas;
- (id)passedInEvents;
- (void)setEndDate:(id)arg1;
- (void)setPassedInEventDatas:(id)arg1;
- (void)setPassedInEvents:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
