/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPDirtyRangeArray : NSObject <NSCopying, NSMutableCopying> {
    struct vector<TSWPDirtyRange, std::__1::allocator<TSWPDirtyRange> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<TSWPDirtyRange *, std::__1::allocator<TSWPDirtyRange> > { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _rangeVector;
}

@property (nonatomic, readonly) unsigned long long count;
@property (getter=isEmpty, nonatomic, readonly) bool empty;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (long long)delta;
- (struct { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; long long x2; })dirtyRangeAtIndex:(unsigned long long)arg1;
- (id)dirtyRangesIntersecting:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)indexForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)init;
- (id)initWithDirtyRange:(struct { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; long long x2; })arg1;
- (id)initWithRangeVector:(const struct vector<TSWPDirtyRange, std::__1::allocator<TSWPDirtyRange> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<TSWPDirtyRange *, std::__1::allocator<TSWPDirtyRange> > { struct { /* ? */ } *x_3_1_1; } x3; }*)arg1;
- (bool)isEmpty;
- (bool)isEqualToDirtyRangeArray:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })superRange;

@end
