/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSpIdContext : NSObject {
    unsigned long long  _activeChannel;
    CSAsset * _asset;
    unsigned long long  _invocationStyle;
    NSString * _locale;
    NSString * _uniqueUttTag;
    NSDictionary * _vtEventInfo;
}

@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic, retain) CSAsset *asset;
@property (nonatomic) unsigned long long invocationStyle;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, retain) NSString *uniqueUttTag;
@property (nonatomic, retain) NSDictionary *vtEventInfo;

- (void).cxx_destruct;
- (unsigned long long)activeChannel;
- (id)asset;
- (id)description;
- (id)initWithSpIdInvocationStyle:(unsigned long long)arg1 asset:(id)arg2 locale:(id)arg3 vtEventInfo:(id)arg4;
- (unsigned long long)invocationStyle;
- (id)locale;
- (void)setActiveChannel:(unsigned long long)arg1;
- (void)setAsset:(id)arg1;
- (void)setInvocationStyle:(unsigned long long)arg1;
- (void)setUniqueUttTag:(id)arg1;
- (void)setVtEventInfo:(id)arg1;
- (id)uniqueUttTag;
- (id)utteranceAudioFilepathForSpIdType:(unsigned long long)arg1;
- (id)utteranceMetadataFilePathForSpIdType:(unsigned long long)arg1;
- (id)vtEventInfo;

@end