/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKAppImageManager : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate> {
    NSMapTable * _containers;
    NSCache * _iconCache;
    NSMutableDictionary * _outstandingRequests;
    NSURLSession * _session;
    NSMutableDictionary * _urlConnections;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) UIImage *defaultAppIconTableUI;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSCache *iconCache;
@property (retain) NSMutableDictionary *outstandingRequests;
@property (readonly) Class superclass;

+ (id)sharedImageManager;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_dispatchResponsesForAppIconForIdentifier:(id)arg1 appImage:(id)arg2;
- (void)_enqueueRequestForAppIconForIdentifier:(id)arg1;
- (bool)_fetchIconFromLaunchServicesWithIdentifier:(id)arg1 onCompletion:(id /* block */)arg2;
- (void)cancelLoadAppImageAtURL:(id)arg1;
- (void)clearImageCache;
- (id)defaultAppIcon;
- (id)defaultAppIconTableUI;
- (id)iconCache;
- (id)init;
- (void)loadAppIconForIdentifier:(id)arg1 onCompletion:(id /* block */)arg2;
- (void)loadAppImageAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)outstandingRequests;
- (void)setIconCache:(id)arg1;
- (void)setOutstandingRequests:(id)arg1;

@end
