/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCAVPlaylistIteration : NSObject <NSSecureCoding> {
    unsigned long long  _count;
    unsigned long long  _indexToFaultIn;
    unsigned long long  _iterationIndex;
    MPSparseArray * _sourceContexts;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long indexToFaultIn;
@property (nonatomic) unsigned long long iterationIndex;
@property (nonatomic, retain) MPSparseArray *sourceContexts;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)indexToFaultIn;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)iterationIndex;
- (void)setCount:(unsigned long long)arg1;
- (void)setIndexToFaultIn:(unsigned long long)arg1;
- (void)setIterationIndex:(unsigned long long)arg1;
- (void)setSourceContexts:(id)arg1;
- (id)sourceContexts;

@end
