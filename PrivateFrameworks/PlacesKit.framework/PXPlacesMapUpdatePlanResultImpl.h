/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesMapUpdatePlanResultImpl : NSObject <PXPlacesMapUpdatePlanResult> {
    NSMutableSet * _annotationsToAddImmediately;
    NSMutableSet * _annotationsToRedraw;
    NSMutableSet * _annotationsToRemoveAfterAnimationHasEnded;
    NSMutableSet * _annotationsToRemoveAfterAnimationHasStarted;
    NSMutableSet * _annotationsToRemoveImmediately;
    NSMutableSet * _annotationsWithUpdatedIndex;
    NSMutableSet * _overlaysToAddImmediately;
    NSMutableSet * _overlaysToRemoveImmediately;
}

@property (readonly) NSMutableSet *annotationsToAddImmediately;
@property (readonly) NSMutableSet *annotationsToRedraw;
@property (readonly) NSMutableSet *annotationsToRemoveAfterAnimationHasEnded;
@property (readonly) NSMutableSet *annotationsToRemoveAfterAnimationHasStarted;
@property (readonly) NSMutableSet *annotationsToRemoveImmediately;
@property (readonly) NSMutableSet *annotationsWithUpdatedIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSMutableSet *overlaysToAddImmediately;
@property (readonly) NSMutableSet *overlaysToRemoveImmediately;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)annotationsToAddImmediately;
- (id)annotationsToRedraw;
- (id)annotationsToRemoveAfterAnimationHasEnded;
- (id)annotationsToRemoveAfterAnimationHasStarted;
- (id)annotationsToRemoveImmediately;
- (id)annotationsWithUpdatedIndex;
- (id)description;
- (id)init;
- (id)overlaysToAddImmediately;
- (id)overlaysToRemoveImmediately;

@end
