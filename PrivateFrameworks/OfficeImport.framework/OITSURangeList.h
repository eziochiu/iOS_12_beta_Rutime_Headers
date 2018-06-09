/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSURangeList : NSObject {
    struct vector<_NSRange, std::__1::allocator<_NSRange> > { 
        struct _NSRange {} *__begin_; 
        struct _NSRange {} *__end_; 
        struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { 
            struct _NSRange {} *__value_; 
        } __end_cap_; 
    }  mRangeList;
}

@property (nonatomic, readonly) unsigned long long count;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)consolidate;
- (unsigned long long)count;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithRangeList:(id)arg1;
- (id)initWithString:(id)arg1;
- (void)insertRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeAtIndex:(unsigned long long)arg1;
- (void)removeRangeAtIndex:(unsigned long long)arg1;
- (void)replaceWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 atIndex:(unsigned long long)arg2;
- (void)reverse;
- (id)stringValue;

@end