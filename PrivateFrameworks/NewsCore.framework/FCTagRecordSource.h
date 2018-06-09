/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTagRecordSource : FCRecordSource {
    unsigned long long  _desiredFieldOptions;
    NSArray * _nonLocalizableKeys;
}

@property (nonatomic) unsigned long long desiredFieldOptions;

+ (id)defaultCachePolicy;

- (void).cxx_destruct;
- (unsigned long long)desiredFieldOptions;
- (id)experimentalizableKeys;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 desiredTagRecordFieldOptions:(unsigned long long)arg3;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 experimentalizableFieldsPostfix:(id)arg3 activeTreatmentID:(id)arg4;
- (id)localizableKeys;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (int)pbRecordType;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)recordIDPrefix;
- (id)recordType;
- (id)saveTagRecords:(id)arg1;
- (void)setDesiredFieldOptions:(unsigned long long)arg1;
- (id)storeFilename;
- (unsigned long long)storeVersion;

@end
