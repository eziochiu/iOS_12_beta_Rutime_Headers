/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityBaselineRecoveryOperation : PFUbiquityBaselineOperation

@property NSObject<PFUbiquityBaselineRecoveryOperationDelegate> *delegate;

- (bool)conflictsExistForBaseline:(id)arg1;
- (id)delegate;
- (id)electAncestorBaselineForConflictedBaselines:(id)arg1 dissentingBaselines:(id*)arg2;
- (bool)electBaselineURLFromVersions:(id)arg1 withBaseline:(id)arg2 error:(id*)arg3;
- (bool)hasCurrentBaseline;
- (bool)isEqual:(id)arg1;
- (void)main;
- (bool)replaceLocalStoreWithBaseline:(id)arg1 error:(id*)arg2;
- (bool)resolveConflictsForBaseline:(id)arg1 withError:(id*)arg2;
- (id)retainedDelegate;
- (void)setDelegate:(id)arg1;
- (bool)shouldReplaceLocalStoreWithBaseline:(id)arg1;

@end
