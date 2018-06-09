/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface EventsFolderItemsSyncContext : NSObject {
    int  _calAlarmChangeId;
    int  _calAttendeeChangeId;
    int  _calEventChangeId;
    int  _calRecurrenceChangeId;
    int  _highestSequenceNumber;
}

@property (nonatomic) int calAlarmChangeId;
@property (nonatomic) int calAttendeeChangeId;
@property (nonatomic) int calEventChangeId;
@property (nonatomic) int calRecurrenceChangeId;
@property (nonatomic) int highestSequenceNumber;

- (int)calAlarmChangeId;
- (int)calAttendeeChangeId;
- (int)calEventChangeId;
- (int)calRecurrenceChangeId;
- (int)highestSequenceNumber;
- (void)setCalAlarmChangeId:(int)arg1;
- (void)setCalAttendeeChangeId:(int)arg1;
- (void)setCalEventChangeId:(int)arg1;
- (void)setCalRecurrenceChangeId:(int)arg1;
- (void)setHighestSequenceNumber:(int)arg1;

@end
