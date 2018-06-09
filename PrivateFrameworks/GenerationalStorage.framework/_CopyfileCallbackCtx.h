/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@interface _CopyfileCallbackCtx : NSObject {
    bool  _doArchive;
    bool  _doUnarchive;
    unsigned long long  _generationSize;
    NSProgress * _progress;
}

@property (nonatomic) bool doArchive;
@property (nonatomic) bool doUnarchive;
@property (nonatomic) unsigned long long generationSize;
@property (nonatomic, readonly) NSProgress *progress;

- (void).cxx_destruct;
- (bool)doArchive;
- (bool)doUnarchive;
- (unsigned long long)generationSize;
- (id)initWithPath:(const char *)arg1 error:(id*)arg2;
- (id)progress;
- (void)setDoArchive:(bool)arg1;
- (void)setDoUnarchive:(bool)arg1;
- (void)setGenerationSize:(unsigned long long)arg1;

@end
