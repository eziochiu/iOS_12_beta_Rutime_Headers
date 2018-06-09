/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTDataConnectionStatus : NSObject <NSCopying, NSSecureCoding> {
    NSString * _apnName;
    int  _contextType;
    NSString * _interfaceName;
    int  _ipFamily;
    NSNumber * _pdp;
    bool  _publicNetAllowed;
    int  _state;
    bool  _suspended;
    unsigned int  _wirelessTechnologyMask;
}

@property (nonatomic, retain) NSString *apnName;
@property (nonatomic) int contextType;
@property (nonatomic, retain) NSString *interfaceName;
@property (nonatomic) int ipFamily;
@property (nonatomic, retain) NSNumber *pdp;
@property (nonatomic) bool publicNetAllowed;
@property (nonatomic) int state;
@property (nonatomic) bool suspended;
@property (nonatomic) unsigned int wirelessTechnologyMask;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)apnName;
- (int)contextType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)interfaceName;
- (int)ipFamily;
- (id)pdp;
- (bool)publicNetAllowed;
- (void)setApnName:(id)arg1;
- (void)setContextType:(int)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setIpFamily:(int)arg1;
- (void)setPdp:(id)arg1;
- (void)setPublicNetAllowed:(bool)arg1;
- (void)setState:(int)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setWirelessTechnologyMask:(unsigned int)arg1;
- (int)state;
- (bool)suspended;
- (unsigned int)wirelessTechnologyMask;

@end
