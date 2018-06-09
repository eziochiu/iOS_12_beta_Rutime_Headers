/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioSyncRequest : RadioRequest {
    NSObject<OS_dispatch_queue> * _artworkQueue;
    bool  _disableArtworkLoading;
    unsigned long long  _globalVersion;
    bool  _includeCleanTracksOnly;
    bool  _isAutomaticUpdate;
    NSString * _referer;
    SSURLConnectionRequest * _request;
    NSDictionary * _responseDictionary;
    NSDictionary * _resultingOverrideBagDictionary;
}

@property (nonatomic) bool disableArtworkLoading;
@property (nonatomic) bool includeCleanTracksOnly;
@property (nonatomic) bool isAutomaticUpdate;
@property (nonatomic, copy) NSString *referer;
@property (nonatomic, readonly, copy) NSDictionary *resultingOverrideBagDictionary;

- (void).cxx_destruct;
- (id)_sortedChangesByType:(id)arg1;
- (id)_stationSortOrderForChanges:(id)arg1;
- (id)_updateModel:(id)arg1 withChangeDictionary:(id)arg2 changeType:(long long*)arg3 loadArtworkSynchronously:(bool)arg4;
- (void)cancel;
- (id)changeList;
- (bool)disableArtworkLoading;
- (bool)includeCleanTracksOnly;
- (id)init;
- (id)initWithGlobalVersion:(unsigned long long)arg1;
- (bool)isAutomaticUpdate;
- (id)matchDictionary;
- (id)referer;
- (id)responseDictionary;
- (id)resultingOverrideBagDictionary;
- (void)setDisableArtworkLoading:(bool)arg1;
- (void)setIncludeCleanTracksOnly:(bool)arg1;
- (void)setIsAutomaticUpdate:(bool)arg1;
- (void)setReferer:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end
