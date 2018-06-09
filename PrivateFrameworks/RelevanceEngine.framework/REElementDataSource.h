/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REElementDataSource : NSObject <RELoggable> {
    bool  _allowsLocationUse;
    <REElementDataSourceDelegate> * _delegate;
    NSString * _logHeader;
    bool  _running;
    unsigned long long  _state;
    bool  _unlockedSinceBoot;
}

@property (nonatomic) bool allowsLocationUse;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <REElementDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logHeader;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedSections;
@property (getter=hasUnlockedSinceBoot, nonatomic, readonly) bool unlockedSinceBoot;

+ (id)applicationBundleIdentifier;
+ (id)bundleIdentifier;
+ (id)contentAttributes;
+ (struct { long long x1; long long x2; long long x3; })minimumSupportedSystemVersion;
+ (id)overrideDataSourceImage;
+ (id)overrideLocalizedDataSourceName;
+ (bool)supportsPersistence;
+ (bool)wantsAppPrewarm;
+ (bool)wantsLocationInUseAsserton;
+ (bool)wantsReloadForFirstDeviceUnlock;
+ (bool)wantsReloadForSignificantTimeChange;

- (void).cxx_destruct;
- (bool)allowsLocationUse;
- (void)collectLoggableState:(id /* block */)arg1;
- (id)complicationDescriptor;
- (id)delegate;
- (void)elementWithIdentifierDidBecomeHidden:(id)arg1;
- (void)elementWithIdentifierWillBecomeVisible:(id)arg1;
- (void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)getElementsInSection:(id)arg1 withHandler:(id /* block */)arg2;
- (bool)hasUnlockedSinceBoot;
- (id)init;
- (bool)isRunning;
- (void)loadLoggingHeader;
- (id)logHeader;
- (void)pause;
- (void)resume;
- (void)setAllowsLocationUse:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRunning:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setUnlockedSinceBoot:(bool)arg1;
- (unsigned long long)state;
- (id)supportedSections;

@end
