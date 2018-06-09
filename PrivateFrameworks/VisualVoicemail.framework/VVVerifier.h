/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VVVerifier : NSObject {
    NSMutableDictionary * _checkpointDictionary;
    NSArray * _keyDescriptions;
    NSString * _serviceIdentifier;
}

@property (nonatomic, readonly, copy) NSString *serviceIdentifier;

+ (id)homeDirectory;

- (void).cxx_destruct;
- (id)_checkpointDictionary;
- (void)_checkpointDictionaryChanged;
- (id)_checkpointDictionaryFilePath;
- (void)_mapFromSourceDictionary:(id)arg1 destinationDictionary:(id)arg2 inKey:(id)arg3 outDescription:(id)arg4;
- (void)_saveCheckpointDictionary;
- (id)configurationDictionary;
- (id)humanReadableConfigurationDictionary:(id*)arg1;
- (id)initWithServiceIdentifier:(id)arg1;
- (id)keyDescriptions;
- (id)readableError;
- (id)serviceIdentifier;
- (void)storeValue:(bool)arg1 forCheckpointKey:(id)arg2;
- (bool)valueForCheckpointKey:(id)arg1 exists:(bool*)arg2;

@end
