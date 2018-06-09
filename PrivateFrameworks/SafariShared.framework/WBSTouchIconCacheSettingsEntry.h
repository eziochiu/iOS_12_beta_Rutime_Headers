/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSTouchIconCacheSettingsEntry : NSObject <WBSSiteMetadataImageCacheSettingsEntry> {
    NSString * _UUIDString;
    long long  _databaseID;
    UIColor * _extractedColor;
    bool  _higherPriorityIconDownloadFailedDueToNetworkError;
    NSString * _host;
    bool  _iconInCache;
    NSDate * _lastRequestDate;
    bool  _lastRequestWasInUserLoadedWebpage;
    long long  _requestCount;
    bool  _requestDidSucceed;
    long long  _transparencyAnalysisResult;
}

@property (nonatomic, copy) NSString *UUIDString;
@property (nonatomic) long long databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long downloadStatusFlags;
@property (nonatomic, retain) UIColor *extractedColor;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool higherPriorityIconDownloadFailedDueToNetworkError;
@property (nonatomic, copy) NSString *host;
@property (getter=isIconInCache, nonatomic) bool iconInCache;
@property (nonatomic, retain) NSDate *lastRequestDate;
@property (nonatomic) bool lastRequestWasInUserLoadedWebpage;
@property (nonatomic) long long requestCount;
@property (nonatomic) bool requestDidSucceed;
@property (readonly) Class superclass;
@property (nonatomic) long long transparencyAnalysisResult;

+ (id)entryWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(bool)arg3 requestCount:(long long)arg4 iconInCache:(bool)arg5 requestDidSucceed:(bool)arg6 extractedColor:(id)arg7 transparencyAnalysisResult:(long long)arg8 higherPriorityIconDownloadFailedDueToNetworkError:(bool)arg9 UUIDString:(id)arg10;

- (void).cxx_destruct;
- (id)UUIDString;
- (long long)databaseID;
- (id)description;
- (unsigned long long)downloadStatusFlags;
- (id)extractedColor;
- (unsigned long long)hash;
- (bool)higherPriorityIconDownloadFailedDueToNetworkError;
- (id)host;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(bool)arg3 requestCount:(long long)arg4 iconInCache:(bool)arg5 requestDidSucceed:(bool)arg6 extractedColor:(id)arg7 transparencyAnalysisResult:(long long)arg8 higherPriorityIconDownloadFailedDueToNetworkError:(bool)arg9 UUIDString:(id)arg10;
- (id)initWithSQLiteRow:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isIconInCache;
- (id)lastRequestDate;
- (bool)lastRequestWasInUserLoadedWebpage;
- (long long)requestCount;
- (bool)requestDidSucceed;
- (void)setDatabaseID:(long long)arg1;
- (void)setExtractedColor:(id)arg1;
- (void)setHigherPriorityIconDownloadFailedDueToNetworkError:(bool)arg1;
- (void)setHost:(id)arg1;
- (void)setIconInCache:(bool)arg1;
- (void)setLastRequestDate:(id)arg1;
- (void)setLastRequestWasInUserLoadedWebpage:(bool)arg1;
- (void)setRequestCount:(long long)arg1;
- (void)setRequestDidSucceed:(bool)arg1;
- (void)setTransparencyAnalysisResult:(long long)arg1;
- (void)setUUIDString:(id)arg1;
- (long long)transparencyAnalysisResult;

@end
