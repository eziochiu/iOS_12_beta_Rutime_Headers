/* made by EzioChiu.
 */

@protocol CKDMMCSItemReaderWriterDelegateProtocol

@required

- (void)didCloseItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg1 result:(bool)arg2 error:(NSError *)arg3;
- (CKFileMetadata *)didGetFileMetadataItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg1 fileMetadata:(CKFileMetadata *)arg2 error:(NSError *)arg3;
- (void)didOpenItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg1 result:(bool)arg2 error:(NSError *)arg3;
- (bool)didReadFromItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg1 offset:(unsigned long long)arg2 bytes:(char *)arg3 length:(unsigned long long)arg4 bytesRead:(unsigned long long*)arg5 error:(id*)arg6;
- (bool)willCloseItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg1 error:(id*)arg2;
- (bool)willGetFileMetadataItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg1 error:(id*)arg2;
- (bool)willOpenItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg1 error:(id*)arg2;
- (bool)willReadFromItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg1 offset:(unsigned long long)arg2 bytes:(char *)arg3 length:(unsigned long long)arg4 bytesRead:(unsigned long long*)arg5 error:(id*)arg6;

@end