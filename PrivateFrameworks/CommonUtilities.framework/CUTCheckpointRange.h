/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTCheckpointRange : CUTCheckpointSignpost {
    NSDate * _endDate;
    bool  _ordered;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSDate *endDate;
@property (getter=isOrdered, nonatomic) bool ordered;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (id)_reportEndDate;
- (id)_reportStartDate;
- (void)_touchEndDate;
- (void)_touchStartDate;
- (id)description;
- (id)endDate;
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4;
- (bool)isOrdered;
- (void)mergeWithCheckpoint:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setOrdered:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
