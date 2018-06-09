/* made by EzioChiu.
 */

@protocol _INPBSetProfileInCarIntent <NSObject>

@required

- (bool)defaultProfile;
- (bool)hasDefaultProfile;
- (bool)hasIntentMetadata;
- (bool)hasProfileName;
- (bool)hasProfileNumber;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBString *)profileName;
- (_INPBInteger *)profileNumber;
- (void)setDefaultProfile:(bool)arg1;
- (void)setHasDefaultProfile:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setProfileName:(_INPBString *)arg1;
- (void)setProfileNumber:(_INPBInteger *)arg1;

@end
