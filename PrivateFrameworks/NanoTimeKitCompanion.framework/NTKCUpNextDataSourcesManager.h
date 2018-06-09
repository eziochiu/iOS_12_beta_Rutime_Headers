/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCUpNextDataSourcesManager : NSObject {
    NSObject<OS_dispatch_queue> * _fetchQueue;
    NSSet * _firstPartyDataSourceIdentifiers;
    NSSet * _firstPartyDonatedApplicationIdentifiers;
    <NTKCUpNextDataSourcesManagerIdentifiersDelegate> * _firstPartyIdentifiersDelegate;
    NSSet * _sportsDataSourceIdentifiers;
    <NTKCUpNextDataSourcesManagerIdentifiersDelegate> * _sportsIdentifiersDelegate;
    NSSet * _thirdPartyDataSourceIdentifiers;
    NSSet * _thirdPartyDonatedApplicationIdentifiers;
    <NTKCUpNextDataSourcesManagerIdentifiersDelegate> * _thirdPartyIdentifiersDelegate;
    unsigned int  _watchVersion;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *fetchQueue;
@property (copy) NSSet *firstPartyDataSourceIdentifiers;
@property (copy) NSSet *firstPartyDonatedApplicationIdentifiers;
@property (nonatomic) <NTKCUpNextDataSourcesManagerIdentifiersDelegate> *firstPartyIdentifiersDelegate;
@property (copy) NSSet *sportsDataSourceIdentifiers;
@property (nonatomic) <NTKCUpNextDataSourcesManagerIdentifiersDelegate> *sportsIdentifiersDelegate;
@property (copy) NSSet *thirdPartyDataSourceIdentifiers;
@property (copy) NSSet *thirdPartyDonatedApplicationIdentifiers;
@property (nonatomic) <NTKCUpNextDataSourcesManagerIdentifiersDelegate> *thirdPartyIdentifiersDelegate;
@property (nonatomic, readonly) unsigned int watchVersion;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_appsChangedNotification:(id)arg1;
- (void)_buildRows;
- (void)_dataSourceChangedNotification:(id)arg1;
- (void)dealloc;
- (void)fetchIdentifiers;
- (id)fetchQueue;
- (id)firstPartyDataSourceIdentifiers;
- (id)firstPartyDonatedApplicationIdentifiers;
- (id)firstPartyIdentifiersDelegate;
- (id)initWatchVersion:(unsigned int)arg1;
- (void)setFirstPartyDataSourceIdentifiers:(id)arg1;
- (void)setFirstPartyDonatedApplicationIdentifiers:(id)arg1;
- (void)setFirstPartyIdentifiersDelegate:(id)arg1;
- (void)setSportsDataSourceIdentifiers:(id)arg1;
- (void)setSportsIdentifiersDelegate:(id)arg1;
- (void)setThirdPartyDataSourceIdentifiers:(id)arg1;
- (void)setThirdPartyDonatedApplicationIdentifiers:(id)arg1;
- (void)setThirdPartyIdentifiersDelegate:(id)arg1;
- (id)sportsDataSourceIdentifiers;
- (id)sportsIdentifiersDelegate;
- (id)thirdPartyDataSourceIdentifiers;
- (id)thirdPartyDonatedApplicationIdentifiers;
- (id)thirdPartyIdentifiersDelegate;
- (unsigned int)watchVersion;

@end
