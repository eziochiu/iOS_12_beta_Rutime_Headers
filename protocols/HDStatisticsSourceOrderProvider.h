/* made by EzioChiu.
 */

@protocol HDStatisticsSourceOrderProvider <NSObject>

@required

- (NSString *)bundleIdentifierForSourceID:(long long)arg1;
- (void)orderSourceIDs:(struct vector<long long, std::__1::allocator<long long> > { long long *x1; long long *x2; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x_3_1_1; } x3; }*)arg1;
- (HKSource *)sourceForSourceID:(long long)arg1;

@end
