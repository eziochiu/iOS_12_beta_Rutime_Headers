/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDAnimationCache : NSObject {
    PDBuild * mBuild;
    double  mDelay;
    double  mDirection;
    double  mDuration;
    NSString * mGroupId;
    bool  mHasDelay;
    bool  mHasDirection;
    bool  mHasDuration;
    bool  mHasPartCount;
    bool  mHasValue;
    bool  mIsHead;
    int  mIterateType;
    int  mLevel;
    PDAnimateMotionBehavior * mMotionPath;
    int  mNodeType;
    int  mPartCount;
    int  mPresetClass;
    int  mPresetId;
    int  mPresetSubType;
    PDAnimationTarget * mTarget;
    double  mValue;
}

@property (nonatomic, retain) PDBuild *build;
@property (nonatomic) double delay;
@property (nonatomic) double direction;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSString *groupId;
@property (nonatomic) bool hasDelay;
@property (nonatomic) bool hasDirection;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasPartCount;
@property (nonatomic) bool hasValue;
@property (nonatomic) bool isHead;
@property (nonatomic) int iterateType;
@property (nonatomic) int level;
@property (nonatomic, retain) PDAnimateMotionBehavior *motionPath;
@property (nonatomic) int nodeType;
@property (nonatomic) int partCount;
@property (nonatomic) int presetClass;
@property (nonatomic) int presetId;
@property (nonatomic) int presetSubType;
@property (nonatomic, retain) PDAnimationTarget *target;
@property (nonatomic) double value;

+ (id)createAnimationInfoDataForCacheItem:(id)arg1 order:(unsigned int)arg2;
+ (void)loadAnimationCache:(id)arg1 pdAnimation:(id)arg2 state:(id)arg3;
+ (void)mapAnimationInfo:(id)arg1 cacheData:(id)arg2 state:(id)arg3;
+ (void)mapCommonData:(id)arg1 cacheData:(id)arg2 state:(id)arg3;

- (id)build;
- (void)dealloc;
- (double)delay;
- (double)direction;
- (double)duration;
- (id)groupId;
- (bool)hasDelay;
- (bool)hasDirection;
- (bool)hasDuration;
- (bool)hasPartCount;
- (bool)hasValue;
- (id)initWithAnimationInfo:(id)arg1;
- (bool)isHead;
- (int)iterateType;
- (int)level;
- (id)motionPath;
- (int)nodeType;
- (int)partCount;
- (int)presetClass;
- (int)presetId;
- (int)presetSubType;
- (void)setBuild:(id)arg1;
- (void)setDelay:(double)arg1;
- (void)setDirection:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setGroupId:(id)arg1;
- (void)setHasDelay:(bool)arg1;
- (void)setHasDirection:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasPartCount:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setIsHead:(bool)arg1;
- (void)setIterateType:(int)arg1;
- (void)setLevel:(int)arg1;
- (void)setMotionPath:(id)arg1;
- (void)setNodeType:(int)arg1;
- (void)setPartCount:(int)arg1;
- (void)setPresetClass:(int)arg1;
- (void)setPresetId:(int)arg1;
- (void)setPresetSubType:(int)arg1;
- (void)setTarget:(id)arg1;
- (void)setValue:(double)arg1;
- (id)target;
- (double)value;

@end