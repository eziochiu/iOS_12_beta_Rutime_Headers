/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDMutableScheduleTimePeriod : DNDScheduleTimePeriod

@property (nonatomic, copy) DNDScheduleTime *endTime;
@property (nonatomic, copy) DNDScheduleTime *startTime;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setEndTime:(id)arg1;
- (void)setStartTime:(id)arg1;

@end
