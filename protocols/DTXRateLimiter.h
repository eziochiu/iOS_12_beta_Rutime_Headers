/* made by EzioChiu.
 */

@protocol DTXRateLimiter <NSObject>

@required

- (void)notifyCompressedData:(unsigned long long)arg1 withUncompressedSize:(unsigned long long)arg2 nanosToCompress:(unsigned long long)arg3 usingCompressionType:(int)arg4;
- (void)spendUnits:(void *)arg1 onAction:(void *)arg2; // needs 2 arg types, found 6: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
