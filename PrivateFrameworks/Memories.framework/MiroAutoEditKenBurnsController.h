/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAutoEditKenBurnsController : NSObject {
    bool  _disableCroppingWithoutPet;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _endRect;
    NSArray * _featuredPersonsDetectedFaces;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _finishAreaOfInterest;
    bool  _hasAreasOfInterest;
    bool  _interestingRegionsEstablished;
    KenBurnsClip * _kbClip;
    bool  _kbReassignment;
    unsigned long long  _kbStyle;
    double  _maximumZoomValue;
    MiroMemory * _memory;
    unsigned long long  _panStyle;
    Project * _project;
    double  _projectAspect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _startRect;
    double  _targetAspect;
    bool  _targetSpecificPerson;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _titleSafeInterestingRegions;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unionOfAllFaceRegions;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unionOfAllInterestingRegions;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unionOfAllSaliencyRegions;
}

@property (nonatomic) bool disableCroppingWithoutPet;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } endRect;
@property (nonatomic, retain) NSArray *featuredPersonsDetectedFaces;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } finishAreaOfInterest;
@property (nonatomic) bool hasAreasOfInterest;
@property (nonatomic, readonly) double horizonNormalizedFromTop;
@property (nonatomic) bool interestingRegionsEstablished;
@property (nonatomic, retain) KenBurnsClip *kbClip;
@property (nonatomic) bool kbReassignment;
@property (nonatomic) unsigned long long kbStyle;
@property (nonatomic) double maximumZoomValue;
@property (nonatomic, retain) MiroMemory *memory;
@property (nonatomic) unsigned long long panStyle;
@property (nonatomic, retain) Project *project;
@property (nonatomic) double projectAspect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } startRect;
@property (nonatomic) double targetAspect;
@property (nonatomic) bool targetSpecificPerson;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } titleSafeInterestingRegions;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unionOfAllFaceRegions;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unionOfAllInterestingRegions;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unionOfAllSaliencyRegions;

+ (void)prepareKBClip:(id)arg1 project:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForAsset:(id)arg1 targetAspect:(double)arg2 memory:(id)arg3;

- (void).cxx_destruct;
- (void)_adjustZoomSpeedOfKenBurnsClip;
- (void)_customizePanOnlyKenBurnsClip;
- (void)_customizePortraitKB:(id)arg1 normalizedVerticalCenter:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_panFrameForStart:(bool)arg1;
- (double)_scaleToPanOffsetFromScale:(double)arg1;
- (void)applyKenBurnsForClip:(id)arg1 kenBurnsStyle:(unsigned long long)arg2 panStyle:(unsigned long long)arg3 kenBurnsPace:(unsigned long long)arg4 maxiumumZoomValue:(double)arg5;
- (void)assignStartAndEndRect;
- (bool)backgroundTreatmentRequiredForStartEndRect;
- (bool)canCropRectSafelyFillFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)canSupportKB;
- (double)clampZoomDifference:(double)arg1 kenBurnsPace:(unsigned long long)arg2;
- (bool)clipEligibleForNUpFraming:(id)arg1;
- (bool)clipRequiresOneUp:(id)arg1;
- (bool)disableCroppingWithoutPet;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endRect;
- (void)establishInterestingRegions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })extendAllTheThings:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })extendAllTheThings:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alignment:(long long)arg2;
- (id)featuredPersonsDetectedFaces;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finishAreaOfInterest;
- (void)finishConfiguringKBInfo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })forceFeaturedPersonZoomCrop;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })forceTitleZoomCrop;
- (bool)hasAreasOfInterest;
- (double)horizonNormalizedFromTop;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interestingRegionsAdjusted;
- (bool)interestingRegionsEstablished;
- (bool)isTitle;
- (id)kbClip;
- (bool)kbReassignment;
- (unsigned long long)kbStyle;
- (double)maximumZoomValue;
- (id)memory;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })noInformationCrop;
- (unsigned long long)panStyle;
- (void)prepareInterestingRegions;
- (id)project;
- (double)projectAspect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })roundValuesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDisableCroppingWithoutPet:(bool)arg1;
- (void)setEndRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFeaturedPersonsDetectedFaces:(id)arg1;
- (void)setFinishAreaOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHasAreasOfInterest:(bool)arg1;
- (void)setInterestingRegionsEstablished:(bool)arg1;
- (void)setKbClip:(id)arg1;
- (void)setKbReassignment:(bool)arg1;
- (void)setKbStyle:(unsigned long long)arg1;
- (void)setMaximumZoomValue:(double)arg1;
- (void)setMemory:(id)arg1;
- (void)setPanStyle:(unsigned long long)arg1;
- (void)setProject:(id)arg1;
- (void)setProjectAspect:(double)arg1;
- (void)setStartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTargetAspect:(double)arg1;
- (void)setTargetSpecificPerson:(bool)arg1;
- (void)setTitleSafeInterestingRegions:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUnionOfAllFaceRegions:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUnionOfAllInterestingRegions:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUnionOfAllSaliencyRegions:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startRect;
- (double)targetAspect;
- (bool)targetSpecificPerson;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleSafeInterestingRegions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unionOfAllFaceRegions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unionOfAllInterestingRegions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unionOfAllSaliencyRegions;

@end
