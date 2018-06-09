/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFBrowserSavedState : NSObject {
    NSArray * _browserControllerUUIDs;
    SFBrowserStateSQLiteStore * _browserStateSQLiteStore;
    bool  _checkPointWriteAheadLogOnNextUpdate;
    NSMutableArray * _recentlyClosedTabs;
    bool  _secureDeleteEnabled;
}

@property (nonatomic, copy) NSArray *browserControllerUUIDs;
@property (nonatomic, retain) NSArray *recentlyClosedTabs;
@property (nonatomic) bool secureDeleteEnabled;

+ (id)ephemeralSavedState;
+ (void)setSharedBrowserSavedState:(id)arg1;
+ (id)sharedBrowserSavedState;

- (void).cxx_destruct;
- (void)_checkPointWriteAheadLogIfNeeded;
- (void)_readBrowserControllersSavedState;
- (bool)activeDocumentIsValidForBrowserControllerWithUUID:(id)arg1;
- (void)addRecentlyClosedTabWithData:(id)arg1;
- (id)browserControllerUUIDs;
- (void)clearAllSavedStatesAndCloseDatabase;
- (void)clearRecentlyClosedTabs;
- (void)dealloc;
- (id)initWithDatabaseURL:(id)arg1;
- (id)initWithInMemoryDatabase;
- (id)readSavedSessionStateDataForTabWithUUID:(id)arg1;
- (id)recentlyClosedTabs;
- (void)removeRecentlyClosedTabWithData:(id)arg1;
- (void)removeTabStateWithTabData:(id)arg1;
- (void)removeTabsStateForBrowserControllerWithUUID:(id)arg1 andRemoveWindow:(bool)arg2;
- (void)saveTabStateData:(id)arg1;
- (void)saveTabsState:(id)arg1 forBrowserControllerWithUUID:(id)arg2 completion:(id /* block */)arg3;
- (id)savedTabsStateForBrowserControllerWithUUID:(id)arg1;
- (bool)secureDeleteEnabled;
- (void)setActiveDocumentIsValid:(bool)arg1 forBrowserControllerWithUUID:(id)arg2;
- (void)setBrowserControllerUUIDs:(id)arg1;
- (void)setRecentlyClosedTabs:(id)arg1;
- (void)setSecureDeleteEnabled:(bool)arg1;
- (void)updateBrowserWindowState:(id)arg1 tabs:(id)arg2;

@end
