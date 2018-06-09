/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKChangeSetSummary : NSObject {
    NSDate * _endDate;
    NSSet * _eventUUIDs;
    unsigned long long  _sequenceNumber;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSSet *eventUUIDs;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (id)endDate;
- (id)eventUUIDs;
- (unsigned long long)sequenceNumber;
- (void)setEndDate:(id)arg1;
- (void)setEventUUIDs:(id)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
