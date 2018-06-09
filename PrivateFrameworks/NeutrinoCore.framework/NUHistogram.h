/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUHistogram : NSObject <NSCopying, NSMutableCopying> {
    struct unique_ptr<NU::Histogram<long, double>, std::__1::default_delete<NU::Histogram<long, double> > > { 
        struct __compressed_pair<NU::Histogram<long, double> *, std::__1::default_delete<NU::Histogram<long, double> > > { 
            struct Histogram<long, double> {} *__value_; 
        } __ptr_; 
    }  _histogram;
}

@property (nonatomic, readonly) long long binCount;
@property (nonatomic, readonly) double maximum;
@property (nonatomic, readonly) double minimum;
@property (nonatomic, readonly) double mode;
@property (nonatomic, readonly) struct { double x1; double x2; } range;
@property (nonatomic, readonly) long long sampleCount;
@property (nonatomic, readonly) const long long*values;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)binCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)init;
- (id)initWithBinCount:(long long)arg1 range:(struct { double x1; double x2; })arg2;
- (id)initWithHistogram:(id)arg1;
- (double)maximum;
- (double)minimum;
- (double)mode;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)percentile:(double)arg1;
- (struct { double x1; double x2; })range;
- (long long)sampleCount;
- (const long long*)values;

@end
