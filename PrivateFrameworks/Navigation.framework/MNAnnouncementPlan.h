/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNAnnouncementPlan : NSObject {
    double  _distance;
    NSArray * _events;
    MNGuidanceEventManager * _manager;
    NSArray * _plannedEvents;
    double  _speed;
}

@property (nonatomic) double distance;
@property (nonatomic, retain) NSArray *events;
@property (nonatomic) MNGuidanceEventManager *manager;
@property (nonatomic, retain) NSArray *plannedEvents;
@property (nonatomic) double speed;

+ (double)desiredTimeGapBetweenEvent:(id)arg1 andEvent:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (double)distance;
- (id)events;
- (id)initWithEvents:(id)arg1 distance:(double)arg2 speed:(double)arg3 manager:(id)arg4;
- (id)manager;
- (id)nextConflict;
- (id)plannedEvents;
- (void)setDistance:(double)arg1;
- (void)setEvents:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setPlannedEvents:(id)arg1;
- (void)setSpeed:(double)arg1;
- (void)sortEvents;
- (double)speed;

@end
