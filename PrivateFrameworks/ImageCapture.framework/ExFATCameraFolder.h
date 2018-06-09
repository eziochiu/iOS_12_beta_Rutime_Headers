/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ExFATCameraFolder : ICCameraFolder {
    void * _exFATCameraFolderProperties;
    NSMutableArray * _notifications;
}

@property (readonly) struct timespec { long long x1; long long x2; } fsCreationTime;
@property (readonly) struct timespec { long long x1; long long x2; } fsModificationTime;
@property (readonly) long long fsSize;
@property (retain) NSMutableArray *notifications;
@property (readonly) id object;

- (void)dealloc;
- (bool)deleteItemFromCamera:(id)arg1;
- (void)enumerateContent;
- (void)flushNotifications:(id)arg1;
- (struct timespec { long long x1; long long x2; })fsCreationTime;
- (struct timespec { long long x1; long long x2; })fsModificationTime;
- (long long)fsSize;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 object:(id)arg4 fsCreationTime:(struct timespec { long long x1; long long x2; })arg5 fsModificationTime:(struct timespec { long long x1; long long x2; })arg6 fsSize:(long long)arg7;
- (id)notifications;
- (id)object;
- (void)setNotifications:(id)arg1;

@end
