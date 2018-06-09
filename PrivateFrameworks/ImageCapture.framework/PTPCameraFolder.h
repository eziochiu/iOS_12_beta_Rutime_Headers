/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPCameraFolder : ICCameraFolder {
    NSMutableArray * _notifications;
    NSString * _path;
    void * _ptpCameraFolderProperties;
}

@property (copy) id info;
@property (readonly) unsigned int objHandle;
@property (retain) NSString *path;
@property (readonly) unsigned int storageID;
@property (readonly) unsigned long long type;

- (void)dealloc;
- (bool)deleteItemFromCamera:(id)arg1;
- (void)enumerateContent;
- (void)flushNotifications:(id)arg1;
- (id)info;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 type:(unsigned long long)arg4 storageID:(unsigned int)arg5 objectHandle:(unsigned int)arg6;
- (unsigned int)objHandle;
- (id)path;
- (void)refreshInfo;
- (void)setInfo:(id)arg1;
- (void)setPath:(id)arg1;
- (unsigned int)storageID;
- (unsigned long long)type;

@end
