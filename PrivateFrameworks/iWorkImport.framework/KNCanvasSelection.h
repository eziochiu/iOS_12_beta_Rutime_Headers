/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNCanvasSelection : TSDCanvasSelection {
    NSSet * _buildChunks;
}

@property (nonatomic, retain) NSSet *buildChunks;
@property (nonatomic, readonly) bool containsOnlyUnlockedInfosSupportingHyperlinkActions;
@property (nonatomic, readonly) NSSet *drawableInfos;
@property (nonatomic, readonly) NSSet *unlockedDrawableInfos;
@property (nonatomic, readonly) NSSet *unlockedInfosSupportingHyperlinkActions;

+ (Class)archivedSelectionClass;
+ (id)emptySelection;

- (void).cxx_destruct;
- (id)UUIDDescription;
- (id)buildChunks;
- (bool)containsBuildChunksOfAnimationType:(long long)arg1;
- (bool)containsOnlyUnlockedInfosSupportingHyperlinkActions;
- (id)copyExcludingBuildChunks:(id)arg1;
- (id)copyReplacingChunksWithChunks:(id)arg1;
- (id)drawableInfos;
- (unsigned long long)hash;
- (id)initWithInfos:(id)arg1;
- (id)initWithInfos:(id)arg1 buildChunks:(id)arg2;
- (id)initWithPersistableInfos:(id)arg1 drawableToActionGhostIndexPromiseMap:(id)arg2 buildChunks:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)p_drawablesWithoutPromisesInDrawableToActionGhostIndexPromiseMap:(id)arg1;
- (void)setBuildChunks:(id)arg1;
- (id)subclassDescription;
- (id)unlockedDrawableInfos;
- (id)unlockedInfosSupportingHyperlinkActions;

@end
