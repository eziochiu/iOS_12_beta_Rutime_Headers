/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICURLBag : NSObject {
    NSArray * _GUIDURLRegexPatterns;
    NSSet * _GUIDURLSchemes;
    NSDictionary * _bagValues;
    NSMutableDictionary * _convertedActionsCache;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSArray *GUIDURLRegexPatterns;
@property (nonatomic, retain) NSSet *GUIDURLSchemes;
@property (nonatomic, readonly, copy) NSDictionary *allValues;
@property (nonatomic, retain) NSDictionary *bagValues;
@property (nonatomic, readonly) bool canPostKeybagSyncData;
@property (nonatomic, retain) NSMutableDictionary *convertedActionsCache;
@property (nonatomic, readonly) ICURLBagLibraryDAAPConfiguration *libraryDAAPConfiguration;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) ICURLBagRadioConfiguration *radioConfiguration;
@property (nonatomic, readonly, copy) NSString *storefrontHeaderSuffix;

- (void).cxx_destruct;
- (id)GUIDURLRegexPatterns;
- (id)GUIDURLSchemes;
- (bool)_shouldMescalSignBodyForURL:(id)arg1 withSignatureConfiguration:(id)arg2;
- (void)_validateGUIDURLConfigIfNeeded;
- (id)allValues;
- (id)bagValues;
- (bool)canPostKeybagSyncData;
- (id)convertedActionsCache;
- (bool)hasValueForBagKey:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (long long)int64ValueForBagKey:(id)arg1;
- (id)libraryDAAPConfiguration;
- (id)mescalConfigurationForRequestURL:(id)arg1;
- (id)mescalConfigurationForResponseURL:(id)arg1;
- (id)queue;
- (id)radioConfiguration;
- (void)setBagValues:(id)arg1;
- (void)setConvertedActionsCache:(id)arg1;
- (void)setGUIDURLRegexPatterns:(id)arg1;
- (void)setGUIDURLSchemes:(id)arg1;
- (void)setQueue:(id)arg1;
- (bool)shouldAppendDeviceGUIDForURL:(id)arg1;
- (bool)shouldAppendMachineDataHeadersForURL:(id)arg1;
- (id)storefrontHeaderSuffix;
- (id)urlForBagKey:(id)arg1;
- (id)valueForBagKey:(id)arg1;

@end
