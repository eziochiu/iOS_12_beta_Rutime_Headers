/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstImageSet : NSObject {
    CIBurstImageSetInternal * _priv;
}

+ (id)burstImageSet;
+ (id)burstImageSetWithOptions:(id)arg1;
+ (id)defaultVersionString;

- (void)addImageFromIOSurface:(struct __IOSurface { }*)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)allImageIdentifiers;
- (id)bestImageIdentifiers;
- (id)burstId;
- (id)coverImageIdentifier;
- (void)dealloc;
- (unsigned long long)imageClusterCount;
- (id)imageClusterForIdentifier:(id)arg1;
- (id)imageClusterForIndex:(unsigned long long)arg1;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (bool)isAction;
- (bool)isPortrait;
- (double)secondsSinceStart;
- (void)setLoggingListener:(void*)arg1 withUserInfo:(void*)arg2;
- (id)statsForImageWithIdentifier:(id)arg1;

@end
