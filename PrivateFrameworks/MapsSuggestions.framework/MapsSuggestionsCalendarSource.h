/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsCalendarSource : MapsSuggestionsBaseSource <MapsSuggestionsSource> {
    EKEventStore * _eventStore;
    NSObject<OS_dispatch_queue> * _fimQueue;
    NSMutableDictionary * _handleToGEOMapItemMapping;
    MapsSuggestionsNetworkRequester * _requester;
    NSSet * _setOfEventReservationSubtypes;
    NSString * _siriFoundThisString;
    bool  _suspended;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MapsSuggestionsSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EKEventStore *eventStore;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *fimQueue;
@property (nonatomic, retain) NSMutableDictionary *handleToGEOMapItemMapping;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MapsSuggestionsNetworkRequester *requester;
@property (nonatomic, retain) NSSet *setOfEventReservationSubtypes;
@property (nonatomic, retain) NSString *siriFoundThisString;
@property (readonly) Class superclass;
@property bool suspended;
@property (nonatomic, readonly) NSString *uniqueName;

+ (unsigned long long)disposition;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (bool)_addCalendarEventFieldsToEntry:(id)arg1 event:(id)arg2;
- (bool)_addCarRentalFieldsToEntry:(id)arg1 event:(id)arg2;
- (bool)_addHotelFieldsToEntry:(id)arg1 event:(id)arg2;
- (bool)_addRestaurantReservationFieldsToEntry:(id)arg1 fromSchemaOrgDictionary:(id)arg2 event:(id)arg3;
- (bool)_addTicketedEventFieldsToEntry:(id)arg1 fromSchemaOrgDictionary:(id)arg2 event:(id)arg3;
- (bool)_addTravelFlightFieldsToEntry:(id)arg1 fromSchemaOrgDictionary:(id)arg2 event:(id)arg3;
- (void)_callUpdateSuggestionEntries;
- (void)_createEntriesFromEventsAndUpdateSuggestions:(id)arg1 currentLocation:(id)arg2;
- (unsigned long long)_entryTypeFromSchema:(id)arg1;
- (id)_predicate;
- (bool)canProduceEntriesOfType:(unsigned long long)arg1;
- (void)dealloc;
- (id)eventStore;
- (void)eventStoreDidChange:(id)arg1;
- (id)fimQueue;
- (id)handleToGEOMapItemMapping;
- (id)initWithDelegate:(id)arg1;
- (bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (id)requester;
- (void)setEventStore:(id)arg1;
- (void)setFimQueue:(id)arg1;
- (void)setHandleToGEOMapItemMapping:(id)arg1;
- (id)setOfEventReservationSubtypes;
- (void)setRequester:(id)arg1;
- (void)setSetOfEventReservationSubtypes:(id)arg1;
- (void)setSiriFoundThisString:(id)arg1;
- (void)setSuspended:(bool)arg1;
- (id)siriFoundThisString;
- (void)start;
- (void)stop;
- (id)suggestionSubtitleForReservationStatus:(id)arg1 name:(id)arg2 event:(id)arg3;
- (id)suggestionTitleForReservationStatus:(id)arg1 name:(id)arg2;
- (bool)suspended;
- (double)updateSuggestionEntries;

@end
