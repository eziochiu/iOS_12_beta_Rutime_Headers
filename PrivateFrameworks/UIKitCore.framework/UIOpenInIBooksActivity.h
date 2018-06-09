/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIOpenInIBooksActivity : UIActivity <LSOpenResourceOperationDelegate, UIManagedConfigurationRestrictableActivity> {
    NSString * _applicationIdentifier;
    LSApplicationProxy * _applicationProxy;
    NSOperation * _operation;
    bool  _shouldUnlinkFile;
    NSString * _sourceApplicationBundleID;
    bool  _sourceIsManaged;
    NSURL * _url;
}

@property (nonatomic, retain) NSString *applicationIdentifier;
@property (nonatomic, retain) LSApplicationProxy *applicationProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSOperation *operation;
@property (nonatomic) bool shouldUnlinkFile;
@property (nonatomic, copy) NSString *sourceApplicationBundleID;
@property (nonatomic) bool sourceIsManaged;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *url;

+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;
+ (id)bestJobNameForActivityItems:(id)arg1;
+ (id)defaultJobName;
+ (id)jobNameFormatForFile;

- (void).cxx_destruct;
- (bool)_appIsDocumentTypeOwner;
- (id)_bundleIdentifierForActivityImageCreation;
- (void)_cleanup;
- (long long)_defaultSortGroup;
- (void)_finishedCopyingResource;
- (id)_loadedApplicationProxy;
- (void)_openDocumentWithApplication;
- (id)activityTitle;
- (id)activityType;
- (id)applicationIdentifier;
- (id)applicationProxy;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)init;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;
- (id)operation;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (id)printInteractionController;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setApplicationProxy:(id)arg1;
- (void)setOperation:(id)arg1;
- (void)setShouldUnlinkFile:(bool)arg1;
- (void)setSourceApplicationBundleID:(id)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (void)setUrl:(id)arg1;
- (bool)shouldUnlinkFile;
- (id)sourceApplicationBundleID;
- (bool)sourceIsManaged;
- (id)url;

@end
