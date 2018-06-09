/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAlarmDiff : NSObject {
    NSSet * _addedAlarms;
    NSSet * _deletedAlarms;
    NSSet * _unmodifiedAlarms;
    NSSet * _updatedAlarms;
}

@property (nonatomic, copy) NSSet *addedAlarms;
@property (nonatomic, copy) NSSet *deletedAlarms;
@property (nonatomic, readonly) bool inputWasEqual;
@property (nonatomic, copy) NSSet *unmodifiedAlarms;
@property (nonatomic, copy) NSSet *updatedAlarms;

+ (id)generateAlarmDiffFromSet:(id)arg1 toSet:(id)arg2;

- (void).cxx_destruct;
- (id)addedAlarms;
- (id)deletedAlarms;
- (id)description;
- (bool)inputWasEqual;
- (void)setAddedAlarms:(id)arg1;
- (void)setDeletedAlarms:(id)arg1;
- (void)setUnmodifiedAlarms:(id)arg1;
- (void)setUpdatedAlarms:(id)arg1;
- (id)unmodifiedAlarms;
- (id)updatedAlarms;

@end