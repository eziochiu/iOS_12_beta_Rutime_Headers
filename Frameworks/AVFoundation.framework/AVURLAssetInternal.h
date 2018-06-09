/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVURLAssetInternal : NSObject {
    NSURL * URL;
    AVAssetClientURLRequestHelper * URLRequestHelper;
    AVAssetCache * assetCache;
    AVAssetCustomURLAuthentication * customURLAuthenticationUsingKeychain;
    AVAssetCustomURLBridgeForNSURLProtocol * customURLBridgeForNSURLProtocol;
    bool  hasInstanceIdentifierMapping;
    NSDictionary * initializationOptions;
    AVAssetInspectorLoader * loader;
    long long  makeOneAssetDownloadCacheOnly;
    long long  makeOneResourceLoaderOnly;
    AVAssetResourceLoader * resourceLoader;
    AVWeakReference * sessionReference;
    NSArray * tracks;
    NSObject<OS_dispatch_queue> * tracksAccessQueue;
}

@end
