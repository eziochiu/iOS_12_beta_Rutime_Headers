/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFFileArchive : NSObject {
    NSData * _inputData;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _inputRange;
    NSMutableData * _outputData;
    id /* block */  _readerBlock;
    id /* block */  _writerBlock;
}

@property (nonatomic, retain) NSData *inputData;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } inputRange;
@property (nonatomic, retain) NSMutableData *outputData;
@property (nonatomic, copy) id /* block */ readerBlock;
@property (nonatomic, copy) id /* block */ writerBlock;

+ (id)archive;

- (int)_archiveDirectoryName:(id)arg1 withArchive:(struct archive { }*)arg2 error:(id*)arg3;
- (id)_compressContents:(id)arg1 error:(id*)arg2;
- (int)_compressContents:(id)arg1 fileName:(id)arg2 withArchive:(struct archive { }*)arg3 error:(id*)arg4;
- (int)_compressContents:(id)arg1 withArchive:(struct archive { }*)arg2 error:(id*)arg3;
- (int)_compressWithArchive:(struct archive { }*)arg1 error:(id*)arg2;
- (struct archive { }*)_compressionArchive;
- (struct archive_entry { }*)_compressionArchiveEntryWithName:(id)arg1 length:(unsigned long long)arg2 isDirectory:(bool)arg3;
- (int)_compressionCompleteForArchive:(struct archive { }*)arg1 error:(id*)arg2;
- (bool)_decompressArchive:(struct archive { }*)arg1 intoArchiveDirectory:(id)arg2 error:(id*)arg3;
- (bool)_decompressContents:(id)arg1 inMemoryWithError:(id*)arg2 mainEntry:(bool)arg3;
- (struct archive { }*)_decompressionArchive;
- (int)_decompressionCompleteForArchive:(struct archive { }*)arg1 error:(id*)arg2;
- (id)_errorForArchiveStatus:(long long)arg1;
- (void)compressContents:(id)arg1 completion:(id /* block */)arg2;
- (id)compressFolder:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)decompressContents:(id)arg1 completion:(id /* block */)arg2;
- (id)description;
- (id)init;
- (id)inputData;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })inputRange;
- (id)outputData;
- (id /* block */)readerBlock;
- (void)registerBlocks:(id /* block */)arg1 writer:(id /* block */)arg2;
- (void)setInputData:(id)arg1;
- (void)setInputRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setOutputData:(id)arg1;
- (void)setReaderBlock:(id /* block */)arg1;
- (void)setWriterBlock:(id /* block */)arg1;
- (void)unregisterBlocks;
- (id /* block */)writerBlock;

@end
