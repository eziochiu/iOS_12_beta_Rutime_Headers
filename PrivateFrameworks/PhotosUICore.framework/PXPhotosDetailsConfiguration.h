/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDetailsConfiguration : NSObject <NSCopying> {
    Class  _barsControllerClass;
    unsigned long long  _options;
    id /* block */  _unlockDeviceHandler;
    id /* block */  _unlockDeviceStatus;
}

@property (nonatomic, retain) Class barsControllerClass;
@property (nonatomic) unsigned long long options;
@property (nonatomic, copy) id /* block */ unlockDeviceHandler;
@property (nonatomic, copy) id /* block */ unlockDeviceStatus;

- (void).cxx_destruct;
- (Class)barsControllerClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)options;
- (void)setBarsControllerClass:(Class)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setUnlockDeviceHandler:(id /* block */)arg1;
- (void)setUnlockDeviceStatus:(id /* block */)arg1;
- (id /* block */)unlockDeviceHandler;
- (id /* block */)unlockDeviceStatus;

@end
