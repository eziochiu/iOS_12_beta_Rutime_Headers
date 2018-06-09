/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPRemoteDisplayDevice : NSObject <NSSecureCoding> {
    SFDevice * _bleDevice;
    CUBonjourDevice * _bonjourDevice;
    unsigned int  _flags;
    NSString * _identifier;
    NSString * _idsDeviceIdentifier;
    NSString * _model;
    NSString * _name;
    NSString * _persistentIdentifier;
    unsigned long long  _statusFlags;
}

@property (nonatomic, retain) SFDevice *bleDevice;
@property (nonatomic, retain) CUBonjourDevice *bonjourDevice;
@property (nonatomic, readonly) unsigned int flags;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *idsDeviceIdentifier;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *persistentIdentifier;
@property (nonatomic, readonly) unsigned long long statusFlags;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bleDevice;
- (id)bonjourDevice;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)flags;
- (id)identifier;
- (id)idsDeviceIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)model;
- (id)name;
- (id)persistentIdentifier;
- (bool)removeBonjourDevice:(id)arg1;
- (bool)removeSFDevice:(id)arg1;
- (void)setBleDevice:(id)arg1;
- (void)setBonjourDevice:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdsDeviceIdentifier:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPersistentIdentifier:(id)arg1;
- (unsigned long long)statusFlags;
- (unsigned int)updateWithBonjourDevice:(id)arg1;
- (unsigned int)updateWithSFDevice:(id)arg1;

@end
