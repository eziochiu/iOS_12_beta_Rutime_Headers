/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIAppearanceRecorder : NSObject {
    NSString * _classNameToRecord;
    NSArray * _containerClassNames;
    NSMutableArray * _customizations;
    Class  _superclassToRecord;
    NSArray * _unarchivedCustomizations;
}

@property (setter=_setClassNameToRecord:, nonatomic, copy) NSString *_classNameToRecord;
@property (setter=_setContainerClassNames:, nonatomic, copy) NSArray *_containerClassNames;
@property (nonatomic, readonly) NSData *_serializedRepresentation;
@property (setter=_setSuperclassToRecord:, nonatomic) Class _superclassToRecord;

+ (id)_sharedAppearanceRecorder;
+ (id)_sharedAppearanceRecorderForClass:(Class)arg1 whenContainedIn:(id)arg2;
+ (id)_sharedAppearanceRecorderForClassNamed:(id)arg1 superclass:(Class)arg2 whenContainedIn:(id)arg3;

- (void)_applyCustomizations;
- (id)_classNameToRecord;
- (id)_containerClassNames;
- (void)_importCustomizations:(id)arg1 withArchiveVersion:(long long)arg2;
- (void)_recordInvocation:(id)arg1 withClassName:(id)arg2 containerClassNames:(id)arg3 traitCollection:(id)arg4 selectorString:(id)arg5 forRemoteProcess:(bool)arg6;
- (id)_serializedRepresentation;
- (void)_setClassNameToRecord:(id)arg1;
- (void)_setContainerClassNames:(id)arg1;
- (void)_setSuperclassToRecord:(Class)arg1;
- (Class)_superclassToRecord;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
