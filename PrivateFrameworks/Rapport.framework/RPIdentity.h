/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPIdentity : NSObject <NSSecureCoding> {
    NSDate * _dateAcknowledged;
    NSDate * _dateAdded;
    NSDate * _dateRemoved;
    NSDate * _dateRequested;
    NSData * _deviceIRKData;
    NSData * _edPKData;
    NSData * _edSKData;
    NSString * _identifier;
    NSString * _idsDeviceID;
    NSString * _model;
    NSString * _name;
    bool  _present;
    int  _type;
}

@property (nonatomic, copy) NSDate *dateAcknowledged;
@property (nonatomic, copy) NSDate *dateAdded;
@property (nonatomic, copy) NSDate *dateRemoved;
@property (nonatomic, copy) NSDate *dateRequested;
@property (nonatomic, copy) NSData *deviceIRKData;
@property (nonatomic, copy) NSData *edPKData;
@property (nonatomic, copy) NSData *edSKData;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *idsDeviceID;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool present;
@property (nonatomic, readonly) bool sufficientForFamilyIdentity;
@property (nonatomic, readonly) bool sufficientForSelfIdentity;
@property (nonatomic) int type;

+ (id)nullIdentity;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authTagForData:(id)arg1 type:(int)arg2 error:(id*)arg3;
- (unsigned int)compareWithRPIdentity:(id)arg1;
- (id)dateAcknowledged;
- (id)dateAdded;
- (id)dateRemoved;
- (id)dateRequested;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)deviceIRKData;
- (id)edPKData;
- (id)edSKData;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)idsDeviceID;
- (id)initWithCoder:(id)arg1;
- (id)model;
- (id)name;
- (bool)present;
- (void)setDateAcknowledged:(id)arg1;
- (void)setDateAdded:(id)arg1;
- (void)setDateRemoved:(id)arg1;
- (void)setDateRequested:(id)arg1;
- (void)setDeviceIRKData:(id)arg1;
- (void)setEdPKData:(id)arg1;
- (void)setEdSKData:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdsDeviceID:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPresent:(bool)arg1;
- (void)setType:(int)arg1;
- (id)signData:(id)arg1 error:(id*)arg2;
- (bool)signDataPtr:(const void*)arg1 dataLen:(unsigned long long)arg2 signatureBytes:(unsigned char)arg3 error:(id*)arg4;
- (bool)sufficientForFamilyIdentity;
- (bool)sufficientForSelfIdentity;
- (int)type;
- (unsigned int)updateWithKeychainItem:(id)arg1 error:(id*)arg2;
- (bool)verifyAuthTag:(id)arg1 data:(id)arg2 type:(int)arg3 error:(id*)arg4;
- (bool)verifyAuthTagPtr:(const void*)arg1 authTagLen:(unsigned long long)arg2 dataPtr:(const void*)arg3 dataLen:(unsigned long long)arg4 type:(int)arg5 error:(id*)arg6;
- (bool)verifySignature:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (bool)verifySignaturePtr:(const void*)arg1 signatureLen:(unsigned long long)arg2 dataPtr:(const void*)arg3 dataLen:(unsigned long long)arg4 error:(id*)arg5;

@end
