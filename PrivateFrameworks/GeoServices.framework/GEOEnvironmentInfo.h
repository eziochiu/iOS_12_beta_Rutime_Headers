/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOEnvironmentInfo : NSObject {
    NSString * _displayName;
    NSError * _lastLoadingError;
    NSData * _manifestData;
    NSString * _name;
    NSDictionary * _originalDictionaryRepresentation;
    NSString * _releaseName;
    long long  _state;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSError *lastLoadingError;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *releaseName;
@property (nonatomic, readonly) GEOResourceManifestDownload *resourceManifest;
@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (id)_manifestURLString;
- (id)displayName;
- (id)initWithName:(id)arg1 displayName:(id)arg2 dictionaryRepresentation:(id)arg3;
- (bool)isActive;
- (id)lastLoadingError;
- (void)makeActive;
- (id)name;
- (id)overrideURLs;
- (id)releaseName;
- (void)reloadManifestDataWithCompletionHandler:(id /* block */)arg1;
- (id)resourceManifest;
- (id)serviceURLs;
- (long long)state;
- (void)updateWithURLs:(id)arg1;
- (id)urlDictionary;

@end
