/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOModule : NSObject {
    GEOPDModule * _module;
}

@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (id)initWithModule:(id)arg1;
- (int)type;

@end
