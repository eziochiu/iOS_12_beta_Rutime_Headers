/* made by EzioChiu.
 */

@protocol MNGuidanceManagerDelegate <NSObject>

@required

- (void)guidanceManager:(void *)arg1 announce:(void *)arg2 shortPromptType:(void *)arg3 stage:(void *)arg4 hasSecondaryManeuver:(void *)arg5 completionBlock:(void *)arg6; // needs 6 arg types, found 11: <MNGuidanceManager> *, NSString *, unsigned long long, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)guidanceManager:(id <MNGuidanceManager>)arg1 didArriveWithAnnouncement:(NSString *)arg2;
- (void)guidanceManager:(id <MNGuidanceManager>)arg1 didStartWithAnnouncement:(NSString *)arg2;
- (void)guidanceManager:(id <MNGuidanceManager>)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)guidanceManager:(id <MNGuidanceManager>)arg1 displayPrimaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(bool)arg8;
- (void)guidanceManager:(id <MNGuidanceManager>)arg1 displaySecondaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6;
- (void)guidanceManager:(id <MNGuidanceManager>)arg1 hideLaneDirectionsForId:(NSUUID *)arg2;
- (void)guidanceManager:(id <MNGuidanceManager>)arg1 newGuidanceEventFeedback:(MNGuidanceEventFeedback *)arg2;
- (void)guidanceManager:(id <MNGuidanceManager>)arg1 showLaneDirections:(MNGuidanceLaneInfo *)arg2;
- (void)guidanceManager:(id <MNGuidanceManager>)arg1 triggerHaptics:(int)arg2;
- (void)guidanceManager:(id <MNGuidanceManager>)arg1 updateSignsWithInfo:(MNGuidanceSignInfo *)arg2;
- (void)guidanceManager:(id <MNGuidanceManager>)arg1 updatedGuidanceEventFeedback:(MNGuidanceEventFeedback *)arg2;
- (void)guidanceManager:(id <MNGuidanceManager>)arg1 usePersistentDisplay:(bool)arg2;
- (void)guidanceManager:(id <MNGuidanceManager>)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)guidanceManagerBeginGuidanceUpdate:(id <MNGuidanceManager>)arg1;
- (void)guidanceManagerDidUpdateProgress:(id <MNGuidanceManager>)arg1 currentStepIndex:(unsigned long long)arg2 distanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
- (void)guidanceManagerEndGuidanceUpdate:(id <MNGuidanceManager>)arg1;
- (void)guidanceManagerHideSecondaryStep:(id <MNGuidanceManager>)arg1;
- (void)guidanceManagerProceedingToRoute:(id <MNGuidanceManager>)arg1 proceedToRouteDistance:(double)arg2 displayString:(NSString *)arg3 closestStepIndex:(unsigned long long)arg4;

@end
