/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

@interface SUICIndexCacheEntry : NSObject {
    unsigned int * _gl_indices;
    unsigned int  _numAuraIndices;
    unsigned int  _numAuraIndicesCulled;
    unsigned int  _numWaveIndices;
}

@property (nonatomic) unsigned int*gl_indices;
@property (nonatomic) unsigned int numAuraIndices;
@property (nonatomic) unsigned int numAuraIndicesCulled;
@property (nonatomic) unsigned int numWaveIndices;

- (void)dealloc;
- (unsigned int*)gl_indices;
- (unsigned int)numAuraIndices;
- (unsigned int)numAuraIndicesCulled;
- (unsigned int)numWaveIndices;
- (void)setGl_indices:(unsigned int*)arg1;
- (void)setNumAuraIndices:(unsigned int)arg1;
- (void)setNumAuraIndicesCulled:(unsigned int)arg1;
- (void)setNumWaveIndices:(unsigned int)arg1;

@end
