/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFTabStateData : NSObject {
    NSString * _UUIDString;
    bool  _displayingStandaloneImage;
    double  _lastViewedTime;
    long long  _orderIndex;
    long long  _owningBrowserWindowDatabaseID;
    NSString * _owningBrowserWindowUUIDString;
    bool  _privateBrowsing;
    long long  _readerViewTopScrollOffset;
    int  _readingListBookmarkID;
    NSData * _sessionStateData;
    bool  _showingReader;
    bool  _skipSavingSessionState;
    bool  _skipUpdate;
    NSString * _title;
    unsigned long long  _uncompressedSessionStateDataSize;
    NSString * _url;
    NSString * _userVisibleURL;
    bool  _wasOpenedFromLink;
}

@property (nonatomic, retain) NSString *UUIDString;
@property (nonatomic, readonly) NSData *compressedSessionStateData;
@property (nonatomic) bool displayingStandaloneImage;
@property (nonatomic, readonly) bool isSessionStateDataCompressed;
@property (nonatomic) double lastViewedTime;
@property (nonatomic) long long orderIndex;
@property (nonatomic) long long owningBrowserWindowDatabaseID;
@property (nonatomic, copy) NSString *owningBrowserWindowUUIDString;
@property (nonatomic) bool privateBrowsing;
@property (nonatomic) long long readerViewTopScrollOffset;
@property (nonatomic) int readingListBookmarkID;
@property (nonatomic, retain) NSData *sessionStateData;
@property (nonatomic) bool showingReader;
@property (nonatomic) bool skipSavingSessionState;
@property (nonatomic) bool skipUpdate;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) unsigned long long uncompressedSessionStateDataSize;
@property (nonatomic, retain) NSString *url;
@property (nonatomic, retain) NSString *userVisibleURL;
@property (nonatomic) bool wasOpenedFromLink;

+ (id)uncompressedDataWithRawData:(id)arg1 uncompressedSize:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)UUIDString;
- (void)_uncompressSessionStateDataIfNeeded;
- (id)compressedSessionStateData;
- (bool)displayingStandaloneImage;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSQLiteRow:(id)arg1;
- (bool)isSessionStateDataCompressed;
- (double)lastViewedTime;
- (long long)orderIndex;
- (long long)owningBrowserWindowDatabaseID;
- (id)owningBrowserWindowUUIDString;
- (bool)privateBrowsing;
- (long long)readerViewTopScrollOffset;
- (int)readingListBookmarkID;
- (id)sessionStateData;
- (void)setDisplayingStandaloneImage:(bool)arg1;
- (void)setLastViewedTime:(double)arg1;
- (void)setOrderIndex:(long long)arg1;
- (void)setOwningBrowserWindowDatabaseID:(long long)arg1;
- (void)setOwningBrowserWindowUUIDString:(id)arg1;
- (void)setPrivateBrowsing:(bool)arg1;
- (void)setReaderViewTopScrollOffset:(long long)arg1;
- (void)setReadingListBookmarkID:(int)arg1;
- (void)setSessionStateData:(id)arg1;
- (void)setShowingReader:(bool)arg1;
- (void)setSkipSavingSessionState:(bool)arg1;
- (void)setSkipUpdate:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setUUIDString:(id)arg1;
- (void)setUncompressedSessionStateDataSize:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (void)setUserVisibleURL:(id)arg1;
- (void)setWasOpenedFromLink:(bool)arg1;
- (bool)showingReader;
- (bool)skipSavingSessionState;
- (bool)skipUpdate;
- (id)title;
- (id)toDictionary;
- (unsigned long long)uncompressedSessionStateDataSize;
- (id)url;
- (id)userVisibleURL;
- (bool)wasOpenedFromLink;

@end