/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTextureResource : TSCH3DResource <TSCH3DOptimizedTextureResource, TSCHUnretainedParent> {
    NSNumber * mCachedHash;
    TSUOnce * mCachedHashOnce;
    TSCH3DTexture * mParent;
}

- (bool)canLoadCachedFullMipmapBufferForDataCache:(id)arg1;
- (void)clearParent;
- (id)databufferForDataCache:(id)arg1;
- (void)dealloc;
- (id)get;
- (unsigned long long)hash;
- (id)initWithParent:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)optimizedMipmapBuffer;
- (id)p_parent;
- (id)representativeColorBuffer;

@end
