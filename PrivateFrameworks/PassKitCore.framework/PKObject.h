/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKObject : NSObject <NSCopying, NSSecureCoding> {
    NSString * _authenticationToken;
    PKContent * _content;
    PKDataAccessor * _dataAccessor;
    PKDisplayProfile * _displayProfile;
    PKImageSet * _imageSets;
    bool  _initializedViaInitWithCoder;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSData * _manifestHash;
    double  _preferredImageScale;
    NSString * _preferredImageSuffix;
    unsigned long long  _settings;
    long long  _shareCount;
    NSString * _uniqueID;
    NSURL * _webServiceURL;
}

@property (nonatomic, copy) NSString *authenticationToken;
@property (nonatomic, retain) PKDataAccessor *dataAccessor;
@property (nonatomic, retain) PKDisplayProfile *displayProfile;
@property (nonatomic, readonly) bool initializedViaInitWithCoder;
@property (nonatomic, copy) NSData *manifestHash;
@property (nonatomic) double preferredImageScale;
@property (nonatomic, retain) NSString *preferredImageSuffix;
@property (nonatomic, readonly) bool remoteAssetsDownloaded;
@property (nonatomic) unsigned long long settings;
@property (nonatomic) long long shareCount;
@property (nonatomic, copy) NSString *uniqueID;
@property (nonatomic, copy) NSURL *webServiceURL;

+ (unsigned long long)defaultSettings;
+ (bool)isValidObjectWithFileURL:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)archiveData;
- (id)authenticationToken;
- (id)content;
- (id)contentLoadedIfNeeded;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataAccessor;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2;
- (void)dealloc;
- (id)displayProfile;
- (void)downloadRemoteAssetsWithCompletion:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)flushFormattedFieldValues;
- (void)flushLoadedContent;
- (void)flushLoadedImageSets;
- (id)imageSetLoadedIfNeeded:(long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)initWithFileDataAccessor:(id)arg1;
- (id)initWithFileURL:(id)arg1 error:(id*)arg2;
- (id)initWithFileURL:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3;
- (bool)initializedViaInitWithCoder;
- (bool)isContentLoaded;
- (bool)isImageSetLoaded:(long long)arg1;
- (bool)isImageSetType:(long long)arg1 equalToImageSetTypeFromObject:(id)arg2;
- (void)loadContentAsyncWithCompletion:(id /* block */)arg1;
- (void)loadContentSync;
- (void)loadImageSetAsync:(long long)arg1 preheat:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)loadImageSetSync:(long long)arg1 preheat:(bool)arg2;
- (id)localizedString:(id)arg1;
- (id)manifestHash;
- (id)modificationDate;
- (void)noteShared;
- (double)preferredImageScale;
- (id)preferredImageSuffix;
- (void)reloadDisplayProfileOfType:(long long)arg1;
- (bool)remoteAssetsDownloaded;
- (void)requestUpdateWithCompletion:(id /* block */)arg1;
- (void)revocationStatusWithCompletion:(id /* block */)arg1;
- (id)serializedFileWrapper;
- (void)setAuthenticationToken:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setDataAccessor:(id)arg1;
- (void)setDisplayProfile:(id)arg1;
- (void)setImageSet:(id)arg1 forImageSetType:(long long)arg2;
- (void)setManifestHash:(id)arg1;
- (void)setMissingImageSetsFromObject:(id)arg1;
- (void)setPreferredImageScale:(double)arg1;
- (void)setPreferredImageSuffix:(id)arg1;
- (void)setSettings:(unsigned long long)arg1;
- (void)setSettingsWithoutUpdatingDataAccessor:(unsigned long long)arg1;
- (void)setShareCount:(long long)arg1;
- (void)setUniqueID:(id)arg1;
- (void)setWebServiceURL:(id)arg1;
- (unsigned long long)settings;
- (long long)shareCount;
- (id)uniqueID;
- (void)updateImageSetForURL:(id)arg1 withCacheURL:(id)arg2;
- (id)webServiceURL;

@end
