/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPhoneNumberResolver : NSObject {
    <GEOPhoneNumberResolving> * _resolver;
    NSObject<OS_dispatch_queue> * _workQueue;
}

+ (id)sharedResolver;
+ (void)useLocalResolver;
+ (void)useProxy:(Class)arg1;
+ (void)useRemoteResolver;

- (void).cxx_destruct;
- (void)_alePackResolution:(id)arg1 handler:(id /* block */)arg2 queue:(id)arg3;
- (id)init;
- (void)resolvePhoneNumbers:(id)arg1 handler:(id /* block */)arg2 queue:(id)arg3;

@end
