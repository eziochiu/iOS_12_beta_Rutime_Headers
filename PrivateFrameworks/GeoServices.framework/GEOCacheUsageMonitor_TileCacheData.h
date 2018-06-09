/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCacheUsageMonitor_TileCacheData : NSObject {
    unsigned int  _byteCount;
    unsigned int  _count;
}

@property (nonatomic) unsigned int byteCount;
@property (nonatomic) unsigned int count;

- (unsigned int)byteCount;
- (unsigned int)count;
- (id)init;
- (void)setByteCount:(unsigned int)arg1;
- (void)setCount:(unsigned int)arg1;
- (bool)wouldWrapWithByteCount:(unsigned int)arg1;

@end
