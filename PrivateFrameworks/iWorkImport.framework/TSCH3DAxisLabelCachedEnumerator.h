/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DAxisLabelCachedEnumerator : TSCH3DValueEnumerator {
    struct vector<TSCH3D::AxisLabelCacheItem, std::__1::allocator<TSCH3D::AxisLabelCacheItem> > { 
        struct AxisLabelCacheItem {} *__begin_; 
        struct AxisLabelCacheItem {} *__end_; 
        struct __compressed_pair<TSCH3D::AxisLabelCacheItem *, std::__1::allocator<TSCH3D::AxisLabelCacheItem> > { 
            struct AxisLabelCacheItem {} *__value_; 
        } __end_cap_; 
    }  mCache;
    TSCH3DValueEnumerator * mCachee;
    unsigned long long  mCount;
    TSCH3DAxisLabelKind * mKind;
    int  mLabelPosition;
    bool  mShouldRender;
    bool  mValid;
}

@property (nonatomic, readonly) TSCH3DAxisLabelKind *kind;

+ (id)enumeratorWithAxisLabelEnumerator:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cache;
- (unsigned long long)count;
- (void)dealloc;
- (id)enumerator;
- (id)initWithAxisLabelEnumerator:(id)arg1;
- (id)kind;
- (int)labelPosition;
- (bool)shouldRender;
- (id)string;
- (void)update;

@end