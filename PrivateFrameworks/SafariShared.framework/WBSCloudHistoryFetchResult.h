/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCloudHistoryFetchResult : NSObject {
    NSMutableDictionary * _mutableClientVersions;
    NSMutableArray * _mutableCloudHistoryVisits;
    NSMutableArray * _mutableHistoryTombstones;
    NSData * _serverChangeTokenData;
}

@property (nonatomic, readonly) NSDictionary *clientVersions;
@property (nonatomic, readonly) NSArray *cloudHistoryVisits;
@property (nonatomic, readonly) NSArray *historyTombstones;
@property (nonatomic, readonly) NSData *serverChangeTokenData;

- (void).cxx_destruct;
- (void)_addCloudHistoryVisit:(id)arg1;
- (void)_addHistoryTombstone:(id)arg1;
- (void)_setServerChangeTokenData:(id)arg1;
- (void)_updateClientVersion:(unsigned long long)arg1 seenAt:(id)arg2;
- (id)clientVersions;
- (id)cloudHistoryVisits;
- (id)description;
- (id)historyTombstones;
- (id)init;
- (id)serverChangeTokenData;

@end
