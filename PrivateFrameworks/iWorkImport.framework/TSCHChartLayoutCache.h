/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartLayoutCache : NSObject {
    NSMutableArray * mCacheItems;
    bool  mIgnoreInvalidation;
}

@property (nonatomic) bool ignoreInvalidation;

+ (id)cacheWithCacheItem:(id)arg1;

- (void).cxx_destruct;
- (void)accessWithCacheItemBlock:(id /* block */)arg1 calculateBlock:(id /* block */)arg2;
- (bool)ignoreInvalidation;
- (id)init;
- (id)initWithCacheItem:(id)arg1;
- (void)invalidate;
- (void)printDebug;
- (void)setIgnoreInvalidation:(bool)arg1;

@end
