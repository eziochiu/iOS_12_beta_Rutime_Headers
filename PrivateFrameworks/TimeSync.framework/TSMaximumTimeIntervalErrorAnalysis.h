/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSMaximumTimeIntervalErrorAnalysis : TSTimeErrorAnalysis {
    double * _mtie;
    double * _negativeTimeErrors;
}

@property (nonatomic, readonly, copy) NSArray *mtie;

+ (id)additionalScriptInitialization;
+ (id)additionalScriptPlots:(id)arg1;
+ (id)additionalScriptRecords;
+ (id)plotSize;
+ (id)plotTitle;
+ (id)plotYLabel;
+ (id)plotYLimits:(id)arg1;
+ (id)variableName;

- (void)_performAnalysisFromWindowSize:(long long)arg1 toWindowSize:(long long)arg2 stepSize:(long long)arg3;
- (void)dealloc;
- (bool)exportAnalysisToDirectoryURL:(id)arg1;
- (bool)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2 fromStartWindowSize:(long long)arg3 toEndWindowSize:(long long)arg4 stepSize:(long long)arg5;
- (bool)exportTimeErrorsToDirectoryURL:(id)arg1;
- (id)initWithTimeErrorValues:(id)arg1;
- (id)mtie;
- (id)mtieFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3;

@end
