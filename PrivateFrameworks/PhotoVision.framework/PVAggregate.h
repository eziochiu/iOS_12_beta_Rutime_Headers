/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@interface PVAggregate : NSObject {
    NSString * _primaryDomain;
}

@property (nonatomic, retain) NSString *primaryDomain;

+ (id)sharedAggregate;

- (void).cxx_destruct;
- (id)_aggdMethodConstructionHints;
- (id)_aggdMethodConstructionHintsForKey:(id)arg1;
- (id)_allRegisteredKeys;
- (id)_distributionKeys;
- (id)_doubleValueTypeKeys;
- (id)_getSubdomain:(id)arg1;
- (id)_messageTracerMethodConstructionHints;
- (id)_messageTracerMethodConstructionHintsForKey:(id)arg1;
- (id)_needsParsingKeys;
- (id)_noOpRegisteredKeysForOSXLibraryDomain;
- (void)_recordAGGDValue:(id)arg1 forKey:(id)arg2;
- (void)_recordMessageTracerValue:(id)arg1 forKey:(id)arg2;
- (id)_registeredKeysForLibraryDomain;
- (id)_registeredKeysLookupTable;
- (id)_scalarToAddKeys;
- (id)_stringValueTypeKeys;
- (id)_truncateToSignificantFigureForValue:(id)arg1 numOfSignificantDigits:(int)arg2;
- (id)primaryDomain;
- (void)recordValue:(id)arg1 forKey:(id)arg2;
- (void)setPrimaryDomain:(id)arg1;

@end
