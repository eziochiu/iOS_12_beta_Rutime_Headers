/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCUserDefaultsManager : NSObject <NSURLSessionDownloadDelegate> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _configurationPlistDidUpdateBlock;
    <NSObject> * _defaultsDidChangeNotificationObserver;
    NSOperationQueue * _downloadQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _serverConfigurationDict;
    NSURL * _serverConfigurationURL;
    NSURLSession * _urlSession;
    NSMutableDictionary * _userDefaultsCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_loadCachedServerConfigurationDictionaryFromDB:(id)arg1;
- (void)_loadServerConfigurationDictionary;
- (void)_parsePlistWithURL:(id)arg1;
- (void)_prepopulateGlobalUserDefaults;
- (void)_reset;
- (void)_saveServerConfigurationDictionaryToDB:(id)arg1;
- (void)_setServerConfigurationURL:(id)arg1 whenLoaded:(id /* block */)arg2;
- (void)dealloc;
- (id)defaultsForIdentifier:(id)arg1;
- (id)init;
- (void)reset;
- (void)setServerConfigurationURL:(id)arg1 whenLoaded:(id /* block */)arg2;

@end
