/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNTransition : TSPContainedObject <KNInspectableAnimation, TSKModel> {
    KNTransitionAttributes * _attributes;
}

@property (nonatomic, readonly) KNAnimationInfo *animationInfo;
@property (nonatomic, copy) KNTransitionAttributes *attributes;
@property (nonatomic, readonly) bool canEditAnimations;
@property (nonatomic, readonly) TSUColor *color;
@property (nonatomic, readonly) bool customBounce;
@property (nonatomic, readonly) TSDBezierPathSource *customEffectTimingCurve1;
@property (nonatomic, readonly) TSDBezierPathSource *customEffectTimingCurve2;
@property (nonatomic, readonly) TSDBezierPathSource *customEffectTimingCurve3;
@property (nonatomic, readonly) NSString *customEffectTimingCurveThemeName1;
@property (nonatomic, readonly) NSString *customEffectTimingCurveThemeName2;
@property (nonatomic, readonly) NSString *customEffectTimingCurveThemeName3;
@property (nonatomic, readonly) bool customMagicMoveFadeUnmatchedObjects;
@property (nonatomic, readonly) long long customMosaicSize;
@property (nonatomic, readonly) long long customMosaicType;
@property (nonatomic, readonly) bool customMotionBlur;
@property (nonatomic, readonly) long long customTextDelivery;
@property (nonatomic, readonly) long long customTimingCurve;
@property (nonatomic, readonly) float customTravelDistance;
@property (nonatomic, readonly) float customTwist;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double delay;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long direction;
@property (nonatomic, readonly) KNAnimationPluginMenu *directionMenu;
@property (nonatomic, readonly) unsigned long long directionType;
@property (nonatomic, readonly) bool documentIsRTL;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSString *effect;
@property (nonatomic, readonly) bool hasAutomaticTrigger;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *inspectableAttributes;
@property (nonatomic, readonly) bool isMagicMove;
@property (nonatomic, readonly) NSArray *localizedEventTriggerNames;
@property (nonatomic, readonly) long long randomNumberSeed;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsBounce;
@property (nonatomic, readonly) bool supportsColor;
@property (nonatomic, readonly) bool supportsCustomEffectTimingCurve1;
@property (nonatomic, readonly) bool supportsCustomEffectTimingCurve2;
@property (nonatomic, readonly) bool supportsCustomEffectTimingCurve3;
@property (nonatomic, readonly) bool supportsDirection;
@property (nonatomic, readonly) bool supportsDuration;
@property (nonatomic, readonly) bool supportsTravelDistance;
@property (nonatomic, readonly) bool supportsTwist;

+ (id)attributeKeyForBindingKeyPath:(id)arg1;
+ (id)bindingKeyPathForAttributeKey:(id)arg1;
+ (id)bindingMap;
+ (unsigned long long)directionTypeForEffect:(id)arg1;
+ (bool)hasDirectionOptionForEffect:(id)arg1;

- (void).cxx_destruct;
- (id)animationInfo;
- (id)attributes;
- (bool)canEditAnimations;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)customBounce;
- (id)customEffectTimingCurve1;
- (id)customEffectTimingCurve2;
- (id)customEffectTimingCurve3;
- (id)customEffectTimingCurveThemeName1;
- (id)customEffectTimingCurveThemeName2;
- (id)customEffectTimingCurveThemeName3;
- (bool)customMagicMoveFadeUnmatchedObjects;
- (long long)customMosaicSize;
- (long long)customMosaicType;
- (bool)customMotionBlur;
- (long long)customTextDelivery;
- (long long)customTimingCurve;
- (float)customTravelDistance;
- (float)customTwist;
- (double)delay;
- (id)description;
- (unsigned long long)direction;
- (id)directionMenu;
- (unsigned long long)directionType;
- (bool)documentIsRTL;
- (double)duration;
- (id)effect;
- (bool)hasAutomaticTrigger;
- (id)initWithArchive:(const struct TransitionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct TransitionAttributesArchive {} *x5; }*)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (id)initWithOwner:(id)arg1;
- (id)initWithOwner:(id)arg1 attributes:(id)arg2;
- (id)inspectableAttributes;
- (bool)isMagicMove;
- (id)localizedEventTriggerNames;
- (unsigned long long)p_keynoteVersionFromUnarchiver:(id)arg1;
- (bool)p_supportsCustomEffectTimingCurveForLayoutStyles:(id)arg1;
- (long long)randomNumberSeed;
- (void)saveToArchive:(struct TransitionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct TransitionAttributesArchive {} *x5; }*)arg1 archiver:(id)arg2;
- (void)setAttributes:(id)arg1;
- (bool)supportsBounce;
- (bool)supportsColor;
- (bool)supportsCustomEffectTimingCurve1;
- (bool)supportsCustomEffectTimingCurve2;
- (bool)supportsCustomEffectTimingCurve3;
- (bool)supportsDirection;
- (bool)supportsDuration;
- (bool)supportsRandomNumberSeedInspection;
- (bool)supportsTimingCurves;
- (bool)supportsTravelDistance;
- (bool)supportsTwist;

@end
