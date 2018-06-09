/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPEndpoint : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSString * _idsDeviceIdentifier;
    NSString * _model;
    NSString * _name;
    bool  _present;
    int  _proximity;
    unsigned long long  _statusFlags;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *idsDeviceIdentifier;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool present;
@property (nonatomic, readonly) int proximity;
@property (nonatomic) unsigned long long statusFlags;

+ (id)nullEndpoint;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)idsDeviceIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)model;
- (id)name;
- (bool)present;
- (int)proximity;
- (void)setIdentifier:(id)arg1;
- (void)setIdsDeviceIdentifier:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPresent:(bool)arg1;
- (void)setStatusFlags:(unsigned long long)arg1;
- (unsigned long long)statusFlags;

@end
