/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface DeferredFrameworkLoader : NSObject {
    void * _frameworkHandle;
    bool  _frameworkLoaded;
    NSString * _path;
}

@property (nonatomic) void*frameworkHandle;
@property (nonatomic, retain) NSString *path;

+ (id)PhotosUIFrameworkPath;

- (void).cxx_destruct;
- (Class)classFromString:(id)arg1;
- (void)dealloc;
- (void*)frameworkHandle;
- (id)initWithPath:(id)arg1;
- (id)path;
- (void)setFrameworkHandle:(void*)arg1;
- (void)setPath:(id)arg1;

@end
