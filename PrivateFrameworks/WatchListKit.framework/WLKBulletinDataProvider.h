/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKBulletinDataProvider : NSObject <BBRemoteDataProvider> {
    WLKBulletinStore * _bulletinStore;
    <WLKBulletinDataProviderDelegate> * _delegate;
}

@property (nonatomic, retain) WLKBulletinStore *bulletinStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WLKBulletinDataProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bulletinStore;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)defaultSectionInfo;
- (id)defaultSubsectionInfos;
- (id)delegate;
- (id)displayNameForSubsectionID:(id)arg1;
- (void)handleBulletinActionResponse:(id)arg1;
- (id)sectionIdentifier;
- (id)sectionParameters;
- (void)setBulletinStore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)sortDescriptors;

@end
