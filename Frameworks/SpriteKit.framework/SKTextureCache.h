/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKTextureCache : NSObject {
    struct shared_ptr<jet_texture> { 
        struct jet_texture {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _backingTexture;
    unsigned int  _textureFormat;
    long long  filteringMode;
    bool  hasAlpha;
    bool  isPOT;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  lock;
    char * pixelData;
    struct CGSize { 
        double width; 
        double height; 
    }  pixelSize;
    struct CGSize { 
        double width; 
        double height; 
    }  size;
    int  state;
    int  wrapMode;
}

@property (nonatomic) struct shared_ptr<jet_texture> { struct jet_texture {} *x1; struct __shared_weak_count {} *x2; } backingTexture;
@property (nonatomic) long long filteringMode;
@property (nonatomic) bool hasAlpha;
@property (nonatomic) bool isPOT;
@property (getter=getLock, nonatomic, readonly) struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; }*lock;
@property (nonatomic) char *pixelData;
@property (nonatomic) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) int state;
@property (nonatomic) unsigned int textureFormat;
@property (nonatomic) int wrapMode;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_reset;
- (struct shared_ptr<jet_texture> { struct jet_texture {} *x1; struct __shared_weak_count {} *x2; })backingTexture;
- (void)dealloc;
- (long long)filteringMode;
- (struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; }*)getLock;
- (bool)hasAlpha;
- (id)init;
- (bool)isPOT;
- (char *)pixelData;
- (struct CGSize { double x1; double x2; })pixelSize;
- (void)setBackingTexture:(struct shared_ptr<jet_texture> { struct jet_texture {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setFilteringMode:(long long)arg1;
- (void)setHasAlpha:(bool)arg1;
- (void)setIsPOT:(bool)arg1;
- (void)setPixelData:(char *)arg1;
- (void)setPixelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setState:(int)arg1;
- (void)setTextureFormat:(unsigned int)arg1;
- (void)setWrapMode:(int)arg1;
- (struct CGSize { double x1; double x2; })size;
- (int)state;
- (unsigned int)textureFormat;
- (int)wrapMode;

@end
