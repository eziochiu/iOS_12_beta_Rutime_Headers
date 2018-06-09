/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUScanOptions : NSObject <NSSecureCoding> {
    bool  _MDMUseDelayPeriod;
    bool  _forced;
    NSString * _identifier;
    NSString * _requestedPMV;
    NSMutableSet * _types;
}

@property (nonatomic) bool MDMUseDelayPeriod;
@property (getter=isForced, nonatomic) bool forced;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *requestedPMV;
@property (nonatomic, retain) NSSet *types;

+ (bool)supportsSecureCoding;

- (bool)MDMUseDelayPeriod;
- (void)addType:(int)arg1;
- (void)clearTypes;
- (bool)containsType:(int)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)findsAnyUpdate;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isForced;
- (void)removeType:(int)arg1;
- (id)requestedPMV;
- (void)setForced:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMDMUseDelayPeriod:(bool)arg1;
- (void)setRequestedPMV:(id)arg1;
- (void)setTypes:(id)arg1;
- (id)types;

@end
