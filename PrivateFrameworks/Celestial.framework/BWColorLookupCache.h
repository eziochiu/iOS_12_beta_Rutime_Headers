/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWColorLookupCache : NSObject {
    NSObject<OS_dispatch_queue> * _coreImageCacheIsolationQueue;
    NSMutableDictionary * _coreImageTableCache;
}

+ (void)initialize;

- (id)colorLookupTablesForFilter:(id)arg1;
- (void)dealloc;
- (id)fetchColorLookupTablesForFilter:(id)arg1;
- (id)identityColorLookupTable;
- (id)init;
- (id)interpolatedColorLookupTableFromTable:(id)arg1 toTable:(id)arg2 fractionComplete:(float)arg3;

@end
