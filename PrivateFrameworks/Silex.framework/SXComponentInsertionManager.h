/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentInsertionManager : NSObject <SXComponentInsertionManager> {
    <SXBlueprintAnalyzer> * _blueprintAnalyzer;
    <SXComponentInsertionConditionEngine> * _conditionEngine;
    bool  _hasInsertedComponents;
    <SXComponentInserterProvider> * _inserterProvider;
}

@property (nonatomic, readonly) <SXBlueprintAnalyzer> *blueprintAnalyzer;
@property (nonatomic, readonly) <SXComponentInsertionConditionEngine> *conditionEngine;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasInsertedComponents;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXComponentInserterProvider> *inserterProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)blueprintAnalyzer;
- (id)conditionEngine;
- (bool)hasInsertedComponents;
- (id)initWithComponentInserterProvider:(id)arg1 conditionEngine:(id)arg2 blueprintAnalyzer:(id)arg3;
- (void)insertComponentsForBlueprint:(id)arg1 layoutDataProvider:(id)arg2;
- (id)insertForMarker:(id)arg1 remainingMarkerCount:(unsigned long long)arg2 inserter:(id)arg3 layoutProvider:(id)arg4 layoutDataProvider:(id)arg5;
- (id)inserterProvider;
- (void)setHasInsertedComponents:(bool)arg1;
- (void)updateLayoutDataProvider:(id)arg1 layoutBlueprint:(id)arg2 insert:(id)arg3 marker:(id)arg4;

@end
