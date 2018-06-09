/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPersonClusterUsabilityCriteria : NSObject {
    <PLPersonClusterUsabilityCriteriaDataSource> * _dataSource;
    <PLPersonClusterUsabilityPreferences> * _preferences;
}

@property (nonatomic) unsigned long long persistentTargetFaceCount;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned long long)_reviseMaxUnverifiedClusters:(unsigned long long)arg1 withVerifiedPersonsCount:(unsigned long long)arg2;
- (unsigned long long)calculateTargetFaceCount;
- (unsigned long long)calculateTargetFaceCountFromResults:(id)arg1 withMaxUnverifiedClusters:(unsigned long long)arg2;
- (id)initWithDataSource:(id)arg1 preferences:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1;
- (unsigned long long)persistentTargetFaceCount;
- (void)setPersistentTargetFaceCount:(unsigned long long)arg1;
- (void)updatePersistentTargetFaceCount;

@end
