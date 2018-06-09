/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5Peer : NSObject <NSCopying, NSSecureCoding> {
    NSString * _build;
    bool  _isNearby;
    double  _lastDiscovered;
    double  _lastLost;
    NSString * _model;
    NSString * _name;
    NSString * _os;
    NSString * _peerID;
    long long  _type;
    NSString * _version;
}

@property (nonatomic, copy) NSString *build;
@property (nonatomic) bool isNearby;
@property (nonatomic) double lastDiscovered;
@property (nonatomic) double lastLost;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *os;
@property (nonatomic, copy) NSString *peerID;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *version;

+ (bool)supportsSecureCoding;

- (id)build;
- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPeer:(id)arg1;
- (bool)isNearby;
- (double)lastDiscovered;
- (double)lastLost;
- (id)model;
- (id)name;
- (id)os;
- (id)peerID;
- (void)setBuild:(id)arg1;
- (void)setIsNearby:(bool)arg1;
- (void)setLastDiscovered:(double)arg1;
- (void)setLastLost:(double)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOs:(id)arg1;
- (void)setPeerID:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setVersion:(id)arg1;
- (long long)type;
- (id)version;

@end
