/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImportDeleteJob : NSObject {
    NSMutableArray * _cameraFiles;
    bool  _canCancel;
    id /* block */  _completion;
    NSObject<OS_dispatch_queue> * _serializer;
}

@property (nonatomic, retain) NSMutableArray *cameraFiles;
@property (nonatomic) bool canCancel;
@property (nonatomic, readonly) id /* block */ completion;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serializer;

- (void).cxx_destruct;
- (id)cameraFiles;
- (bool)canCancel;
- (id /* block */)completion;
- (void)deleteAllCameraFiles;
- (void)deleteNextCameraFile;
- (id)initWithCameraFiles:(id)arg1 canCancel:(bool)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)removeCameraFile:(id)arg1;
- (id)serializer;
- (void)setCameraFiles:(id)arg1;
- (void)setCanCancel:(bool)arg1;
- (void)setSerializer:(id)arg1;

@end
