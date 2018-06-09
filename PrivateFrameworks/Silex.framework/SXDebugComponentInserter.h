/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDebugComponentInserter : NSObject <SXComponentInserter> {
    <SXComponentInsertionConditionEngine> * _conditionEngine;
    NSArray * _conditions;
}

@property (nonatomic, readonly) <SXComponentInsertionConditionEngine> *conditionEngine;
@property (nonatomic, readonly) NSArray *conditions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)componentInsertForMarker:(id)arg1 layoutProvider:(id)arg2;
- (unsigned long long)componentTraits;
- (id)conditionEngine;
- (id)conditions;
- (bool)validateMarker:(id)arg1 remainingMarkerCount:(unsigned long long)arg2 layoutProvider:(id)arg3;

@end
