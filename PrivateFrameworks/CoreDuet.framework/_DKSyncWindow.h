/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncWindow : NSObject {
    NSDate * _endDate;
    _DKEvent * _event;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) _DKEvent *event;
@property (nonatomic, retain) NSDate *startDate;

+ (id)lastWindowMissingFromWindowMinimumDate:(id)arg1 windowMaximumDate:(id)arg2 sortedSyncWindows:(id)arg3;
+ (id)linearDescriptionOfSortedWindows:(id)arg1;
+ (id)syncWindowWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)unionOfSortedSyncWindows:(id)arg1;
+ (id)windowsThatOverlapWithWindowMinimumDate:(id)arg1 windowMaximumDate:(id)arg2 sortedSyncWindows:(id)arg3;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)endDate;
- (id)event;
- (unsigned long long)hash;
- (id)initWithEvent:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToWindow:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (id)unionWithSyncWindow:(id)arg1;

@end