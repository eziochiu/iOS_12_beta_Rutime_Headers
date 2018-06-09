/* made by EzioChiu.
 */

@protocol SVVideoImpressionTracking <NSObject>

@required

- (bool)hasPassedImpressionThreshold;
- (double)impressionThreshold;
- (unsigned long long)quartile;
- (id /* block */)quartileImpressionBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoImpressionTracking> *, void*, id, SEL
- (id /* block */)thresholdImpressionBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoImpressionTracking> *, void*, id, SEL
- (void)uponQuartileImpression:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoImpressionTracking> *, void*
- (void)uponThresholdImpression:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoImpressionTracking> *, void*

@end
