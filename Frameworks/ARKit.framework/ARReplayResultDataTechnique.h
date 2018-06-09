/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARReplayResultDataTechnique : ARTechnique {
    NSSet * _resultDataClasses;
    id /* block */  _retrieveResultsForTimestampBlock;
}

@property (nonatomic, retain) NSSet *resultDataClasses;
@property (nonatomic, copy) id /* block */ retrieveResultsForTimestampBlock;

- (void).cxx_destruct;
- (bool)isEqual:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (id)resultDataClasses;
- (id /* block */)retrieveResultsForTimestampBlock;
- (void)setResultDataClasses:(id)arg1;
- (void)setRetrieveResultsForTimestampBlock:(id /* block */)arg1;

@end
