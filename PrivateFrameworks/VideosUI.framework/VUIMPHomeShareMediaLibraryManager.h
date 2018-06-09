/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMPHomeShareMediaLibraryManager : NSObject <VUIHomeShareMediaLibraryManager> {
    <VUIHomeShareMediaLibraryManagerDelegate> * _delegate;
    VUIMediaLibraryManager * _manager;
    NSMutableArray * _mutableHomeShareMediaLibraries;
    NSObject<OS_dispatch_queue> * _serialProcessingDispatchQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VUIHomeShareMediaLibraryManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *homeShareMediaLibraries;
@property (nonatomic) VUIMediaLibraryManager *manager;
@property (nonatomic, retain) NSMutableArray *mutableHomeShareMediaLibraries;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (readonly) Class superclass;

+ (id)_sharedMPMediaLibraries;

- (void).cxx_destruct;
- (void)_handleAvailableMediaLibrariesDidChange:(id)arg1;
- (id)_homeShareMediaLibraries;
- (void)_notifyDelegateHomeShareMediaLibrariesDidUpdate:(id)arg1 withChangeSet:(id)arg2;
- (void)_updateMediaLibrariesWithSharedMPMediaLibraries:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)homeShareMediaLibraries;
- (id)initWithManager:(id)arg1;
- (id)manager;
- (id)mutableHomeShareMediaLibraries;
- (id)serialProcessingDispatchQueue;
- (void)setDelegate:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setMutableHomeShareMediaLibraries:(id)arg1;
- (void)setSerialProcessingDispatchQueue:(id)arg1;

@end
