/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOModuleLayoutEntry : NSObject {
    GEOPDModuleLayoutEntry * _moduleLayoutEntry;
}

@property (nonatomic, readonly) NSArray *modules;

- (void).cxx_destruct;
- (id)initWithModuleLayoutEntry:(id)arg1;
- (id)modules;

@end
