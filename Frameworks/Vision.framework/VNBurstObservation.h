/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNBurstObservation : VNObservation {
    NSArray * _allImageIdentifiers;
    NSDictionary * _allImageStats;
    NSArray * _bestImageIdentifiers;
    NSArray * _clusters;
    NSString * _coverImageIdentifier;
    bool  _isAction;
    bool  _isPortrait;
}

@property (nonatomic, retain) NSArray *allImageIdentifiers;
@property (nonatomic, retain) NSDictionary *allImageStats;
@property (nonatomic, retain) NSArray *bestImageIdentifiers;
@property (nonatomic, retain) NSArray *clusters;
@property (nonatomic, retain) NSString *coverImageIdentifier;
@property (nonatomic) bool isAction;
@property (nonatomic) bool isPortrait;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allImageIdentifiers;
- (id)allImageStats;
- (id)bestImageIdentifiers;
- (id)clusters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverImageIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isAction;
- (bool)isEqual:(id)arg1;
- (bool)isPortrait;
- (void)setAllImageIdentifiers:(id)arg1;
- (void)setAllImageStats:(id)arg1;
- (void)setBestImageIdentifiers:(id)arg1;
- (void)setClusters:(id)arg1;
- (void)setCoverImageIdentifier:(id)arg1;
- (void)setIsAction:(bool)arg1;
- (void)setIsPortrait:(bool)arg1;

@end
