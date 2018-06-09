/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCPBVoiceShortcut : PBCodable <NSCopying> {
    NSString * _associatedAppBundleIdentifier;
    double  _dateCreated;
    double  _dateLastModified;
    NSString * _identifier;
    NSString * _phrase;
    NSData * _serializedWorkflowData;
    NSString * _shortcutDescription;
    NSString * _shortcutName;
}

@property (nonatomic, retain) NSString *associatedAppBundleIdentifier;
@property (nonatomic) double dateCreated;
@property (nonatomic) double dateLastModified;
@property (nonatomic, readonly) bool hasShortcutDescription;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *phrase;
@property (nonatomic, retain) NSData *serializedWorkflowData;
@property (nonatomic, retain) NSString *shortcutDescription;
@property (nonatomic, retain) NSString *shortcutName;

- (void).cxx_destruct;
- (id)associatedAppBundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dateCreated;
- (double)dateLastModified;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShortcutDescription;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)phrase;
- (bool)readFrom:(id)arg1;
- (id)serializedWorkflowData;
- (void)setAssociatedAppBundleIdentifier:(id)arg1;
- (void)setDateCreated:(double)arg1;
- (void)setDateLastModified:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPhrase:(id)arg1;
- (void)setSerializedWorkflowData:(id)arg1;
- (void)setShortcutDescription:(id)arg1;
- (void)setShortcutName:(id)arg1;
- (id)shortcutDescription;
- (id)shortcutName;
- (void)writeTo:(id)arg1;

@end
