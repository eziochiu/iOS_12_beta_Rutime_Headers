/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPAggregateProgress : NSProgress {
    NSMutableArray * _childProgresses;
}

- (void).cxx_destruct;
- (void)addChild:(id)arg1;
- (void)cancel;
- (void)startReportingProgress;

@end
