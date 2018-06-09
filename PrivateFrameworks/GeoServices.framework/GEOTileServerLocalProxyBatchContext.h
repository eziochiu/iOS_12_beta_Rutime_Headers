/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileServerLocalProxyBatchContext : NSObject {
    GEOTileKeyList * _cacheMissNoDataList;
    GEOTileKeyList * _cacheMissStaleDataList;
    GEOTileKeyList * _fullList;
    GEOTileKeyList * _interestList;
    unsigned char  _loadReason;
    GEOTileKeyList * _networkList;
    GEOTileKeyList * _pendingNetworkList;
    GEOTileRequester * _tileRequester;
}

@property (nonatomic, retain) GEOTileKeyList *cacheMissNoDataList;
@property (nonatomic, retain) GEOTileKeyList *cacheMissStaleDataList;
@property (nonatomic, retain) GEOTileKeyList *fullList;
@property (nonatomic, retain) GEOTileKeyList *interestList;
@property (nonatomic) unsigned char loadReason;
@property (nonatomic, retain) GEOTileKeyList *networkList;
@property (nonatomic, retain) GEOTileKeyList *pendingNetworkList;
@property (nonatomic, retain) GEOTileRequester *tileRequester;

- (void).cxx_destruct;
- (id)cacheMissNoDataList;
- (id)cacheMissStaleDataList;
- (id)fullList;
- (id)interestList;
- (unsigned char)loadReason;
- (id)networkList;
- (id)pendingNetworkList;
- (void)setCacheMissNoDataList:(id)arg1;
- (void)setCacheMissStaleDataList:(id)arg1;
- (void)setFullList:(id)arg1;
- (void)setInterestList:(id)arg1;
- (void)setLoadReason:(unsigned char)arg1;
- (void)setNetworkList:(id)arg1;
- (void)setPendingNetworkList:(id)arg1;
- (void)setTileRequester:(id)arg1;
- (id)tileRequester;

@end
