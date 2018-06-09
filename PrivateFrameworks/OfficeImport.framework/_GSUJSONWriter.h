/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface _GSUJSONWriter : NSObject {
    char * dataBuffer;
    unsigned long long  dataBufferLen;
    unsigned long long  dataLen;
    bool  freeDataBuffer;
    int  kind;
    NSOutputStream * outputStream;
    char * tempBuffer;
    unsigned long long  tempBufferLen;
    long long  totalDataWritten;
}

- (long long)appendString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)dataWithRootObject:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)init;
- (void)resizeTemporaryBuffer:(unsigned long long)arg1;
- (long long)writeRootObject:(id)arg1 toStream:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;

@end
