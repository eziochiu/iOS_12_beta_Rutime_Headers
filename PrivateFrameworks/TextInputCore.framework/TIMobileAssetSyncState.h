/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIMobileAssetSyncState : NSObject {
    long long  _attemptCount;
    NSString * _buildVersion;
    NSDate * _date;
    bool  _loadedState;
    long long  _status;
}

@property (nonatomic) long long attemptCount;
@property (nonatomic, copy) NSString *buildVersion;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) long long status;

+ (id)buildVersionString;

- (void).cxx_destruct;
- (long long)attemptCount;
- (id)buildVersion;
- (id)date;
- (void)didSyncToRemoteMetadataWithError:(id)arg1;
- (id)initWithDate:(id)arg1 buildVersion:(id)arg2 status:(long long)arg3 attemptCount:(long long)arg4;
- (void)loadStateIfNecessary;
- (void)saveState;
- (void)setAttemptCount:(long long)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setStatus:(long long)arg1;
- (bool)shouldSyncToRemoteMetadata;
- (long long)status;
- (void)updateState;

@end
