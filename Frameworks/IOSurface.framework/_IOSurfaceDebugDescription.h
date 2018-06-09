/* made by EzioChiu
   Image: /System/Library/Frameworks/IOSurface.framework/IOSurface
 */

@interface _IOSurfaceDebugDescription : IOSurfaceDebugDescription {
    struct { 
        unsigned long long clientAddress; 
        unsigned int surfaceID; 
        unsigned int pixelFormat; 
        unsigned int retainCount; 
        unsigned int yCbCrMatrix; 
        unsigned int cacheMode; 
        unsigned int mapCacheAttribute; 
        unsigned int purgeableState; 
        unsigned int purgeableStateAPI; 
        unsigned int allocOffset; 
        unsigned int allocSize; 
        unsigned char isGlobal; 
        unsigned char isAllocated; 
        unsigned char isWired; 
        unsigned char pad; 
    }  _basicInfo;
    struct { 
        unsigned int offset; 
        unsigned int width; 
        unsigned int height; 
        unsigned int bytesPerRow; 
        unsigned int bytesPerElement; 
        unsigned int elementWidth; 
        unsigned int elementHeight; 
    }  _layoutInfo;
    NSString * _name;
}

@property (readonly) unsigned long long allocationSize;
@property (readonly) unsigned int height;
@property (readonly) NSString *name;
@property (readonly) unsigned int pixelFormat;
@property (readonly) unsigned int surfaceID;
@property (readonly) unsigned long long virtualAddress;
@property (readonly) unsigned int width;

- (unsigned long long)allocationSize;
- (void)dealloc;
- (id)description;
- (unsigned int)height;
- (id)initWithBasicInfo:(const struct { unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; }*)arg1 layoutInfo:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)arg2 name:(id)arg3;
- (id)name;
- (unsigned int)pixelFormat;
- (unsigned int)surfaceID;
- (unsigned long long)virtualAddress;
- (unsigned int)width;

@end
