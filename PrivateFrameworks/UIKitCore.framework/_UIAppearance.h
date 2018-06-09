/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIAppearance : NSObject {
    NSMutableArray * _appearanceInvocations;
    NSArray * _containerList;
    _UIAppearanceCustomizableClassInfo * _customizableClassInfo;
    NSMapTable * _invocationSources;
    NSMutableDictionary * _resettableInvocations;
}

@property (nonatomic, readonly) _UIAppearanceCustomizableClassInfo *_customizableClassInfo;
@property (setter=_setResettableInvocations:, nonatomic, retain) NSMutableDictionary *_resettableInvocations;

+ (void)_addWindow:(id)arg1 forSource:(id)arg2;
+ (id)_appearanceForClass:(Class)arg1 withContainerList:(id)arg2;
+ (id)_appearanceNodeForClassInfo:(id)arg1 containerList:(id)arg2;
+ (id)_appearanceWithClassInfo:(id)arg1 containerList:(id)arg2;
+ (void)_appendDescriptionOfNode:(id)arg1 toString:(id)arg2 atLevel:(unsigned long long)arg3;
+ (void)_applyInvocationsTo:(id)arg1 window:(id)arg2;
+ (void)_applyInvocationsTo:(id)arg1 window:(id)arg2 matchingSelector:(SEL)arg3;
+ (void)_applyInvocationsTo:(id)arg1 window:(id)arg2 matchingSelector:(SEL)arg3 onlySystemInvocations:(bool)arg4;
+ (id)_currentAppearanceSource;
+ (bool)_hasAnyCustomizations;
+ (bool)_hasCustomizationsForClass:(Class)arg1 guideClass:(Class)arg2;
+ (id)_newAppearanceWithClassInfo:(id)arg1 containerList:(id)arg2;
+ (id)_pendingRecordInvocationsForSource:(id)arg1;
+ (id)_recorderForSource:(id)arg1;
+ (id)_recordersExcludingSource:(id)arg1 withWindow:(id)arg2;
+ (void)_removeInvocationsForSource:(id)arg1;
+ (void)_removeWindow:(id)arg1 forSource:(id)arg2;
+ (id)_rootAppearancesNode;
+ (void)_setCurrentAppearanceSource:(id)arg1;
+ (void)_setInvalidatesViewsOnAppearanceChange:(bool)arg1;
+ (id)_windowsForSource:(id)arg1;
+ (id)appearancesAtNode:(id)arg1 withObject:(id)arg2;
+ (id)recursiveDescription;

- (id)_appearanceInvocations;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(unsigned long long)arg2;
- (SEL)_beginListeningForAppearanceEventsForSetter:(SEL)arg1;
- (id)_customizableClassInfo;
- (void)_handleGetterInvocation:(id)arg1;
- (void)_handleSetterInvocation:(id)arg1;
- (void)_invalidateAppearanceInWindow:(id)arg1;
- (bool)_isRecordingInvocations;
- (bool)_isValidAppearanceForCustomizableObject:(id)arg1;
- (void)_removeInvocationsForSource:(id)arg1;
- (id)_resettableInvocations;
- (id)_resettableInvocationsCreateIfNecessary;
- (void)_setResettableInvocations:(id)arg1;
- (id)_traitCollection;
- (void)dealloc;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)updateResettableSelectorsWithInvocation:(id)arg1 removeSelector:(bool)arg2;

@end
