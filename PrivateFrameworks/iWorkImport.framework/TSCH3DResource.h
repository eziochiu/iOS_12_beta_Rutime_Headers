/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DResource : NSObject <NSCopying> {
    TSCH3DDataBuffer * mCache;
    bool  mCached;
    int  mCaching;
    bool  mChanged;
    struct DataBufferInfo { 
        int componentType; 
        unsigned long long components; 
        unsigned long long count; 
        unsigned long long byteSize; 
        unsigned long long componentByteSize; 
        unsigned long long elementByteSize; 
    }  mDataBufferInfo;
    unsigned long long  mUniqueIdentifier;
    int  mUpdate;
}

@property (nonatomic, readonly) TSCH3DDataBuffer *buffer;
@property (nonatomic, readonly) struct DataBufferInfo { int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; } bufferInfo;
@property (nonatomic) int caching;
@property (nonatomic) bool changed;
@property (nonatomic, readonly) bool isTexturable;
@property (nonatomic, readonly) unsigned long long uniqueIdentifier;
@property (nonatomic) int update;

+ (unsigned long long)allocateResourceUniqueIdentifier;
+ (void)deallocateResourceUniqueIdentifier:(unsigned long long)arg1;
+ (id)resource;
+ (id)resourceWithCaching:(int)arg1;

- (id).cxx_construct;
- (id)buffer;
- (struct DataBufferInfo { int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; })bufferInfo;
- (bool)cacheNeedsUpdate;
- (int)caching;
- (bool)changed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)flushMemory;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCaching:(int)arg1;
- (bool)isTexturable;
- (void)setCache:(id)arg1;
- (void)setCaching:(int)arg1;
- (void)setChanged:(bool)arg1;
- (void)setUpdate:(int)arg1;
- (unsigned long long)uniqueIdentifier;
- (int)update;
- (void)updateBufferInfoFromBuffer:(id)arg1;

@end
