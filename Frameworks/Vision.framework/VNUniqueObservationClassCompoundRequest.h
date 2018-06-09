/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNUniqueObservationClassCompoundRequest : VNCompoundRequest {
    NSMapTable * _requestToObservationClassMap;
}

- (void).cxx_destruct;
- (void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2;
- (id)initWithOriginalRequests:(id)arg1 requestToObservationClassMap:(id)arg2;
- (id)initWithSubrequests:(id)arg1 uniqueObservationClasses:(id)arg2;
- (id)initWithSubrequestsAndUniqueObservationClasses:(id)arg1;

@end
