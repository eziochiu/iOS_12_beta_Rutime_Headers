/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHBottomUpStrokeGroupingResult : CHStrokeGroupingResult {
    NSSet * _nontextCandidates;
    NSDictionary * _substrokesByStrokeIdentifier;
}

@property (nonatomic, readonly, retain) NSSet *nontextCandidates;
@property (nonatomic, readonly, retain) NSDictionary *substrokesByStrokeIdentifier;

- (void)dealloc;
- (id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 substrokesByStrokeIdentifier:(id)arg4 nontextCandidates:(id)arg5;
- (id)nontextCandidates;
- (id)substrokesByStrokeIdentifier;

@end
