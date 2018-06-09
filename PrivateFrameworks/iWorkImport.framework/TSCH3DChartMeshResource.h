/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartMeshResource : TSCH3DResource {
    TSCH3DChartMeshSharedChildResource * mShared;
}

+ (id)resourceWithSharedResource:(id)arg1;

- (struct DataBufferInfo { int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; })bufferInfo;
- (int)caching;
- (void)dealloc;
- (void)flushMemory;
- (id)get;
- (unsigned long long)hash;
- (id)initWithSharedResource:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)uniqueIdentifier;

@end
