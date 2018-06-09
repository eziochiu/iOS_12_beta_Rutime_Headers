/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTPNRContextInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _imsi;
    bool  _isReady;
    NSString * _phoneNumber;
    NSString * _plmn;
}

@property (nonatomic, retain) NSString *imsi;
@property (nonatomic) bool isReady;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, retain) NSString *plmn;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)imsi;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPNRContextInfo:(id)arg1;
- (bool)isReady;
- (id)phoneNumber;
- (id)plmn;
- (void)setImsi:(id)arg1;
- (void)setIsReady:(bool)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPlmn:(id)arg1;

@end
