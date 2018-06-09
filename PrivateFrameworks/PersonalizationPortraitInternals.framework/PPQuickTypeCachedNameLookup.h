/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPQuickTypeCachedNameLookup : NSObject {
    NSArray * _candidates;
    NSObject<OS_dispatch_semaphore> * _sem;
}

@property (nonatomic, retain) NSArray *candidates;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *sem;

- (void).cxx_destruct;
- (id)candidates;
- (id)sem;
- (void)setCandidates:(id)arg1;
- (void)setSem:(id)arg1;

@end
