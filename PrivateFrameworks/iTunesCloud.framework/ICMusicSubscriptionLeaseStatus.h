/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionLeaseStatus : NSObject <NSCopying> {
    bool  _hasOfflinePlaybackKeys;
    bool  _hasOnlinePlaybackKeys;
    bool  _hasPendingLeaseAcquisition;
    long long  _leaseState;
    bool  _shouldPlaybackRequireOnlineKeys;
    ICStoreDialogResponse * _stateReasonDialog;
}

@property (nonatomic) bool hasOfflinePlaybackKeys;
@property (nonatomic) bool hasOnlinePlaybackKeys;
@property (nonatomic) bool hasPendingLeaseAcquisition;
@property (nonatomic) long long leaseState;
@property (nonatomic) bool shouldPlaybackRequireOnlineKeys;
@property (nonatomic, copy) ICStoreDialogResponse *stateReasonDialog;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasOfflinePlaybackKeys;
- (bool)hasOnlinePlaybackKeys;
- (bool)hasPendingLeaseAcquisition;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)leaseState;
- (void)setHasOfflinePlaybackKeys:(bool)arg1;
- (void)setHasOnlinePlaybackKeys:(bool)arg1;
- (void)setHasPendingLeaseAcquisition:(bool)arg1;
- (void)setLeaseState:(long long)arg1;
- (void)setShouldPlaybackRequireOnlineKeys:(bool)arg1;
- (void)setStateReasonDialog:(id)arg1;
- (bool)shouldPlaybackRequireOnlineKeys;
- (id)stateReasonDialog;

@end
