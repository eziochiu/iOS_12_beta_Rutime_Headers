/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapRequestManager : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _requests;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)requestComplete:(id)arg1;
- (void)trackRequest:(id)arg1;

@end
