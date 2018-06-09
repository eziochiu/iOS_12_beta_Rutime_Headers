/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMDLostModeInfo : NSObject <NSSecureCoding> {
    bool  _disableSlideToUnlock;
    bool  _facetimeCapable;
    NSString * _footnoteText;
    bool  _lostModeEnabled;
    unsigned long long  _lostModeType;
    NSString * _message;
    NSString * _phoneNumber;
}

@property (nonatomic) bool disableSlideToUnlock;
@property (nonatomic) bool facetimeCapable;
@property (nonatomic, retain) NSString *footnoteText;
@property (nonatomic) bool lostModeEnabled;
@property (nonatomic) unsigned long long lostModeType;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *phoneNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (bool)disableSlideToUnlock;
- (void)encodeWithCoder:(id)arg1;
- (bool)facetimeCapable;
- (id)footnoteText;
- (id)initWithCoder:(id)arg1;
- (bool)lostModeEnabled;
- (unsigned long long)lostModeType;
- (id)message;
- (id)phoneNumber;
- (void)setDisableSlideToUnlock:(bool)arg1;
- (void)setFacetimeCapable:(bool)arg1;
- (void)setFootnoteText:(id)arg1;
- (void)setLostModeEnabled:(bool)arg1;
- (void)setLostModeType:(unsigned long long)arg1;
- (void)setMessage:(id)arg1;
- (void)setPhoneNumber:(id)arg1;

@end
