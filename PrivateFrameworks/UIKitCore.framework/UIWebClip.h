/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWebClip : NSObject {
    NSMutableData * _customIconData;
    NSMutableData * _customStartupImageData;
    NSMutableData * _customStartupLandscapeImageData;
    NSURLConnection * _iconConnection;
    NSURLConnection * _startupImageConnection;
    NSURLConnection * _startupLandscapeImageConnection;
    unsigned long long  _webClipStatusBarStyle;
    bool  classicMode;
    unsigned long long  currentIconIndex;
    <WebClipDelegate> * delegate;
    bool  fullScreen;
    UIImage * iconImage;
    bool  iconIsPrecomposed;
    bool  iconIsPrerendered;
    bool  iconIsScreenShotBased;
    NSArray * icons;
    NSString * identifier;
    UIImage * initialLaunchImage;
    NSURL * pageURL;
    bool  removalDisallowed;
    UIImage * startupImage;
    NSURL * startupImageURL;
    UIImage * startupLandscapeImage;
    NSURL * startupLandscapeImageURL;
    long long  statusBarStyle;
    unsigned long long  supportedOrientations;
    NSString * title;
}

@property (setter=_sf_setApplicationManifest:, nonatomic, retain) _WKApplicationManifest *_sf_applicationManifest;
@property (nonatomic, readonly) NSURL *_sf_applicationManifestPath;
@property bool classicMode;
@property (nonatomic) <WebClipDelegate> *delegate;
@property bool fullScreen;
@property (nonatomic, readonly, retain) UIImage *iconImage;
@property (readonly) NSString *iconImagePath;
@property (readonly) bool iconIsPrecomposed;
@property (readonly) bool iconIsPrerendered;
@property (readonly) bool iconIsScreenShotBased;
@property (retain) NSArray *icons;
@property (copy) NSString *identifier;
@property (nonatomic, retain) UIImage *initialLaunchImage;
@property (nonatomic, retain) NSURL *pageURL;
@property bool removalDisallowed;
@property (nonatomic, retain) UIImage *startupImage;
@property (retain) NSURL *startupImageURL;
@property (nonatomic, retain) UIImage *startupLandscapeImage;
@property (retain) NSURL *startupLandscapeImageURL;
@property long long statusBarStyle;
@property unsigned long long supportedOrientations;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long webClipStatusBarStyle;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_contentForMetaName:(id)arg1 inWebDocumentView:(id)arg2;
+ (bool)_webClipFullScreenValueForMetaTagContent:(id)arg1;
+ (id)_webClipLinkTagsFromWebDocumentView:(id)arg1;
+ (unsigned long long)_webClipOrientationsForMetaTagContent:(id)arg1;
+ (long long)_webClipStatusBarStyleForMetaTagContent:(id)arg1;
+ (bool)bundleIdentifierContainsWebClipIdentifier:(id)arg1;
+ (id)pathForWebClipCacheWithIdentifier:(id)arg1;
+ (id)pathForWebClipStorageWithIdentifier:(id)arg1;
+ (id)pathForWebClipWithIdentifier:(id)arg1;
+ (id)urlForWebClipWithIdentifier:(id)arg1;
+ (bool)webClipClassicModeValueForWebDocumentView:(id)arg1;
+ (bool)webClipFullScreenValueForWebDocumentView:(id)arg1;
+ (id)webClipIconsForWebClipLinkTags:(id)arg1 pageURL:(id)arg2;
+ (id)webClipIconsForWebDocumentView:(id)arg1;
+ (id)webClipIdentifierFromBundleIdentifier:(id)arg1;
+ (unsigned long long)webClipOrientationsForWebDocumentView:(id)arg1;
+ (long long)webClipStatusBarStyleForWebDocumentView:(id)arg1;
+ (id)webClipTitleForWebDocumentView:(id)arg1;
+ (id)webClipWithIdentifier:(id)arg1;
+ (id)webClipWithURL:(id)arg1;
+ (id)webClips;
+ (id)webClipsDirectoryPath;

- (void).cxx_destruct;
- (id)_bundleImageWithName:(id)arg1;
- (id)_bundleResourceWithName:(id)arg1;
- (id)_info;
- (id)_initWithIdentifier:(id)arg1;
- (void)_readPropertiesFromBundle:(id)arg1;
- (void)_reloadProperties;
- (void)_setIconImage:(id)arg1 isPrecomposed:(bool)arg2 isScreenShotBased:(bool)arg3;
- (bool)_writeImage:(id)arg1 toDiskWithFileName:(id)arg2;
- (id)bundleIdentifier;
- (void)cancelMediaUpdate;
- (bool)classicMode;
- (void)configureWithMetaTags:(id)arg1 linkTags:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (bool)createOnDisk;
- (void)dealloc;
- (id)delegate;
- (bool)fullScreen;
- (id)generateIconImageForFormat:(int)arg1 scale:(double)arg2;
- (id)getStartupImage:(long long)arg1;
- (id)iconImage;
- (id)iconImagePath;
- (bool)iconIsPrecomposed;
- (bool)iconIsPrerendered;
- (bool)iconIsScreenShotBased;
- (id)icons;
- (id)identifier;
- (id)initialLaunchImage;
- (id)pageURL;
- (bool)removalDisallowed;
- (bool)removeFromDisk;
- (void)requestCustomIconUpdate;
- (void)requestCustomLandscapeStartupImageUpdate;
- (void)requestCustomPortraitStartupImageUpdate;
- (void)requestIconUpdateInSpringBoard;
- (void)setClassicMode:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFullScreen:(bool)arg1;
- (void)setIconImage:(id)arg1 isPrecomposed:(bool)arg2;
- (void)setIconImageFromScreenshot:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInitialLaunchImage:(id)arg1;
- (void)setPageURL:(id)arg1;
- (void)setRemovalDisallowed:(bool)arg1;
- (void)setStartupImage:(id)arg1;
- (void)setStartupImageURL:(id)arg1;
- (void)setStartupLandscapeImage:(id)arg1;
- (void)setStartupLandscapeImageURL:(id)arg1;
- (void)setStatusBarStyle:(long long)arg1;
- (void)setSupportedOrientations:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setWebClipStatusBarStyle:(unsigned long long)arg1;
- (id)startupImage;
- (id)startupImageURL;
- (id)startupLandscapeImage;
- (id)startupLandscapeImageURL;
- (long long)statusBarStyle;
- (void)stopLoadingCustomIcon;
- (void)stopLoadingStartupImage;
- (void)stopLoadingStartupLandscapeImage;
- (unsigned long long)supportedOrientations;
- (id)title;
- (bool)tryLoadingNextCustomIcon;
- (void)updateCustomMediaLocationsFromWebDocumentView:(id)arg1;
- (void)updateCustomMediaLocationsWithWebClipLinkTags:(id)arg1 baseURL:(id)arg2;
- (bool)updateOnDisk;
- (unsigned long long)webClipStatusBarStyle;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (id)_sf_applicationManifest;
- (id)_sf_applicationManifestPath;
- (void)_sf_setApplicationManifest:(id)arg1;

@end
