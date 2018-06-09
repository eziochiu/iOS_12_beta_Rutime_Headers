/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUCryptor : NSObject {
    unsigned long long  mBlockSize;
    struct _CCCryptor { } * mCryptor;
    char * mDecryptionInputBuffer;
    bool  mFinished;
    int  mOperation;
    char * mOutputBuffer;
    unsigned long long  mOutputBufferAvailable;
    char * mOutputBufferPos;
}

- (bool)cryptDataFromBuffer:(const char *)arg1 length:(unsigned long long)arg2 toStream:(id)arg3 finished:(bool)arg4 crc32:(unsigned int*)arg5 error:(id*)arg6;
- (bool)cryptDataFromBuffer:(const char *)arg1 length:(unsigned long long)arg2 toStream:(id)arg3 finished:(bool)arg4 error:(id*)arg5;
- (bool)cryptDataFromStream:(id)arg1 toBuffer:(char *)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5;
- (void)dealloc;
- (id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char *)arg3 ivLength:(unsigned long long)arg4;
- (id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char *)arg3 ivLength:(unsigned long long)arg4 usePKCS7Padding:(bool)arg5;

@end
