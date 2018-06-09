/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFFieldNotificationECP1_0 : NFFieldNotification {
    unsigned char  _odaRequired;
    unsigned int  _terminalMode;
    unsigned int  _terminalType;
}

@property (readonly) unsigned char odaRequired;
@property (readonly) unsigned int terminalMode;
@property (readonly) unsigned int terminalType;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned char)odaRequired;
- (unsigned int)terminalMode;
- (unsigned int)terminalType;

@end
