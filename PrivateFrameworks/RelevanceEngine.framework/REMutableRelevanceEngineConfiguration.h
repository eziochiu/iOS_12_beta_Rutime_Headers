/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REMutableRelevanceEngineConfiguration : RERelevanceEngineConfiguration

@property (nonatomic) bool allowsRemoteTraining;
@property (nonatomic) bool allowsUpdatingModelFile;
@property (nonatomic, copy) NSURL *baseModelFileURL;
@property (nonatomic, copy) REDataSourceLoader *dataSourceLoader;
@property (nonatomic, retain) RELocationManager *locationManager;
@property (nonatomic, copy) NSURL *modelFileURL;
@property (nonatomic, copy) NSString *preferenceDomain;
@property (nonatomic, copy) REFeatureSet *primaryFeatures;
@property (nonatomic) unsigned long long trainingBehavior;
@property (nonatomic) bool wantsBackup;
@property (nonatomic) bool wantsImmutableContent;

+ (id)defaultConfiguration;

- (long long)_indexOfInteractionWithName:(id)arg1;
- (long long)_indexOfSectionWithName:(id)arg1;
- (void)addInteractionWithDescriptor:(id)arg1;
- (void)addSectionWithDescriptor:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)insertInteractionWithDescriptor:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertSectionWithDescriptor:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeInteractionAtIndex:(unsigned long long)arg1;
- (void)removeSectionAtIndex:(unsigned long long)arg1;
- (void)removeSectionWithName:(id)arg1;
- (void)setAllowsRemoteTraining:(bool)arg1;
- (void)setAllowsUpdatingModelFile:(bool)arg1;
- (void)setBaseModelFileURL:(id)arg1;
- (void)setDataSourceLoader:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setModelFileURL:(id)arg1;
- (void)setPreferenceDomain:(id)arg1;
- (void)setPrimaryFeatures:(id)arg1;
- (void)setTrainingBehavior:(unsigned long long)arg1;
- (void)setWantsBackup:(bool)arg1;
- (void)setWantsImmutableContent:(bool)arg1;

@end
