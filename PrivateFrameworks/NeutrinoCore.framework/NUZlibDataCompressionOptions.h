/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUZlibDataCompressionOptions : NSObject {
    unsigned long long  _chunkSize;
    int  _compressionLevel;
    int  _memoryLevel;
    int  _strategy;
    int  _windowBits;
}

@property (nonatomic) unsigned long long chunkSize;
@property (nonatomic) int compressionLevel;
@property (nonatomic) int memoryLevel;
@property (nonatomic) int strategy;
@property (nonatomic) int windowBits;

+ (id)defaultOptions;

- (unsigned long long)chunkSize;
- (int)compressionLevel;
- (int)memoryLevel;
- (void)setChunkSize:(unsigned long long)arg1;
- (void)setCompressionLevel:(int)arg1;
- (void)setCompressionStrategy:(int)arg1;
- (void)setMemoryLevel:(int)arg1;
- (void)setStrategy:(int)arg1;
- (void)setWindowBits:(int)arg1;
- (int)strategy;
- (int)windowBits;

@end
