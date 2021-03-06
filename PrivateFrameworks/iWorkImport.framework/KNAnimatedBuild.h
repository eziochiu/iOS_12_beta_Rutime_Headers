/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimatedBuild : NSObject {
    bool  _animateAtEndOfPreviousBuild;
    KNBuildAttributes * _attributes;
    bool  _automatic;
    long long  _buildType;
    NSArray * _childBuilds;
    unsigned long long  _deliveryOption;
    unsigned long long  _deliveryStyle;
    unsigned long long  _direction;
    double  _duration;
    NSString * _effectIdentifier;
    double  _endTime;
    double  _eventEndTime;
    long long  _eventIndex;
    double  _eventStartTime;
    NSDictionary * _finalAttributes;
    bool  _isInitialAmbientBuild;
    bool  _isVisibleAtBeginning;
    bool  _isVisibleAtEnd;
    KNAnimatedBuild * _parentBuild;
    Class  _pluginClass;
    NSDictionary * _previousAttributes;
    long long  _stageIndex;
    double  _startTime;
}

@property (nonatomic) bool animateAtEndOfPreviousBuild;
@property (nonatomic, readonly) KNBuildAttributes *attributes;
@property (nonatomic, readonly) bool automatic;
@property (nonatomic, readonly) long long buildType;
@property (nonatomic, readonly) NSArray *childBuilds;
@property (nonatomic, readonly) unsigned long long deliveryOption;
@property (nonatomic, readonly) unsigned long long deliveryStyle;
@property (nonatomic, readonly) unsigned long long direction;
@property (nonatomic) double duration;
@property (nonatomic, readonly) double durationWithChildren;
@property (nonatomic, readonly) NSString *effectIdentifier;
@property (nonatomic, readonly) double endTime;
@property (nonatomic, readonly) double eventEndTime;
@property (nonatomic) long long eventIndex;
@property (nonatomic, readonly) double eventStartTime;
@property (nonatomic, copy) NSDictionary *finalAttributes;
@property (nonatomic, readonly) double finalScale;
@property (nonatomic, readonly) KNBuildAttributeValue *finalScaleAttribute;
@property (nonatomic, readonly) double initialScale;
@property (nonatomic, readonly) KNBuildAttributeValue *initialScaleAttribute;
@property (nonatomic, readonly) bool isActionBuild;
@property (nonatomic, readonly) bool isActionMotionPath;
@property (nonatomic, readonly) bool isActionOpacity;
@property (nonatomic, readonly) bool isActionRotation;
@property (nonatomic, readonly) bool isActionScale;
@property (nonatomic, readonly) bool isBuildIn;
@property (nonatomic, readonly) bool isBuildOut;
@property (nonatomic, readonly) bool isChildBuild;
@property (nonatomic, readonly) bool isContentBuild;
@property (nonatomic, readonly) bool isDriftBuild;
@property (nonatomic, readonly) bool isEmphasisBuild;
@property (nonatomic, readonly) bool isImplicitlyVisibleAtBeginning;
@property (nonatomic) bool isInitialAmbientBuild;
@property (nonatomic, readonly) bool isMagicChartBuild;
@property (nonatomic, readonly) bool isParentBuild;
@property (nonatomic) bool isVisibleAtBeginning;
@property (nonatomic) bool isVisibleAtEnd;
@property (nonatomic, readonly) double maxScale;
@property (nonatomic, readonly) KNBuildAttributeValue *maxScaleAttribute;
@property (nonatomic) KNAnimatedBuild *parentBuild;
@property (nonatomic, readonly) Class pluginClass;
@property (nonatomic, copy) NSDictionary *previousAttributes;
@property (nonatomic, readonly) NSArray *requiredScaleAttributes;
@property (nonatomic, readonly) NSArray *requiredScales;
@property (nonatomic, readonly) bool requiresMaxScale;
@property (nonatomic, readonly) long long stageIndex;
@property (nonatomic, readonly) double startTime;

- (void).cxx_destruct;
- (void)addChildBuild:(id)arg1;
- (bool)animateAtEndOfPreviousBuild;
- (id)attributes;
- (bool)automatic;
- (long long)buildType;
- (id)childBuilds;
- (unsigned long long)deliveryOption;
- (unsigned long long)deliveryStyle;
- (id)description;
- (unsigned long long)direction;
- (double)duration;
- (double)durationWithChildren;
- (id)effectIdentifier;
- (double)endTime;
- (double)eventEndTime;
- (long long)eventIndex;
- (double)eventStartTime;
- (id)finalAttributes;
- (double)finalScale;
- (id)finalScaleAttribute;
- (id)initWithBuildType:(long long)arg1 effectIdentifier:(id)arg2 attributes:(id)arg3 pluginClass:(Class)arg4 deliveryStyle:(unsigned long long)arg5 eventIndex:(long long)arg6 stageIndex:(long long)arg7 startTime:(double)arg8 eventStartTime:(double)arg9 duration:(double)arg10 direction:(unsigned long long)arg11 automatic:(bool)arg12 animateAtEndOfPreviousBuild:(bool)arg13 parentBuild:(id)arg14;
- (double)initialScale;
- (id)initialScaleAttribute;
- (bool)isActionBuild;
- (bool)isActionMotionPath;
- (bool)isActionOpacity;
- (bool)isActionRotation;
- (bool)isActionScale;
- (bool)isBuildIn;
- (bool)isBuildOut;
- (bool)isChildBuild;
- (bool)isContentBuild;
- (bool)isDriftBuild;
- (bool)isEmphasisBuild;
- (bool)isImplicitlyVisibleAtBeginning;
- (bool)isInitialAmbientBuild;
- (bool)isMagicChartBuild;
- (bool)isParentBuild;
- (bool)isVisibleAtBeginning;
- (bool)isVisibleAtEnd;
- (double)maxScale;
- (id)maxScaleAttribute;
- (bool)p_isActionEffect:(id)arg1;
- (id)parentBuild;
- (Class)pluginClass;
- (id)previousAttributes;
- (id)requiredScaleAttributes;
- (id)requiredScales;
- (bool)requiresMaxScale;
- (void)setAnimateAtEndOfPreviousBuild:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setEventIndex:(long long)arg1;
- (void)setFinalAttributes:(id)arg1;
- (void)setIsInitialAmbientBuild:(bool)arg1;
- (void)setIsVisibleAtBeginning:(bool)arg1;
- (void)setIsVisibleAtEnd:(bool)arg1;
- (void)setParentBuild:(id)arg1;
- (void)setPreviousAttributes:(id)arg1;
- (long long)stageIndex;
- (double)startTime;

@end
