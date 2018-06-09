/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataChartRepMultiDataBuildStages : NSObject <TSCHUnretainedParent> {
    unsigned long long  mCurrentStage;
    double  mDuration;
    TSCHMultiDataChartRep * mRep;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  mStages;
    double  mTotalDuration;
}

@property (nonatomic, readonly) unsigned long long currentStage;
@property (nonatomic, readonly) double duration;

+ (id)buildStagesWithRep:(id)arg1 stages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 totalDuration:(double)arg3;
+ (unsigned long long)dataSetIndexForRep:(id)arg1 buildStage:(unsigned long long)arg2;
+ (unsigned long long)numberOfFadingBuildStages;

- (void)advanceStage;
- (id)chartLayout;
- (void)clearParent;
- (unsigned long long)currentStage;
- (unsigned long long)dataSetIndexForStage:(unsigned long long)arg1;
- (void)dealloc;
- (double)duration;
- (bool)hasStage;
- (id)initWithRep:(id)arg1 stages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 totalDuration:(double)arg3;
- (bool)isBackgroundOnly;
- (bool)isBackgroundOnlyStage:(unsigned long long)arg1;
- (bool)isFadingInLayers;
- (bool)isLastStageBackgroundOnly;
- (void)setupLayoutDataSetIndexForCurrentStage;
- (void)setupLayoutDataSetIndexForNextStage;

@end
