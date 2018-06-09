/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKTextureHandler : NSObject {
    int  _eraserTexture;
    int  _paperTexture;
    struct CGSize { 
        double width; 
        double height; 
    }  _paperTextureSize;
    NSMutableDictionary * _textureDictionary;
}

@property (nonatomic, readonly) unsigned int eraserTexture;
@property (nonatomic, readonly) unsigned int paperTexture;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } paperTextureSize;

+ (id)sharedTextureHandler;

- (void).cxx_destruct;
- (unsigned int)eraserTexture;
- (unsigned int)gradientTextureFrom:(double)arg1;
- (id)init;
- (unsigned int)loadTexture:(int*)arg1 image:(struct CGImage { }*)arg2 wrap:(bool)arg3;
- (unsigned int)loadTexture:(int*)arg1 name:(id)arg2 forInk:(bool)arg3;
- (unsigned int)loadTexture:(int*)arg1 name:(id)arg2 wrap:(bool)arg3 forInk:(bool)arg4;
- (unsigned int)paperTexture;
- (struct CGSize { double x1; double x2; })paperTextureSize;
- (unsigned int)textureWithImage:(struct CGImage { }*)arg1 textureName:(id)arg2 wrap:(bool)arg3;
- (unsigned int)textureWithName:(id)arg1;
- (unsigned int)textureWithName:(id)arg1 forInk:(bool)arg2;
- (unsigned int)textureWithName:(id)arg1 wrap:(bool)arg2;
- (unsigned int)textureWithName:(id)arg1 wrap:(bool)arg2 forInk:(bool)arg3;

@end
