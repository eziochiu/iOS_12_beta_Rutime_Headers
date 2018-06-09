/* made by EzioChiu.
 */

@protocol ICDeviceManagerProtocol <NSObject>

@required

- (long long)aptpRequestDataForFiles:(NSArray *)arg1 fromDevice:(ICCameraDevice *)arg2 contextInfo:(void*)arg3;
- (long long)aptpRetrieveDataForFiles:(ICCameraDevice *)arg1 contextInfo:(void*)arg2;
- (long long)closeDevice:(ICDevice *)arg1 contextInfo:(void*)arg2;
- (long long)closeSession:(ICDevice *)arg1 contextInfo:(void*)arg2;
- (long long)deleteFile:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 contextInfo:(void*)arg3;
- (long long)downloadFile:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 options:(NSDictionary *)arg3 contextInfo:(void*)arg4;
- (long long)eject:(ICCameraDevice *)arg1;
- (void)enumerateContent;
- (long long)getDataOfFile:(void *)arg1 fromDevice:(void *)arg2 withOptions:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: ICCameraFile *, ICCameraDevice *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ICCameraFile *, NSMutableDictionary *, void*
- (long long)getMetadataOfFile:(void *)arg1 fromDevice:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: ICCameraFile *, ICCameraDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ICCameraFile *, NSMutableDictionary *, void*
- (long long)getThumbnailOfFile:(void *)arg1 fromDevice:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: ICCameraFile *, ICCameraDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ICCameraFile *, NSMutableDictionary *, void*
- (long long)openDevice:(NSDictionary *)arg1 contextInfo:(void*)arg2;
- (long long)openSession:(ICDevice *)arg1 contextInfo:(void*)arg2;
- (long long)syncClock:(ICDevice *)arg1 contextInfo:(void*)arg2;

@end
