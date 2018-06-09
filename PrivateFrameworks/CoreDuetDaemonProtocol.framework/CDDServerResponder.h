/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@interface CDDServerResponder : NSObject {
    CDDebug * _debug;
}

@property (readonly) CDDebug *debug;

- (void).cxx_destruct;
- (id)debug;
- (id)init;
- (id)makeStashWithId:(unsigned long long)arg1;
- (bool)respondIndicatingProtocolErrorOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 protocolErrorNumber:(long long)arg4 error:(id*)arg5;
- (bool)respondToAdmissionCheckAndStartedOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 admissionGranted:(bool)arg4 grantValiditySeconds:(unsigned long long)arg5 admissionCondition:(unsigned long long)arg6 error:(id*)arg7;
- (bool)respondToAdmissionCheckOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 admissionGranted:(bool)arg4 grantValiditySeconds:(unsigned long long)arg5 admissionCondition:(unsigned long long)arg6 error:(id*)arg7;
- (bool)respondToAppsLaunchedButNotPrewarmedSinceDateOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToAssociateToBudgetOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToAttributeNamesOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 resultDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToAttributeOccurredOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToAttributeRepeatedStatisticOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 statisticsArray:(id)arg4 error:(id*)arg5;
- (bool)respondToAttributeReset:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToAttributeStatisticOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 statisticsDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToBackgroundLaunchOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToBroadcastSystemDataOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToBudgetsForAttributeIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToBundleIdChangeOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToBundleIdEntriesOlderThanDateOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 status:(bool)arg4 error:(id*)arg5;
- (bool)respondToCompareAndSwapPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 finalValue:(long long)arg4 error:(id*)arg5;
- (bool)respondToDebugBitmapOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToDecrementPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 decrementedValue:(long long)arg4 error:(id*)arg5;
- (bool)respondToDeleteAllDatabaseEntriesOlderThanDateOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToDeleteAttributeIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToDeleteBundleIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToDeleteDataForClientIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToDeletePoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToDeregisterTrendableAppOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToForecastAttributeIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 resultDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToGetCtlOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 mitigationDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToGetDeviceFromDescriptionOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToGetDevicesOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToGetRemoteSystemDataOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToHistoryQueryOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 resultDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToIdForAttributeOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 attributeId:(unsigned long long)arg4 error:(id*)arg5;
- (bool)respondToIdForPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 integerId:(unsigned long long)arg4 error:(id*)arg5;
- (bool)respondToIncrementPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 incrementedValue:(long long)arg4 error:(id*)arg5;
- (bool)respondToLiveAppsOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToLocalFocalAppsOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToMeteringForAttributeOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 meterToken:(unsigned long long)arg4 error:(id*)arg5;
- (bool)respondToPoolNamesOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 resultDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToReadPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 readValue:(long long)arg4 error:(id*)arg5;
- (bool)respondToReadRemoteRequestResultOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseKey:(const char *)arg4 responseDictionary:(id)arg5 error:(id*)arg6;
- (bool)respondToReadSystemDataFromDeviceOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToRegisterAttributeOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 registeredAttributeId:(unsigned long long)arg4 error:(id*)arg5;
- (bool)respondToRegisterChildPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 initialValue:(long long)arg4 integerId:(unsigned long long)arg5 error:(id*)arg6;
- (bool)respondToRegisterForSignoff:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToRegisterPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 initialValue:(long long)arg4 integerId:(unsigned long long)arg5 error:(id*)arg6;
- (bool)respondToRegisterTrendableAppOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToRemoteFocalAppsOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToRequestAdmissionLogFromDeviceOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToRequestDeviceForecastDataOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToRequestDeviceStatisticDataOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToRequestSystemDataFromDeviceOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToResetAdmissionMask:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToSetAdmissionMask:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToSetCategoryOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToSetCtlOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToSetNonAppFocalOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToSignoffConditionsChangedOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToTrendingAppsOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToTriggerSystemDataExchange:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToVersionOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 dictionaryKey:(id)arg5 dictionary:(id)arg6 error:(id*)arg7;
- (bool)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 error:(id*)arg5;
- (bool)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 nameKey:(id)arg5 name:(id)arg6 dictionaryKey:(id)arg7 dictionary:(id)arg8 error:(id*)arg9;
- (bool)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 nameKey:(id)arg5 name:(id)arg6 error:(id*)arg7;
- (bool)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 nameKey:(id)arg5 name:(id)arg6 valueKey:(id)arg7 value:(long long)arg8 error:(id*)arg9;
- (bool)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 valueKey:(id)arg5 value:(unsigned long long)arg6 error:(id*)arg7;

@end
