/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCSItemReader : NSObject <CKDMMCSItemReaderWriterProtocol> {
    CKDMMCSItem * _MMCSItem;
    CKDMMCSItemGroupContext * _MMCSRequest;
    NSFileHandle * _fileHandle;
}

@property (nonatomic, retain) CKDMMCSItem *MMCSItem;
@property (nonatomic, retain) CKDMMCSItemGroupContext *MMCSRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSFileHandle *fileHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)MMCSItem;
- (id)MMCSRequest;
- (bool)closeWithError:(id*)arg1;
- (void)dealloc;
- (id)fileHandle;
- (id)getFileMetadataWithError:(id*)arg1;
- (id)initWithMMCSItem:(id)arg1 MMCSRequest:(id)arg2;
- (bool)openWithError:(id*)arg1;
- (bool)readBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5;
- (void)setFileHandle:(id)arg1;
- (void)setMMCSItem:(id)arg1;
- (void)setMMCSRequest:(id)arg1;
- (bool)writeBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesWritten:(unsigned long long*)arg4 error:(id*)arg5;

@end
