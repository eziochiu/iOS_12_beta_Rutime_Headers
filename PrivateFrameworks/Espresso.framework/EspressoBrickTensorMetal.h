/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

@interface EspressoBrickTensorMetal : EspressoBrickTensor {
    <MTLTexture> * _texture;
}

@property (retain) <MTLTexture> *texture;

- (void).cxx_destruct;
- (void)setTexture:(id)arg1;
- (id)texture;

@end
