/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUMutableDataSet : NUDataSet

@property (nonatomic, readonly) long long capacity;

- (struct DataSet { struct vector<double, std::__1::allocator<double> > { double *x_1_1_1; double *x_1_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_1_1_3; } x1; }*)_data;
- (void)addValue:(double)arg1;
- (void)appendDataSet:(id)arg1;
- (long long)capacity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCapacity:(long long)arg1;

@end
