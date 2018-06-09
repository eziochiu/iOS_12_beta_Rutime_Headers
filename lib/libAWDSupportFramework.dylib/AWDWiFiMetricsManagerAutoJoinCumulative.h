/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerAutoJoinCumulative : PBCodable <NSCopying> {
    unsigned int  _ajScansPerformedWithLocation;
    unsigned int  _ajScansPerformedWithoutLocation;
    unsigned int  _bandScanCount24;
    unsigned int  _bandScanCount5;
    unsigned int  _ccaBitmap;
    unsigned int  _didAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _excludedDueToAJBlacklistCounts;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int ajScansPerformedWithLocation : 1; 
        unsigned int ajScansPerformedWithoutLocation : 1; 
        unsigned int bandScanCount24 : 1; 
        unsigned int bandScanCount5 : 1; 
        unsigned int ccaBitmap : 1; 
        unsigned int didAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount : 1; 
        unsigned int rssiBitmap : 1; 
        unsigned int userChoseToAssociateToAJBlacklistedCount : 1; 
    }  _has;
    unsigned int  _rssiBitmap;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _scanTypesCounts;
    unsigned long long  _timestamp;
    unsigned int  _userChoseToAssociateToAJBlacklistedCount;
}

@property (nonatomic) unsigned int ajScansPerformedWithLocation;
@property (nonatomic) unsigned int ajScansPerformedWithoutLocation;
@property (nonatomic) unsigned int bandScanCount24;
@property (nonatomic) unsigned int bandScanCount5;
@property (nonatomic) unsigned int ccaBitmap;
@property (nonatomic) unsigned int didAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount;
@property (nonatomic, readonly) unsigned int*excludedDueToAJBlacklistCounts;
@property (nonatomic, readonly) unsigned long long excludedDueToAJBlacklistCountsCount;
@property (nonatomic) bool hasAjScansPerformedWithLocation;
@property (nonatomic) bool hasAjScansPerformedWithoutLocation;
@property (nonatomic) bool hasBandScanCount24;
@property (nonatomic) bool hasBandScanCount5;
@property (nonatomic) bool hasCcaBitmap;
@property (nonatomic) bool hasDidAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount;
@property (nonatomic) bool hasRssiBitmap;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUserChoseToAssociateToAJBlacklistedCount;
@property (nonatomic) unsigned int rssiBitmap;
@property (nonatomic, readonly) unsigned int*scanTypesCounts;
@property (nonatomic, readonly) unsigned long long scanTypesCountsCount;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int userChoseToAssociateToAJBlacklistedCount;

- (void)addExcludedDueToAJBlacklistCount:(unsigned int)arg1;
- (void)addScanTypesCount:(unsigned int)arg1;
- (unsigned int)ajScansPerformedWithLocation;
- (unsigned int)ajScansPerformedWithoutLocation;
- (unsigned int)bandScanCount24;
- (unsigned int)bandScanCount5;
- (unsigned int)ccaBitmap;
- (void)clearExcludedDueToAJBlacklistCounts;
- (void)clearScanTypesCounts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)didAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount;
- (unsigned int)excludedDueToAJBlacklistCountAtIndex:(unsigned long long)arg1;
- (unsigned int*)excludedDueToAJBlacklistCounts;
- (unsigned long long)excludedDueToAJBlacklistCountsCount;
- (bool)hasAjScansPerformedWithLocation;
- (bool)hasAjScansPerformedWithoutLocation;
- (bool)hasBandScanCount24;
- (bool)hasBandScanCount5;
- (bool)hasCcaBitmap;
- (bool)hasDidAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount;
- (bool)hasRssiBitmap;
- (bool)hasTimestamp;
- (bool)hasUserChoseToAssociateToAJBlacklistedCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)rssiBitmap;
- (unsigned int)scanTypesCountAtIndex:(unsigned long long)arg1;
- (unsigned int*)scanTypesCounts;
- (unsigned long long)scanTypesCountsCount;
- (void)setAjScansPerformedWithLocation:(unsigned int)arg1;
- (void)setAjScansPerformedWithoutLocation:(unsigned int)arg1;
- (void)setBandScanCount24:(unsigned int)arg1;
- (void)setBandScanCount5:(unsigned int)arg1;
- (void)setCcaBitmap:(unsigned int)arg1;
- (void)setDidAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount:(unsigned int)arg1;
- (void)setExcludedDueToAJBlacklistCounts:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setHasAjScansPerformedWithLocation:(bool)arg1;
- (void)setHasAjScansPerformedWithoutLocation:(bool)arg1;
- (void)setHasBandScanCount24:(bool)arg1;
- (void)setHasBandScanCount5:(bool)arg1;
- (void)setHasCcaBitmap:(bool)arg1;
- (void)setHasDidAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount:(bool)arg1;
- (void)setHasRssiBitmap:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUserChoseToAssociateToAJBlacklistedCount:(bool)arg1;
- (void)setRssiBitmap:(unsigned int)arg1;
- (void)setScanTypesCounts:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUserChoseToAssociateToAJBlacklistedCount:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)userChoseToAssociateToAJBlacklistedCount;
- (void)writeTo:(id)arg1;

@end
