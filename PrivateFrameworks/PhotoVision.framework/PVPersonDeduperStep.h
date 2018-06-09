/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@interface PVPersonDeduperStep : NSObject {
    <PVPersonPromoterDelegate> * _delegate;
    NSDictionary * _invalidCandidatesMapping;
    NSMapTable * _mergeRelations;
    PVPersonClusterManager * _personClusterManager;
    PVPersonDeduperProfile * _profile;
    float  _progress;
    bool  _shouldStop;
}

@property (nonatomic) <PVPersonPromoterDelegate> *delegate;
@property (nonatomic, readonly) NSDictionary *invalidCandidatesMapping;
@property (nonatomic, readonly) NSMapTable *mergeRelations;
@property (nonatomic, readonly) NSString *metricsKey;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) PVPersonClusterManager *personClusterManager;
@property (nonatomic, readonly) PVPersonDeduperProfile *profile;
@property (nonatomic) float progress;
@property (nonatomic) bool shouldStop;

- (void).cxx_destruct;
- (id)_resolveMergeCandidate:(id)arg1 forPerson:(id)arg2;
- (bool)addPotentialMergeCandidateForPerson:(id)arg1 withOtherPerson:(id)arg2 updateBlock:(id /* block */)arg3;
- (void)dedupePersons:(id)arg1 withOtherPersons:(id)arg2 updateBlock:(id /* block */)arg3 resultBlock:(id /* block */)arg4;
- (id)delegate;
- (id)initWithPersonClusterManager:(id)arg1 invalidCandidatesMapping:(id)arg2 profile:(id)arg3;
- (id)invalidCandidatesMapping;
- (bool)isPersonSimilar:(id)arg1 withOtherPerson:(id)arg2 withDistance:(float)arg3;
- (id)mergeCandidatePersonsWithUpdateBlock:(id /* block */)arg1;
- (id)mergeRelations;
- (id)metricsKey;
- (id)name;
- (id)personClusterManager;
- (id)profile;
- (float)progress;
- (void)setDelegate:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setShouldStop:(bool)arg1;
- (bool)shouldStop;
- (bool)shouldStopWithUpdateBlock:(id /* block */)arg1;

@end
