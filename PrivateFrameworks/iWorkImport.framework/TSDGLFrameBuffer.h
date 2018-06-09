/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDGLFrameBuffer : NSObject {
    unsigned long long  _currentTextureIndex;
    unsigned long long  _desiredTextureIndex;
    unsigned int  _framebuffer;
    bool  _isBound;
    bool  _isUsingNonDefaultAttachments;
    NSString * _name;
    NSDictionary * _namesToTextureDict;
    bool  _shouldDeleteTexturesOnTeardown;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSArray * _textureConfigs;
    unsigned long long  _textureCount;
    unsigned int * _textures;
}

@property (nonatomic, readonly) bool isBound;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool shouldDeleteTexturesOnTeardown;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (int)currentGLFramebuffer;
+ (void)setCurrentGLFramebuffer:(int)arg1;

- (unsigned int)GLTextureAtIndex:(unsigned long long)arg1;
- (unsigned int)GLTextureAtIndex:(unsigned long long)arg1 attachment:(unsigned int)arg2;
- (unsigned int)GLTextureNamed:(id)arg1;
- (void)bindFramebuffer;
- (unsigned int)currentGLTexture;
- (unsigned int)currentGLTextureAtAttachment:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 textureConfigs:(id)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 textureCount:(unsigned long long)arg2;
- (bool)isBound;
- (id)name;
- (void)setCurrentTextureIndex:(unsigned long long)arg1;
- (void)setCurrentTextureIndex:(unsigned long long)arg1 atAttachment:(unsigned int)arg2;
- (void)setCurrentTextureNamed:(id)arg1;
- (void)setCurrentTextureToNext;
- (void)setCurrentTextureToNextAtAttachment:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setShouldDeleteTexturesOnTeardown:(bool)arg1;
- (void)setupFramebufferIfNecessary;
- (bool)shouldDeleteTexturesOnTeardown;
- (struct CGSize { double x1; double x2; })size;
- (void)teardown;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;

@end
