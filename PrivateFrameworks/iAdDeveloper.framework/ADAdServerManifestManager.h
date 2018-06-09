/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

@interface ADAdServerManifestManager : NSObject {
    NSString * _deviceDescription;
    NSMutableDictionary * _recordsByServerName;
}

@property (nonatomic, copy) NSString *deviceDescription;
@property (nonatomic, retain) NSMutableDictionary *recordsByServerName;
@property (nonatomic, readonly) bool updateInProgress;

+ (id)sharedManager;

- (id)URLForServerWithName:(id)arg1;
- (void)_considerRefreshingServerRecord:(id)arg1;
- (void)_loadRecords:(id /* block */)arg1;
- (void)_persistRecords;
- (id)_persistedManifestsURL;
- (void)_setURL:(id)arg1 forServerWithName:(id)arg2 temporary:(bool)arg3;
- (void)_storeLoadedRecords:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)deviceDescription;
- (id)init;
- (id)recordsByServerName;
- (void)refreshAllRecords;
- (void)refreshRecord:(id)arg1;
- (id)serverRecords;
- (void)setDeviceDescription:(id)arg1;
- (void)setManifest:(id)arg1 forRecord:(id)arg2 URL:(id)arg3;
- (void)setRecordsByServerName:(id)arg1;
- (void)setURL:(id)arg1 forTemporaryServerWithName:(id)arg2;
- (bool)updateInProgress;

@end