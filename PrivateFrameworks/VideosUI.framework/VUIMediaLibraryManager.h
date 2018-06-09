/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMediaLibraryManager : NSObject <VUIHomeShareMediaLibraryManagerDelegate> {
    VUIMediaLibrary * _activeMediaLibrary;
    NSObject<OS_dispatch_queue> * _completionDispatchQueue;
    VUIDeviceMediaLibrary * _deviceMediaLibrary;
    NSObject<VUIHomeShareMediaLibraryManager> * _homeShareManager;
    NSObject<OS_dispatch_queue> * _serialProcessingDispatchQueue;
}

@property (retain) VUIMediaLibrary *activeMediaLibrary;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUIDeviceMediaLibrary *deviceMediaLibrary;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<VUIHomeShareMediaLibraryManager> *homeShareManager;
@property (nonatomic, readonly, copy) NSArray *homeShareMediaLibraries;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (readonly) Class superclass;

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)_configureGlobalMediaPlayerOptions;
- (id)_deviceMediaLibrary;
- (void)_enqueueCompletionQueueBlock:(id /* block */)arg1;
- (void)_enqueueStrongSelfCompletionQueueBlock:(id /* block */)arg1;
- (id)_homeShareMediaLibraryManager;
- (id)_mediaLibraryForIdentifier:(id)arg1;
- (void)_postHomeShareMediaLibrariesDidChangeNotificationWithMediaLibraries:(id)arg1 andChangeSet:(id)arg2;
- (id)activeMediaLibrary;
- (id)completionDispatchQueue;
- (id)deviceMediaLibrary;
- (id)homeShareManager;
- (void)homeShareManager:(id)arg1 mediaLibrariesDidUpdate:(id)arg2 withChangeSet:(id)arg3;
- (id)homeShareMediaLibraries;
- (id)init;
- (id)mediaLibraryForIdentifier:(id)arg1;
- (id)serialProcessingDispatchQueue;
- (void)setActiveMediaLibrary:(id)arg1;
- (void)setCompletionDispatchQueue:(id)arg1;
- (void)setDeviceMediaLibrary:(id)arg1;
- (void)setHomeShareManager:(id)arg1;
- (void)setSerialProcessingDispatchQueue:(id)arg1;

@end
