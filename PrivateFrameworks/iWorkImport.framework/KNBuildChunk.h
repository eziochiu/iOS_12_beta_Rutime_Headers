/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuildChunk : TSPObject <KNInspectableAnimation, NSCopying, TSKModel> {
    bool  _automatic;
    KNBuildChunkIdentifier * _buildChunkIdentifier;
    NSUUID * _buildId;
    TSPLazyReference * _buildReference;
    unsigned long long  _cachedActiveIndexOnSlide;
    unsigned long long  _cachedIndexInBuild;
    unsigned long long  _cachedIndexOnSlide;
    double  _delay;
    double  _duration;
    bool  _needsAutomaticFromBuildAttributes;
    bool  _needsDelayFromBuildAttributes;
    bool  _needsDurationFromBuildAttributes;
    bool  _needsReferentFromBuildAttributes;
    unsigned long long  _referent;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly) unsigned long long activeIndexOnSlide;
@property (getter=isAutomatic, nonatomic) bool automatic;
@property (getter=isAutomaticWithPreviousChunk, nonatomic, readonly) bool automaticWithPreviousChunk;
@property (getter=isAutomaticWithPreviousChunkOnSameDrawable, nonatomic, readonly) bool automaticWithPreviousChunkOnSameDrawable;
@property (nonatomic, readonly) NSArray *availableEventTriggers;
@property (nonatomic, readonly) KNBuild *build;
@property (nonatomic, readonly) bool canEditAnimations;
@property (nonatomic, readonly) KNBuildChunkIdentifier *chunkIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double delay;
@property (nonatomic, readonly) unsigned long long deliveryGroupIndex;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic, readonly) unsigned long long eventTrigger;
@property (nonatomic, readonly) bool hasComplement;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) KNBuild *i_buildFromReference;
@property (nonatomic, readonly) NSUUID *i_buildId;
@property (nonatomic, readonly) unsigned long long indexInBuild;
@property (nonatomic, readonly) unsigned long long indexOnSlide;
@property (nonatomic, readonly) NSSet *inspectableAttributes;
@property (nonatomic, readonly) bool isFirstInBuild;
@property (nonatomic, readonly) bool isFirstInDeliveryGroup;
@property (nonatomic, readonly) bool isFirstOnSlide;
@property (nonatomic, readonly) KNBuildChunk *nextChunkOnSlide;
@property (nonatomic, readonly) KNBuildChunk *previousChunkOnSlide;
@property (nonatomic) unsigned long long referent;
@property (nonatomic, readonly) KNSlide *slide;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

+ (void)i_repairChunkToBuildReferencesFromUUIDsForChunks:(id)arg1 builds:(id)arg2 context:(id)arg3;
+ (void)i_validateBuildReferencesForChunks:(id)arg1;
+ (bool)needsObjectUUID;

- (void).cxx_destruct;
- (unsigned long long)activeIndexOnSlide;
- (id)availableEventTriggers;
- (id)build;
- (bool)canEditAnimations;
- (id)chunkIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)delay;
- (unsigned long long)deliveryGroupIndex;
- (id)description;
- (void)didInitFromSOS;
- (double)duration;
- (unsigned long long)eventTrigger;
- (bool)hasComplement;
- (id)i_buildFromReference;
- (id)i_buildId;
- (void)i_clearChunkIdentifier;
- (void)i_didLoadBuild:(id)arg1;
- (void)i_invalidateCaches;
- (void)i_setBuildId:(id)arg1;
- (void)i_setBuildPointer:(id)arg1 forUnarchive:(bool)arg2;
- (void)i_setChunkIdentifier:(id)arg1;
- (void)i_updateChunkUUIDReferencesToBuild:(id)arg1;
- (unsigned long long)indexInBuild;
- (unsigned long long)indexOnSlide;
- (id)initWithBuild:(id)arg1;
- (id)initWithBuild:(id)arg1 copyingAttributesFromChunk:(id)arg2;
- (id)initWithBuild:(id)arg1 referent:(unsigned long long)arg2 copyingRemainingAttributesFromChunk:(id)arg3;
- (id)inspectableAttributes;
- (bool)isActive;
- (bool)isAutomatic;
- (bool)isAutomaticWithPreviousChunk;
- (bool)isAutomaticWithPreviousChunkOnSameDrawable;
- (bool)isComplementOfBuildChunk:(id)arg1;
- (bool)isFirstInBuild;
- (bool)isFirstInDeliveryGroup;
- (bool)isFirstOnSlide;
- (void)loadFromArchive:(const struct BuildChunkArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; double x6; double x7; unsigned int x8; bool x9; bool x10; struct BuildChunkIdentifierArchive {} *x11; struct UUID {} *x12; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)nextChunkOnSlide;
- (void)p_setDelayFromBuildAttributes:(id)arg1 withReferent:(unsigned long long)arg2 automatic:(bool)arg3;
- (void)p_setDurationFromBuildAttributes:(id)arg1;
- (id)p_stringForReferent:(unsigned long long)arg1;
- (id)p_stringRepresentationWithNotAvailableForIndex:(unsigned long long)arg1;
- (id)previousChunkOnSlide;
- (unsigned long long)referent;
- (void)saveToArchive:(struct BuildChunkArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; double x6; double x7; unsigned int x8; bool x9; bool x10; struct BuildChunkIdentifierArchive {} *x11; struct UUID {} *x12; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setAutomatic:(bool)arg1;
- (void)setDelay:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setReferent:(unsigned long long)arg1;
- (id)slide;
- (id)title;

@end
