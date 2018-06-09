/* made by EzioChiu
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKTextureLoader : NSObject {
    EAGLContext * _glContext;
    NSLock * _nsLock;
    bool  _supportsASTC_LDR;
    bool  _supportsETC2;
}

@property (retain) EAGLContext *glContext;
@property (retain) NSLock *nsLock;
@property bool supportsASTC_LDR;
@property bool supportsETC2;

+ (id)_textureWithTexture:(id)arg1 error:(id*)arg2;
+ (id)_textureWithTextureTXR:(id)arg1 error:(id*)arg2;
+ (id)commonCubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonCubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonTextureWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonTextureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonTextureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonTextureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 error:(id*)arg5 lock:(id)arg6 glContext:(id)arg7;
+ (id)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)lockAndSwitchContext:(id)arg1 glContext:(id)arg2;
+ (id)textureWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)textureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)textureWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)textureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)textureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (void)unlockAndRestoreContext:(id)arg1 glContext:(id)arg2;

- (void)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (id)glContext;
- (id)initWithSharegroup:(id)arg1;
- (id)nsLock;
- (void)setGlContext:(id)arg1;
- (void)setNsLock:(id)arg1;
- (void)setSupportsASTC_LDR:(bool)arg1;
- (void)setSupportsETC2:(bool)arg1;
- (bool)supportsASTC_LDR;
- (bool)supportsETC2;
- (void)textureWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)textureWithContentsOfData:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)textureWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)textureWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)textureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 queue:(id)arg5 completionHandler:(id /* block */)arg6;

@end
