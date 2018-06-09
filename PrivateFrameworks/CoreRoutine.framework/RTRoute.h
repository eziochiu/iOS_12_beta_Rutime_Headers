/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTRoute : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _destinationLocationOfInterestIdentifier;
    NSUUID * _destinationVisitIdentifier;
    NSUUID * _identifier;
    NSArray * _locations;
    NSString * _name;
    NSUUID * _originLocationOfInterestIdentifier;
    NSUUID * _originVisitIdentifier;
    NSDate * _start;
    NSDate * _stop;
}

@property (nonatomic, copy) NSUUID *destinationLocationOfInterestIdentifier;
@property (nonatomic, copy) NSUUID *destinationVisitIdentifier;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSArray *locations;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSUUID *originLocationOfInterestIdentifier;
@property (nonatomic, copy) NSUUID *originVisitIdentifier;
@property (nonatomic, copy) NSDate *start;
@property (nonatomic, copy) NSDate *stop;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationLocationOfInterestIdentifier;
- (id)destinationVisitIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocations:(id)arg1 identifier:(id)arg2 originLoiIdentifier:(id)arg3 destinationLoiIdentifier:(id)arg4 originVisitIdentifier:(id)arg5 destinationVisitIdentifier:(id)arg6 start:(id)arg7 stop:(id)arg8 name:(id)arg9;
- (id)initWithLocations:(id)arg1 originLoiIdentifier:(id)arg2 destinationLoiIdentifier:(id)arg3 originVisitIdentifier:(id)arg4 destinationVisitIdentifier:(id)arg5 start:(id)arg6 stop:(id)arg7 name:(id)arg8;
- (id)initWithLocations:(id)arg1 originLoiIdentifier:(id)arg2 destinationLoiIdentifier:(id)arg3 start:(id)arg4 stop:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)locations;
- (id)name;
- (id)originLocationOfInterestIdentifier;
- (id)originVisitIdentifier;
- (void)setDestinationLocationOfInterestIdentifier:(id)arg1;
- (void)setDestinationVisitIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocations:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOriginLocationOfInterestIdentifier:(id)arg1;
- (void)setOriginVisitIdentifier:(id)arg1;
- (void)setStart:(id)arg1;
- (void)setStop:(id)arg1;
- (id)start;
- (id)stop;

@end
