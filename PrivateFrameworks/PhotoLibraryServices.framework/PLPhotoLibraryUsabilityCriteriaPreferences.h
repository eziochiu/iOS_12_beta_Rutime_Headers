/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoLibraryUsabilityCriteriaPreferences : NSObject <PLPersonClusterUsabilityPreferences>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long maxUnverifiedClusters;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long unverifiedFaceCountThreshold;

- (unsigned long long)maxUnverifiedClusters;
- (void)setUnverifiedFaceCountThreshold:(unsigned long long)arg1;
- (unsigned long long)unverifiedFaceCountThreshold;

@end
