/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFContactsSearchResultsModel : NSObject <_MFSearchResultsConsumer> {
    NSArray * _enteredRecipients;
    bool  _favorMobileNumbers;
    struct __CFSet { } * _finishedResultTypes;
    NSArray * _infrequentRecentSearchResults;
    NSMutableDictionary * _localSearchResultsByAddress;
    unsigned long long  _preferredType;
    NSOperationQueue * _queue;
    NSMutableDictionary * _recentRecipientsByAddress;
    NSArray * _recentSearchResults;
    int  _resetCount;
    struct __CFArray { } * _resultTypesPriorityOrder;
    struct __CFArray { } * _resultTypesSortOrder;
    NSMutableDictionary * _serverSearchResultsByAddress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *enteredRecipients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_addBestRecipientsForRecipients:(id)arg1 excluding:(id)arg2 toArray:(id)arg3;
- (void)_addResults:(id)arg1 ofType:(unsigned long long)arg2;
- (void)_appendSortedResultsOfType:(unsigned long long)arg1 excluding:(id)arg2 toResults:(id)arg3;
- (id)_bestRecipientForAddress:(id)arg1 fallback:(id)arg2;
- (id)_dictionaryForResultType:(unsigned long long)arg1;
- (bool)_didFinishSearchForType:(unsigned long long)arg1;
- (void)_enumerateSearchResultTypesInSortOrderUsingBlock:(id /* block */)arg1;
- (void)_finishSearchOfType:(unsigned long long)arg1;
- (bool)_isResetting;
- (bool)_shouldProcessResultsAfterFinishingType:(unsigned long long)arg1;
- (void)addResults:(id)arg1 ofType:(unsigned long long)arg2;
- (void)dealloc;
- (id)enteredRecipients;
- (id)init;
- (id)initWithFavorMobileNumbers:(bool)arg1;
- (id)initWithResultTypeSortOrderComparator:(int (*)arg1 resultTypePriorityComparator:(int (*)arg2 favorMobileNumbers:(bool)arg3;
- (void)processAddedResultsOfType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)reset;
- (void)setEnteredRecipients:(id)arg1;

@end
