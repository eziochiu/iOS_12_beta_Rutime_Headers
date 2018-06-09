/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNAnnouncementPlanEvent : NSObject {
    NSMutableArray * _announcementDurations;
    double  _distance;
    GEOComposedGuidanceEvent * _event;
    bool  _includeInPlan;
    MNGuidanceEventManager * _manager;
    double  _speed;
    double  _triggerDistance;
    unsigned long long  _variantIndex;
}

@property (nonatomic, retain) NSMutableArray *announcementDurations;
@property (nonatomic, readonly) double completionDistance;
@property (nonatomic) double distance;
@property (nonatomic, retain) GEOComposedGuidanceEvent *event;
@property (nonatomic) bool includeInPlan;
@property (nonatomic) MNGuidanceEventManager *manager;
@property (nonatomic) double speed;
@property (nonatomic) double triggerDistance;
@property (nonatomic) unsigned long long variantIndex;

- (void).cxx_destruct;
- (id)announcementDurations;
- (double)completionDistance;
- (id)description;
- (double)distance;
- (id)event;
- (bool)includeInPlan;
- (id)initWithEvent:(id)arg1 distance:(double)arg2 speed:(double)arg3 manager:(id)arg4;
- (id)manager;
- (void)setAnnouncementDurations:(id)arg1;
- (void)setDistance:(double)arg1;
- (void)setEvent:(id)arg1;
- (void)setIncludeInPlan:(bool)arg1;
- (void)setManager:(id)arg1;
- (void)setSpeed:(double)arg1;
- (void)setTriggerDistance:(double)arg1;
- (void)setVariantIndex:(unsigned long long)arg1;
- (double)speed;
- (double)triggerDistance;
- (unsigned long long)variantIndex;

@end
