/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogAdaptorFactory : NSObject {
    NSMutableDictionary * _logAdaptors;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_createLogAdaptorWithPolicy:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)logAdaptorWithPolicy:(id)arg1;

@end
