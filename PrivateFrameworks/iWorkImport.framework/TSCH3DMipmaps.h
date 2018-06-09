/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DMipmaps : NSObject {
    unsigned long long  mComponents;
    NSData * mData;
    int  mHeight;
    int  mWidth;
}

@property (nonatomic, readonly) unsigned long long components;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) int height;
@property (nonatomic, readonly) int width;

+ (id)mipmapNameFromImageName:(id)arg1;
+ (struct CGSize { double x1; double x2; })mipmapSizeForTexturableSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)mipmapsFromData:(id)arg1;
+ (id)mipmapsWithWidth:(int)arg1 height:(int)arg2 components:(unsigned long long)arg3 mipmapData:(id)arg4;
+ (struct CGSize { double x1; double x2; })optimizedMipmapLevel0Size;

- (void).cxx_destruct;
- (unsigned long long)components;
- (id)data;
- (id)description;
- (int)height;
- (id)initFromData:(id)arg1;
- (id)initWithWidth:(int)arg1 height:(int)arg2 components:(unsigned long long)arg3 mipmapData:(id)arg4;
- (bool)valid;
- (int)width;
- (bool)writeToFile:(id)arg1;

@end
