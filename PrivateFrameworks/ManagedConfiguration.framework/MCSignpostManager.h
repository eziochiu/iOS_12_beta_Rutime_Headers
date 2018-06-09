/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCSignpostManager : NSObject

+ (unsigned int)_ariadneCodeForCode:(unsigned int)arg1;
+ (unsigned int)_codeForFeature:(id)arg1;
+ (unsigned int)_codeForFeatureIndex:(unsigned long long)arg1;
+ (void)_endTraceAndOutputResults;
+ (void)_execute:(id)arg1;
+ (id)_fileLineWithCode:(unsigned long long)arg1 identifier:(id)arg2;
+ (bool)_generateCodesFileError:(id*)arg1;
+ (id)_parseResultsForTypeFilter:(unsigned long long)arg1 featureFilter:(id)arg2 date:(id)arg3 error:(id*)arg4;
+ (void)_signpostWithCode:(unsigned int)arg1 arg:(unsigned long long)arg2;
+ (void)_startTrace;
+ (id)signpostsForTypeFilter:(unsigned long long)arg1 featureFilter:(id)arg2 duration:(double)arg3 error:(id*)arg4;
+ (void)willGetFeature:(id)arg1;
+ (void)willPostEffectiveSettingsChangedNotification;
+ (void)willSetFeature:(id)arg1;

@end
