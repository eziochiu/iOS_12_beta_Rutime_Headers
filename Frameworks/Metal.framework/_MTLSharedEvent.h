/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLSharedEvent : IOSurfaceSharedEvent <MTLSharedEvent> {
    NSString * _label;
    unsigned long long  _labelTraceID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) unsigned long long labelTraceID;
@property unsigned long long signaledValue;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)device;
- (unsigned int)encodeKernelSignalEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 value:(unsigned long long)arg2;
- (unsigned int)encodeKernelWaitEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 value:(unsigned long long)arg2;
- (id)initWithSharedEventHandle:(id)arg1;
- (id)label;
- (unsigned long long)labelTraceID;
- (id)newSharedEventHandle;
- (void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(id /* block */)arg3;
- (void)setLabel:(id)arg1;

@end
