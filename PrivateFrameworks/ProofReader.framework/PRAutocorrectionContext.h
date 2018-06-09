/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRAutocorrectionContext : NSObject {
    unsigned long long  _modificationMask;
}

+ (id)autocorrectionContextOfType:(unsigned long long)arg1;
+ (void)clearCaches;

- (void)addInputCharacter:(unsigned short)arg1 geometryData:(id)arg2;
- (void)addInputCharacter:(unsigned short)arg1 geometryModel:(void*)arg2 geometryData:(id)arg3;
- (id)addedModifications;
- (id)completions;
- (id)correction;
- (id)currentModifications;
- (id)guesses;
- (unsigned long long)modificationMask;
- (id)prefixes;
- (id)removedModifications;
- (void)reset;
- (void)setModificationMask:(unsigned long long)arg1;
- (void)setValidSequenceCorrectionThreshold:(double)arg1;
- (double)validSequenceCorrectionThreshold;

@end
