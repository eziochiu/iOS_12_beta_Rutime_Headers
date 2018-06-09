/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSeriesSampleEntity : HDSampleEntity <_HDSeriesFreezeJournalEntrySeries>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_deleteSeriesWithID:(id)arg1 insertDeletedObject:(bool)arg2 profile:(id)arg3 database:(id)arg4 error:(id*)arg5;
+ (long long)_insertionEra;
+ (id)additionalPredicateForEnumeration;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 authorizationFilter:(id /* block */)arg4;
+ (id)freezeSeriesWithIdentifier:(id)arg1 metadata:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (id /* block */)objectInsertionFilterForProfile:(id)arg1;
+ (bool)replaceObjectID:(id)arg1 replacementObjectID:(id)arg2 insertDeletedObject:(bool)arg3 profile:(id)arg4 database:(id)arg5 error:(id*)arg6;
+ (id)seriesSampleWithID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (void)updateInsertionEra;

- (id)HFDKeyWithDatabase:(id)arg1 error:(id*)arg2;
- (bool)canAddDatumInDatabase:(id)arg1 error:(id*)arg2;
- (id)freezeWithDatabase:(id)arg1 profile:(id)arg2 error:(id*)arg3;
- (bool)updateSampleCount:(long long)arg1 withDatabase:(id)arg2 error:(id*)arg3;

@end
