/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPrivateDataEncryptionMigrationHealthCheck : NSObject <FCCKDatabaseEncryptionDelegate> {
    CKContainer * _container;
    CKContainer * _containerWithZoneWidePCS;
    FCCKPrivateDatabaseSchema * _schema;
    CKContainer * _secureContainer;
}

@property (nonatomic, retain) CKContainer *container;
@property (nonatomic, retain) CKContainer *containerWithZoneWidePCS;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCCKPrivateDatabaseSchema *schema;
@property (nonatomic, retain) CKContainer *secureContainer;
@property (readonly) Class superclass;

+ (id)run;

- (void).cxx_destruct;
- (void)_eraseAllPrivateData;
- (id)_prepareHistoryAndReturnExpectations;
- (id)_preparePersonalizationProfileAndReturnExpectations;
- (id)_prepareReadingListAndReturnExpectations;
- (id)_prepareReferenceToChannelMembershipsAndReturnExpectations;
- (id)_prepareSensitiveSubscriptionsAndReturnExpectations;
- (id)_prepareSentinelsAndReturnExpectations;
- (id)_prepareSubscriptionsAndReturnExpectations;
- (id)_prepareTagSettingsAndReturnExpectations;
- (id)_prepareUserInfoAndReturnExpectations;
- (id)container;
- (id)containerWithZoneWidePCS;
- (void)fetchOriginalDataShouldBeDeletedAfterMigrationForDatabase:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchPrivateDataEncryptionIsAllowedForDatabase:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchPrivateDataEncryptionMigrationIsDesiredForDatabase:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)run;
- (id)schema;
- (id)secureContainer;
- (void)setContainer:(id)arg1;
- (void)setContainerWithZoneWidePCS:(id)arg1;
- (void)setSchema:(id)arg1;
- (void)setSecureContainer:(id)arg1;

@end
