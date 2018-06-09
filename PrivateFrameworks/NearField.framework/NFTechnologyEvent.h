/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFTechnologyEvent : NSObject <NSSecureCoding> {
    unsigned short  _systemCode;
    unsigned int  _technology;
    unsigned int  _terminalType;
    unsigned char  _touchIDRequired;
    unsigned char  _valueAddedServiceMode;
    unsigned char  _vasSupported;
}

@property (nonatomic, readonly) unsigned short systemCode;
@property (nonatomic, readonly) unsigned int technology;
@property (nonatomic, readonly) unsigned int terminalType;
@property (nonatomic, readonly) unsigned char touchIDRequired;
@property (nonatomic, readonly) unsigned char valueAddedServiceMode;
@property (nonatomic, readonly) unsigned char vasSupported;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFieldNotification:(id)arg1;
- (id)initWithTechnology:(unsigned int)arg1 andValueAddedServiceMode:(unsigned int)arg2;
- (id)initWithTechnology:(unsigned int)arg1 andValueAddedServiceMode:(unsigned int)arg2 andSystemCode:(unsigned short)arg3;
- (unsigned short)systemCode;
- (unsigned int)technology;
- (unsigned int)terminalType;
- (unsigned char)touchIDRequired;
- (unsigned char)valueAddedServiceMode;
- (unsigned char)vasSupported;

@end