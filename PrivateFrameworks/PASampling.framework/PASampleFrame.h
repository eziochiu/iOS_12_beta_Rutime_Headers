/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PASampleFrame : NSObject <PASerializable> {
    unsigned long long  _address;
    NSMutableSet * _childFrames;
    PASampleFrame * _parentFrame;
}

@property unsigned long long address;
@property (readonly) NSSet *childFrames;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isKernel;
@property (readonly) bool isRootFrame;
@property (readonly) bool isTruncatedBacktraceFrame;
@property (readonly) PASampleFrame *parentFrame;
@property (readonly) Class superclass;
@property (readonly) unsigned long long symbolicationAddress;

+ (id)_newSampleFrameFromSerializedSampleFrame:(const struct { unsigned long long x1; unsigned long long x2; BOOL x3; BOOL x4; unsigned long long x5; long long x6; }*)arg1;
+ (id)addStack:(id)arg1 toSetOfRootFrames:(id)arg2;
+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;
+ (id)newSampleFrameWithStackFrame:(struct pa_stack_frame { unsigned long long x1; bool x2; }*)arg1 andParent:(id)arg2;

- (void).cxx_destruct;
- (void)_addChildFrame:(id)arg1;
- (id)_initWithSerializedSampleFrame:(const struct { unsigned long long x1; unsigned long long x2; BOOL x3; BOOL x4; unsigned long long x5; long long x6; }*)arg1;
- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (unsigned long long)address;
- (id)childFrames;
- (id)copyWithNewParent:(id)arg1;
- (bool)correspondsToStackshotFrame:(struct pa_stack_frame { unsigned long long x1; bool x2; }*)arg1;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)initWithAddress:(unsigned long long)arg1;
- (id)initWithSampleFrame:(id)arg1 andParent:(id)arg2;
- (id)initWithStackFrame:(struct pa_stack_frame { unsigned long long x1; bool x2; }*)arg1 andParent:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isKernel;
- (bool)isRootFrame;
- (bool)isTruncatedBacktraceFrame;
- (id)parentFrame;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg2 andDataBufferDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)querySymbolInformationForSelfAndChildrenUsingTask:(id)arg1 andKernelTask:(id)arg2 andSampleTimeSeriesDataStore:(id)arg3;
- (void)setAddress:(unsigned long long)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned long long)symbolicationAddress;

@end
