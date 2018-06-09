/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLContactsMigrator : WLMigrationWebService {
    CNContactStore * _contactStore;
}

+ (id)contentType;

- (void).cxx_destruct;
- (id)_vcardDataWithoutCustomFieldsFromVcardData:(id)arg1;
- (id)contentType;
- (void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
- (void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithSourceDevice:(id)arg1 urlSessionController:(id)arg2 delegate:(id)arg3;

@end
