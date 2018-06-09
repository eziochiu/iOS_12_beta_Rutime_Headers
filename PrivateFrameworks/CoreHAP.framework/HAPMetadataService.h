/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPMetadataService : HMFObject {
    bool  _allowAssociatedService;
    NSString * _btleuuidStr;
    NSArray * _linkedServices;
    NSSet * _mandatoryCharacteristics;
    NSString * _name;
    NSSet * _optionalCharacteristics;
    NSNumber * _properties;
    NSString * _svcDescription;
    NSString * _uuidStr;
}

@property (nonatomic) bool allowAssociatedService;
@property (nonatomic, retain) NSString *btleuuidStr;
@property (nonatomic, retain) NSArray *linkedServices;
@property (nonatomic, retain) NSSet *mandatoryCharacteristics;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSSet *optionalCharacteristics;
@property (nonatomic, retain) NSNumber *properties;
@property (nonatomic, retain) NSString *svcDescription;
@property (nonatomic, retain) NSString *uuidStr;

- (void).cxx_destruct;
- (bool)allowAssociatedService;
- (id)btleuuidStr;
- (id)description;
- (void)dump;
- (id)generateDictionary:(id)arg1 metadata:(id)arg2;
- (id)initWithName:(id)arg1 uuid:(id)arg2 description:(id)arg3 mandatoryChrTypes:(id)arg4 properties:(id)arg5 linkedServices:(id)arg6;
- (id)linkedServices;
- (id)mandatoryCharacteristics;
- (id)name;
- (id)optionalCharacteristics;
- (id)properties;
- (void)setAllowAssociatedService:(bool)arg1;
- (void)setBtleuuidStr:(id)arg1;
- (void)setLinkedServices:(id)arg1;
- (void)setMandatoryCharacteristics:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOptionalCharacteristics:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setSvcDescription:(id)arg1;
- (void)setUuidStr:(id)arg1;
- (id)svcDescription;
- (id)uuidStr;

@end
