/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFFieldNotificationECP2_0 : NFFieldNotification {
    unsigned char  _odaRequired;
    NSArray * _tciArray;
    unsigned char  _terminalSubType;
    unsigned long long  _terminalType;
}

@property (readonly) unsigned char odaRequired;
@property (readonly, retain) NSArray *tciArray;
@property (readonly) unsigned char terminalSubType;
@property (readonly) unsigned long long terminalType;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned char)odaRequired;
- (id)tciArray;
- (unsigned char)terminalSubType;
- (unsigned long long)terminalType;

@end
