/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIAppInstallController : NSObject {
    PSUIAppDescription * _appDescription;
    NSString * _appID;
    NSString * _bundleID;
    int  _installState;
    NSURL * _installURL;
    NSURL * _moreAppsURL;
    NSURLSession * _session;
}

@property (retain) PSUIAppDescription *appDescription;
@property (nonatomic, readonly) NSString *appID;
@property (nonatomic, readonly) NSString *bundleID;
@property (readonly) int installState;
@property (retain) NSURL *installURL;
@property (nonatomic, retain) NSURL *moreAppsURL;

+ (id)iconLocalCacheURLFromKey:(id)arg1;
+ (id)loadIconFromURL:(id)arg1 session:(id)arg2;
+ (id)lookupAppDescriptionForInstalledApp:(id)arg1;
+ (void)lookupAppFromStore:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)saveAppDescriptionToCache:(id)arg1;
+ (id)tryLoadAppDescriptionFromCache;

- (void).cxx_destruct;
- (id)appDescription;
- (id)appID;
- (id)bundleID;
- (id)initWithAppID:(id)arg1 carrierMoreAppsURL:(id)arg2;
- (id)initWithBundleID:(id)arg1;
- (void)installButtonTapped:(id)arg1;
- (int)installState;
- (id)installURL;
- (void)load;
- (bool)moreAppsAvailable;
- (void)moreAppsButtonTapped:(id)arg1;
- (id)moreAppsURL;
- (void)setAppDescription:(id)arg1;
- (void)setInstallURL:(id)arg1;
- (void)setMoreAppsURL:(id)arg1;
- (id)specifier;

@end
