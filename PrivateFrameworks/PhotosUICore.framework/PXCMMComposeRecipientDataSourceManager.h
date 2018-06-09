/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMComposeRecipientDataSourceManager : NSObject <PXSectionedDataSourceManagerObserver, PXTapToRadar> {
    NSMutableArray * _composeRecipients;
    PXCMMComposeRecipientDataSource * _dataSource;
    <PXCMMComposeRecipientDataSourceManagerDelegate> * _delegate;
    unsigned long long  _numberOfPeopleSuggested;
    PXCMMPeopleSuggestionsDataSource * _peopleSuggestionsDataSource;
    PXCMMPeopleSuggestionsDataSourceManager * _peopleSuggestionsDataSourceManager;
    unsigned long long  _peopleSuggestionsSourceType;
    NSMutableSet * _recipients;
}

@property (nonatomic, retain) PXCMMComposeRecipientDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXCMMComposeRecipientDataSourceManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *diagnosticDictionary;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numberOfPeopleSuggested;
@property (nonatomic, retain) PXCMMPeopleSuggestionsDataSource *peopleSuggestionsDataSource;
@property (nonatomic, retain) PXCMMPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager;
@property (nonatomic) unsigned long long peopleSuggestionsSourceType;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (void)_addComposeRecipients:(id)arg1;
- (id)_composeRecipientsFromCurrentPeopleSuggestionsDataSource;
- (id)_createComposeRecipientDataSourceFromCurrentState;
- (void)_handleResultForRecentPeopleSuggestions:(id)arg1 error:(id)arg2 startTime:(double)arg3;
- (long long)_lastValidComposeRecipientIndex;
- (void)_replaceComposeRecipientAtIndex:(long long)arg1 withComposeRecipient:(id)arg2;
- (void)addRecipients:(id)arg1;
- (id)dataSource;
- (id)delegate;
- (id)diagnosticDictionary;
- (id)init;
- (id)initWithPeopleSuggestionsDataSourceManager:(id)arg1;
- (unsigned long long)numberOfPeopleSuggested;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)peopleSuggestionsDataSource;
- (id)peopleSuggestionsDataSourceManager;
- (unsigned long long)peopleSuggestionsSourceType;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNumberOfPeopleSuggested:(unsigned long long)arg1;
- (void)setPeopleSuggestionsDataSource:(id)arg1;
- (void)setPeopleSuggestionsDataSourceManager:(id)arg1;
- (void)setPeopleSuggestionsSourceType:(unsigned long long)arg1;

@end
