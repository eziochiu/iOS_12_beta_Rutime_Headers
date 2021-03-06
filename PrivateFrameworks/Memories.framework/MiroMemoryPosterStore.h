/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMemoryPosterStore : NSObject

- (id)_sanitizedFullPosterFilename:(id)arg1 generationInfo:(id)arg2;
- (id)_sanitizedPosterDirectoryName:(id)arg1;
- (id)_storedPosterImageDirectoryForMemory:(id)arg1;
- (id)_storedPosterImagePathForMemory:(id)arg1 generationInfo:(id)arg2;
- (void)clearOldPostersForMemory:(id)arg1 saveInfo:(id)arg2;
- (void)deletePosterStoreForMemory:(id)arg1;
- (bool)posterImageExistsForMemory:(id)arg1 generationInfo:(id)arg2;
- (id)posterImageForMemory:(id)arg1 generationInfo:(id)arg2;
- (id)posterImageStorePathBase;
- (void)storePosterImageWithData:(id)arg1 forMemory:(id)arg2 generationInfo:(id)arg3;

@end
