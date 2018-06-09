/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesMapDotsUpdatePlan : NSObject <PXPlacesMapUpdatePlan> {
    NSArray * _previouslyAddedOverlays;
    <PXPlacesMapPipelineComponentProvider> * pipelineComponentProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXPlacesMapPipelineComponentProvider> *pipelineComponentProvider;
@property (retain) NSArray *previouslyAddedOverlays;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)annotationForLayoutItem:(id)arg1;
- (id)pipelineComponentProvider;
- (id)previouslyAddedOverlays;
- (id)removalPlanResult;
- (void)reset;
- (id)resultForNewLayoutResult:(id)arg1;
- (void)setPipelineComponentProvider:(id)arg1;
- (void)setPreviouslyAddedOverlays:(id)arg1;

@end
