/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

@interface ASAsset : NSObject {
    NSString * _assetType;
    NSDictionary * _attributes;
    struct __MobileAsset { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFString {} *x2; struct __CFDictionary {} *x3; struct __MobileAssetQuery {} *x4; struct __MobileAssetQuery {} *x5; unsigned char x6; } * _cfAsset;
    NSString * _clientName;
    NSDictionary * _downloadOptions;
    NSString * _identifier;
    id /* block */  _progressHandler;
    bool  _userInitiatedDownload;
}

@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, retain) NSString *clientName;
@property (nonatomic, retain) NSDictionary *downloadOptions;
@property (nonatomic, readonly) NSDictionary *fullAttributes;
@property (nonatomic) long long garbageCollectionBehavior;
@property (nonatomic, readonly) NSDate *installDate;
@property (nonatomic, readonly) NSURL *localURL;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, readonly) long long state;
@property (nonatomic) bool userInitiatedDownload;

// Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset

+ (bool)nonUserInitiatedDownloadsAllowed;

- (void)_downloadWithOptions:(id)arg1 shouldFireCallback:(bool)arg2;
- (id)_getLocalAttribute:(id)arg1;
- (void)adjustDownloadOptions:(id)arg1 completion:(id /* block */)arg2;
- (id)assetServerUrl;
- (long long)assetStateForStateString:(id)arg1;
- (id)assetType;
- (id)attributes;
- (void)beginDownloadWithOptions:(id)arg1;
- (void)cancelDownload:(id /* block */)arg1;
- (bool)cancelDownloadAndReturnError:(id*)arg1;
- (id)clientName;
- (void)dealloc;
- (id)description;
- (id)downloadOptions;
- (id)fullAttributes;
- (long long)garbageCollectionBehavior;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAssetType:(id)arg1 attributes:(id)arg2;
- (id)installDate;
- (bool)isEqual:(id)arg1;
- (bool)isPresentOnDisk;
- (id)localURL;
- (struct __MobileAsset { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFString {} *x2; struct __CFDictionary {} *x3; struct __MobileAssetQuery {} *x4; struct __MobileAssetQuery {} *x5; unsigned char x6; }*)mobileAsset;
- (void)pauseDownload:(id /* block */)arg1;
- (bool)pauseDownloadAndReturnError:(id*)arg1;
- (id /* block */)progressHandler;
- (void)purge:(id /* block */)arg1;
- (bool)purgeAndReturnError:(id*)arg1;
- (bool)requiredDiskSpaceIsAvailable:(long long*)arg1 error:(id*)arg2;
- (bool)requiredDiskSpaceIsAvailableForDownloadOptions:(id)arg1 requiredBytes:(long long*)arg2 error:(id*)arg3;
- (void)resumeDownload:(id /* block */)arg1;
- (bool)resumeDownloadAndReturnError:(id*)arg1;
- (void)setClientName:(id)arg1;
- (void)setDownloadOptions:(id)arg1;
- (void)setGarbageCollectionBehavior:(long long)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setUserInitiatedDownload:(bool)arg1;
- (long long)state;
- (id)systemAppServerUrl;
- (bool)userInitiatedDownload;

// Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech

- (id)_compatibilityVersion;
- (id)_footprint;
- (id)_version;
- (id)getCSAssetOfType:(unsigned long long)arg1;
- (bool)isDownloading;
- (bool)isInstalled;
- (bool)isLatestCompareTo:(id)arg1;
- (bool)isPremium;
- (id)path;

// Image: /System/Library/PrivateFrameworks/DictionaryUI.framework/DictionaryUI

- (long long)_contentVersion;
- (long long)_formatVersion;

// Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore

- (id)laterAsset:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (long long)_contentVersion;
- (long long)_formatVersion;

// Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger

- (id)compatibilityVersion;
- (id)description;
- (id)footprint;
- (bool)isDownloading;
- (bool)isInstalled;
- (bool)isLatestCompareTo:(id)arg1;
- (bool)isPremium;
- (id)languages;
- (id)path;
- (id)version;

@end
