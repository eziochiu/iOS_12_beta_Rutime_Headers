/* made by EzioChiu.
 */

@protocol _ATXAppLaunchHistogramProtocol

@required

- (bool)bundleHasBeenLaunched:(NSString *)arg1;
- (void)decayByFactor:(double)arg1;
- (void)decayWithHalfLife:(double)arg1;
- (void)executeBlockOnHistogramData:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXHistogramData *, void*
- (bool)removeHistoryForBundleId:(NSString *)arg1;
- (int)removeHistoryForBundleIds:(id <NSFastEnumeration>)arg1;
- (void)resetData;
- (void)resetHistogram:(ATXHistogramData *)arg1;
- (double)totalLaunches;
- (void)verifyDataIntegrity;

@end
