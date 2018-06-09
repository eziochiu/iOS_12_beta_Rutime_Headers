/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface SFUZipArchiveMemoryDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {
    NSData * mData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)bufferedInputStream;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1;
- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)data;
- (long long)dataLength;
- (void)dealloc;
- (bool)hasSameLocationAs:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)inputStream;
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (bool)isReadable;

@end
