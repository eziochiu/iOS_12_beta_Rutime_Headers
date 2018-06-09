/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTDataStatus : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _activeContexts;
    bool  _attached;
    bool  _cellularDataPossible;
    bool  _dataPlanSignalingReductionOverride;
    bool  _inHomeCountry;
    int  _indicator;
    int  _indicatorOverride;
    int  _radioTechnology;
    bool  _roamAllowed;
    unsigned int  _totalActiveContexts;
}

@property (nonatomic) unsigned int activeContexts;
@property (nonatomic) bool attached;
@property (nonatomic) bool cellularDataPossible;
@property (nonatomic) bool dataPlanSignalingReductionOverride;
@property (nonatomic) bool inHomeCountry;
@property (nonatomic) int indicator;
@property (nonatomic) int indicatorOverride;
@property (nonatomic) int radioTechnology;
@property (nonatomic) bool roamAllowed;
@property (nonatomic) unsigned int totalActiveContexts;

+ (bool)supportsSecureCoding;

- (unsigned int)activeContexts;
- (bool)attached;
- (bool)cellularDataPossible;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)dataPlanSignalingReductionOverride;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)inHomeCountry;
- (int)indicator;
- (int)indicatorOverride;
- (id)initWithCoder:(id)arg1;
- (int)radioTechnology;
- (bool)roamAllowed;
- (void)setActiveContexts:(unsigned int)arg1;
- (void)setAttached:(bool)arg1;
- (void)setCellularDataPossible:(bool)arg1;
- (void)setDataPlanSignalingReductionOverride:(bool)arg1;
- (void)setInHomeCountry:(bool)arg1;
- (void)setIndicator:(int)arg1;
- (void)setIndicatorOverride:(int)arg1;
- (void)setRadioTechnology:(int)arg1;
- (void)setRoamAllowed:(bool)arg1;
- (void)setTotalActiveContexts:(unsigned int)arg1;
- (unsigned int)totalActiveContexts;

@end
