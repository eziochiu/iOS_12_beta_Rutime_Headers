/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PFAdjustment : NSObject {
    NSString * _autoIdentifier;
    NSDictionary * _autoSettings;
    bool  _enabled;
    unsigned long long  _formatVersion;
    NSString * _identifier;
    NSString * _maskUUID;
    NSDictionary * _settings;
}

@property (nonatomic, readonly) NSString *autoIdentifier;
@property (nonatomic, readonly) NSDictionary *autoSettings;
@property (nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) unsigned long long formatVersion;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *maskUUID;
@property (nonatomic, readonly) NSDictionary *settings;

+ (bool)isValidArchiveDictionary:(id)arg1 errors:(id)arg2;

- (void).cxx_destruct;
- (id)archiveDictionary;
- (id)autoIdentifier;
- (id)autoSettings;
- (id)debugDescription;
- (id)description;
- (bool)enabled;
- (unsigned long long)formatVersion;
- (id)identifier;
- (id)init;
- (id)initWithArchiveDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 settings:(id)arg2 autoIdentifier:(id)arg3 autoSettings:(id)arg4 enabled:(bool)arg5;
- (id)initWithIdentifier:(id)arg1 settings:(id)arg2 autoIdentifier:(id)arg3 autoSettings:(id)arg4 enabled:(bool)arg5 maskUUID:(id)arg6;
- (id)initWithIdentifier:(id)arg1 settings:(id)arg2 enabled:(bool)arg3;
- (id)maskUUID;
- (id)settings;

@end
